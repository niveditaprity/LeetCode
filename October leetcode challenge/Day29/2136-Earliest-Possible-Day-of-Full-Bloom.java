class Solution {
    public int earliestFullBloom(int[] plantTime, int[] growTime) {
        ArrayList<Pair<Integer,Integer>> pair=new ArrayList<>();
        for(int i=0;i<plantTime.length;i++){
            pair.add(new Pair(plantTime[i],growTime[i]));
        }
        Collections.sort(pair, new Comparator<Pair<Integer,Integer>>() {
            @Override
            public int compare(Pair<Integer,Integer> p1, Pair<Integer,Integer> p2) {
                return Integer.compare(p2.getValue(),p1.getValue());
            }
        });
        int start=0;
        int ans=0;
        for(Pair<Integer,Integer> temp:pair){
            start+=temp.getKey();
            ans=Math.max(ans,start+temp.getValue());
        }
        return ans;
    }
}

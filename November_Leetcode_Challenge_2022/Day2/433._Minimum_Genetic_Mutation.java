class Solution {
    public int minMutation(String start, String end, String[] bank) {
        char [] c= new char[]{'A','C','G','T'};
        Queue<String> que = new LinkedList<>();
        Set<String> visited= new HashSet<>();
        int count=0;
        que.add(start);
        visited.add(start);
        while(!que.isEmpty()){
            int size=que.size();
            while(size-->0){
                String temp=que.poll();
                if(temp.equals(end)){
                    return count;
                }
                for(char tempc: c){
                    for(int i=0;i<8;i++){
                         String tempstring = temp.substring(0, i) + tempc + temp.substring(i + 1);
                        if(!visited.contains(tempstring) && Arrays.asList(bank).contains(tempstring)){
                            que.add(tempstring);
                            visited.add(tempstring);
                        }
                    }
                }
            }
            count++;
        }
        return -1;
    }
    
}

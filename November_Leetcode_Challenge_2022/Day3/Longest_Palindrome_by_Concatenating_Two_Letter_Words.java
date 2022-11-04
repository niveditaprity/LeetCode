class Solution {
    public int longestPalindrome(String[] words) {
        HashMap<String,Integer> map= new HashMap<>();
        for(String word:words){
            map.put(word,map.getOrDefault(word,0)+1);
        }
        int maxcount=0;
        int count=0;
        boolean onetime=true;
         for (Map.Entry<String, Integer> e : map.entrySet()){
             String tempstring=e.getKey();
             int tempint=e.getValue();
             if(tempint==0)continue;
             if(tempstring.charAt(0)==tempstring.charAt(1)){
                 maxcount+=2*(tempint/2);
                 if(tempint%2!=0 && onetime){
                     maxcount++;
                     onetime=false;
                 }
                continue;
             }
             StringBuilder reversestring=new StringBuilder(tempstring).reverse();
             if(map.containsKey(reversestring.toString())){
                 count+=Math.min(tempint,map.get(reversestring.toString()));
                 map.put(reversestring.toString(),0);
             }
             //map.remove(tempstring);
         }
            return 4*count+2*maxcount;
    }
}

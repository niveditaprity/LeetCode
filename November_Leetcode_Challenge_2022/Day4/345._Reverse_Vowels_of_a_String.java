class Solution {
    public String reverseVowels(String s) {
        char []c = s.toCharArray();
        int start=0;
        int end=s.length()-1;
        while(start<end){
            while(start<end && c[start]!='a' && c[start]!='e' && c[start]!='i' && c[start]!='o' && c[start]!='u' && c[start]!='A' && c[start]!='E' && c[start]!='I' && c[start]!='O' && c[start]!='U')start++;
 
            while(start<end && c[end]!='a' && c[end]!='e' && c[end]!='i' && c[end]!='o' && c[end]!='u' && c[end]!='A'&& c[end]!='E' && c[end]!='I' && c[end]!='O' && c[end]!='U')end--;
            if(start<end){
                char temp=c[start];
                c[start]=c[end];
                c[end]=temp;
                start++;
                end--;
            }
 
        }
        return new String(c);
    }
}

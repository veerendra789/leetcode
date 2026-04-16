class Solution {
    public String mergeAlternately(String word1, String word2) {
        int s1=word1.length(),s2=word2.length();
        int i=0,j=0;
        String result="";
        while(i<s1 && j<s2){
            result+=word1.charAt(i);
            result+=word2.charAt(j);
            i++;
            j++;
        }
        while(i<s1){
            result+=word1.charAt(i);
            i++;
        }
        while(j<s2){
            result+=word2.charAt(j);
            j++;
        }
        return result;
    }
}
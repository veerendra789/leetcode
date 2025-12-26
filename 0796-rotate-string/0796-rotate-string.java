class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            if(rotate(s,i).equals(goal)){
                return true;
            }
        }
        return false;
    }
    public String rotate(String a,int n){
        n=n%a.length();
        String rot=a.substring(n)+a.substring(0,n);
        return rot;
    }
}
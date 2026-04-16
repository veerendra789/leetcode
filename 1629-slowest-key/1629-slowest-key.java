class Solution {
    public char slowestKey(int[] releaseTimes, String keysPressed) {
        int max=releaseTimes[0];
        char result=keysPressed.charAt(0);
        for(int i=1;i<releaseTimes.length;i++){
            int dur=releaseTimes[i]-releaseTimes[i-1];
            if(dur>max){
                max=dur;
                result=keysPressed.charAt(i);
            }
            if(dur==max){
                result=(char)Math.max(result,keysPressed.charAt(i));
            }
        }
        return result;
    }
}
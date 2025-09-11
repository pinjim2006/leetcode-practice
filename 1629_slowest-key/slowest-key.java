class Solution {
    public char slowestKey(int[] releaseTimes, String keysPressed) {
        int maxReleaseTimes = releaseTimes[0];
        char key = keysPressed.charAt(0);
        for(int i = 1; i < releaseTimes.length; i++){
            if(releaseTimes[i] - releaseTimes[i-1] > maxReleaseTimes){
                maxReleaseTimes = releaseTimes[i] - releaseTimes[i-1];
                key = keysPressed.charAt(i);
            }else if(releaseTimes[i] - releaseTimes[i-1] == maxReleaseTimes){
                key = keysPressed.charAt(i) > key ? keysPressed.charAt(i) : key;
            }
        }
        return key;
    }
}
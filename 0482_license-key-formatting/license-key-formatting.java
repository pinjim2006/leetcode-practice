class Solution {
    public String licenseKeyFormatting(String s, int k) {
        s = s.toUpperCase();
        StringBuilder build = new StringBuilder(s);
        for(int i = build.length() - 1; i >= 0; i--){
            if(build.charAt(i) == '-'){
                build.deleteCharAt(i);
            }
        }
        int tmpLen = build.length() % k;
        for(int i = build.length() - k; i > 0; i -= k){
            build.insert(i, '-');
        }
        return build.toString();
    }
}
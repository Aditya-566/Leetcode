class Solution {
    public int longestPalindrome(String s) {
        int[] freq = new int[128];
        for (char ch : s.toCharArray()) {
            freq[ch]++;
        }
        int ans = 0;
        for (int i = 0; i < 128; i++) {
            ans += (freq[i] / 2) * 2;
        }
        if (ans < s.length()) {
            ans++;
        }
        return ans;
    }
}
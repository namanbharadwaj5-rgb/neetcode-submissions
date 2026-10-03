class Solution {
public:
    int lengthOfLongestSubstring(string s) {

       vector<int> m(256, -1);
int i = 0, ans = 0;
for (int j = 0; j < s.size(); j++) {
    int old = m[s[j]];
    i = max(i, old + 1);
    m[s[j]] = j;
    ans = max(ans, j - i + 1);
}
return ans;
}
};
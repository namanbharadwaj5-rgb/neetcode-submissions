class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        j = 0          # pointer for s
        c = 0          # count of matched characters

        for i in range(len(t)):   # scan t left to right
            if j < len(s) and s[j] == t[i]:
                c += 1
                j += 1

        if c == len(s):
            return True
        else:
            return False

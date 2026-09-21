class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        HM = {}
        HM2 = {}

        if len(s) == len(t):
            for i in range(len(s)):
                HM[s[i]] = HM.get(s[i], 0) + 1
                HM2[t[i]] = HM2.get(t[i], 0) + 1

            if HM == HM2:
                return True
            else:
                return False
        else:
            return False

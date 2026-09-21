class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        word=s.split()
        ss=word[-1]
        return len(ss)
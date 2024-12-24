class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        dist_first=Counter(s)
        dist_second=Counter(t)
        return dist_first==dist_second
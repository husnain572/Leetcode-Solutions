class Solution:
    def maxScore(self, s: str) -> int:
        max_count=0
        
        
        for i in range(len(s)-1):
            left=right=''
            left_substr=s[:i+1]
            right_substr=s[i+1:]
            left_count=left_substr.count('0')
            right_count=right_substr.count('1')
            max_count=max(max_count,right_count+left_count)
        return max_count


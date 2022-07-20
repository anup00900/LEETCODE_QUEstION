class Solution:
    def distinctSubseqII(self, s: str) -> int:
        n=len(s)
        dp=[0]*(n+1)
        dp[0]=1
        dp[1]=2
        mod = int(1e9+7)
        for i in range(2,n+1):
            dup=0
            for j in range(i-1,0,-1):
                if s[j-1]==s[i-1]:
                    dup=dp[j-1]
                    break
            dp[i]=dp[i-1]*2-dup
        return int((dp[n] -1)%mod)
            
        
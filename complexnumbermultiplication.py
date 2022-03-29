class Solution:
    def complexNumberMultiply(self, num1: str, num2: str) -> str:
        r1,i1 = map(int,num1.strip('i').split('+'))
        r2,i2 = map(int,num2.strip('i').split('+'))
        
        r=r1*r2
        i=i1*i2
        r = r-i
        t=r1*i2+r2*i1
        ans=""
        if r == 0:
            ans=ans+'0'
        else:
            ans=ans+str(r)
        ans=ans+'+'
        ans=ans+str(t)
        ans=ans+'i'
        return ans
        
        
        
        
        
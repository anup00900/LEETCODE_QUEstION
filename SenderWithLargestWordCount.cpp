class Solution:
    def largestWordCount(self, messages: List[str], senders: List[str]) -> str:
        d=dict()
        for i in range(len(messages)):
            l = messages[i].split(" ")
            if senders[i] not in d:
                d[senders[i]]=len(l)
            else:
                d[senders[i]]=d[senders[i]]+len(l)
                
        m=0     
        ans=""
        for key in sorted(d):
            if d[key]>=m:
                ans=key
                m=d[key]
        return ans         
                
                
                
            
        
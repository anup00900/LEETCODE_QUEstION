class Solution:
    def simplifyPath(self, path: str) -> str:
        if len(path)==0:
            return path
        l=path.split('/')
        j = 0
        ans='/'
        stack=[]
        l=[i for i in l if i != ""]  
        l=[i for i in l if i != "."]
        for i in l:
            if i != '..':
                stack.append(i)
            else:
                if stack:
                    stack.pop()
        for i in stack:
            ans+=i 
            ans+='/'
        if len(ans)==1:
            return ans
        return(ans[:-1])
            
            
            
        
        
class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        stack=[]
        j=0
        k=-1
        for i in pushed:
            stack.append(i)
            k+=1
            while j<len(popped) and k!=-1 and stack[k]==popped[j]:
                stack.pop()
                j+=1
                k-=1
            
        if k==-1 and j==len(popped) :
            return 1
        return 0
        
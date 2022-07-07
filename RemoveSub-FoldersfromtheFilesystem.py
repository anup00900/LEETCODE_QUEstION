class Solution:
    def removeSubfolders(self, folder: List[str]) -> List[str]:
        folder.sort()
        s=set()
        for i in folder:
            f=0
            for j in range(len(i)):
                if i[j]=="/":
                    if i[:j] in s:
                        f=1
                        break
            if f==0:
                s.add(i)
        #print(type(s))       
        return s
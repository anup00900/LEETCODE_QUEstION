class Solution:
    def calPoints(self, ops: List[str]) -> int:
        record=[]
        for i in ops:
            if i.strip('-').isdigit():
                record.append(int(i))
            elif i == "D":
                t = record[-1]
                record.append(2*t)
            elif i == "C":
                record.pop(-1)
            elif i == "+":
                t = record[-1]
                p = record[-2]
                record.append(p+t)
        return sum(record)        
                
                
                
        
class Solution:
    def evalRPN(self, toks: List[str]) -> int:
        l=[]
        for i in toks:
            if i.lstrip('-').isdigit():
                l.append(int(i))
            elif i == '+':
                r1=l[-1]
                l.pop(-1)
                r2=l[-1]
                l.pop(-1)
                l.append(r1+r2)
            elif i == '*':
                r1=l[-1]
                l.pop(-1)
                r2=l[-1]
                l.pop(-1)
                l.append(r1*r2)
            elif i == '-':
                r1=l[-1]
                l.pop(-1)
                r2=l[-1]
                l.pop(-1)
                l.append(r2-r1) 
            elif i == '/':
                r1=l[-1]
                l.pop(-1)
                r2=l[-1]
                l.pop(-1)
                l.append(int(float(r2)/r1))   
        return l[0]        
                
                
            
            
            
        
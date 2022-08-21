class Solution:
    def simplify(self,d1):
        cof=0
        val=0
        d = d1.split('+')
        print(d)
        for e in d:
            if 'x' in e:
                if e.strip('x').isdigit():#2
                    cof+=int(e.strip('x'))
                elif e.strip('x')[1:].isdigit():#-2
                    cof+=int(e.strip('x'))
                else:
                    cof+=int(e.strip('x')+'1')
            else:#-1,+1
                if len(e)>0:
                    val+=int(e)
                else:
                    val+=0
        return cof,val
                
        
    def solveEquation(self, eqn: str) -> str:
        l,r = eqn.replace('-','+-').split('=')
        lc,lv = self.simplify(l)
        rc,rv = self.simplify(r)
        cof = lc-rc
        val = rv-lv
        if cof == 0 and val == 0:
            return "Infinite solutions"
        if cof == 0:
            return "No solution"
        return "x="+str(val//cof)
            
        
        
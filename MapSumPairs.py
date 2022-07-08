from collections import defaultdict
def val():
    return -1


class MapSum:

    
    def __init__(self):
        self.d = defaultdict(val)
        
        

    def insert(self, key: str, val: int) -> None:
        self.d[key]=val
        
            
        

    def sum(self, prefix: str) -> int:
        s=0
        for k,v in self.d.items():
            print(k)
            if k.startswith(prefix):
                s+=v
        return s        
                
        


# Your MapSum object will be instantiated and called as such:
# obj = MapSum()
# obj.insert(key,val)
# param_2 = obj.sum(prefix)
class Solution:
    def intToRoman(self, num: int) -> str:
        hashmap=[['I',1],['IV',4],['V',5],['IX',9],['X',10],['XL',40],['L',50],['XC',90],['C',100],['CD',400],['D',500],['CM',900],['M',1000]]
        
        string = ""
        for s,i in reversed(hashmap):
            if num//i:
                string +=s*(num//i)
            num = num%i
        return string    
            
        
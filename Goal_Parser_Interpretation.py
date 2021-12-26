class Solution:
    def interpret(self, command: str) -> str:
        s=""
        for i in range(0,len(command)+1):
            if command[i:].startswith("G"):
                s=s+"G"
            elif command[i:].startswith("()"):
                s=s+"o"
            elif command[i:].startswith("al"):
                s=s+"al"
        return s        
        
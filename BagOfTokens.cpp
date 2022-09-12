class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int score=0;
        int i=0;
        int j=tokens.size()-1;
        
        sort(tokens.begin(),tokens.end());
        
        while(i<=j)
        {
            
            if(power>=tokens[i])
            {
                score=score+1;
                power=power-tokens[i];
                i++;
            }
            else 
            {
                if(score>=1 and power<tokens[i] and i!=j)
                {
                    score=score-1;
                    power=power+tokens[j];
                    j--;
                }
                else
                {
                    break;
                }
            }
            
            
        }
        return score;
        
        
        
        
        
    }
};
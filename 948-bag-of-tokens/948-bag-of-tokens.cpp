class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int n = tokens.size();
        int i=0;
        int j=n-1;
        int score=0;
        while(i<=j) {
            if(tokens[i]>power && score==0) {
                break;
            }
            else if(tokens[i]<=power){
                power-=tokens[i];
                score++;
                i++;
            }
            else if(score>=1){
                if(i==j) break;
                power+=tokens[j];
                j--;
                score-=1;
            }
        }
        return score;
    }
};
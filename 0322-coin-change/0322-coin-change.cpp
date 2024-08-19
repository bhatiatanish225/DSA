
class Solution {
public:


    int memo(vector<int>& coins , int amount,vector<int>&dp){

        int mini=INT_MAX;
        if(amount==0){
            return 0;
        }

        if(dp[amount]!=-1){
            return dp[amount];
        }

    
        for(int i=0;i<coins.size();i++){
            if(amount-coins[i]>=0){
                int ans=memo(coins,amount-coins[i],dp);
                if(ans!=INT_MAX){
                    int final_ans=1+ans;
                    mini=min(mini,final_ans);
                }
            }
        }
        dp[amount]=mini;
        return dp[amount];

    }
    int coinChange(vector<int>& coins, int amount) {
       
        int n=amount;
        vector<int>dp(n+1,-1);
        int result=memo(coins,amount,dp);
        if(result==INT_MAX){
            return -1;
        }
        else{
            return result;
        }
        
    }
};

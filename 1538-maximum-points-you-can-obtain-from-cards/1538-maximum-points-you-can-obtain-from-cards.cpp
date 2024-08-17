class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum=0;
        int rightsum=0;

        for(int i=0;i<k;i++){
            leftsum=leftsum+cardPoints[i];

        }
        int maxsum=leftsum;
        int rindex=cardPoints.size()-1;
        for( int i=k-1;i>=0;i--){
            leftsum=leftsum-cardPoints[i];
            rightsum=rightsum+cardPoints[rindex];
            rindex--;
            maxsum=max(maxsum,rightsum+leftsum);

        }
        return maxsum;

        
    }
};
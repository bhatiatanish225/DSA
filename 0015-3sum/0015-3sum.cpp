class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k= nums.size()-1;

            if(i>0 && nums[i]==nums[i-1]  ){
                continue;
            }

            while(j<k){
                int total=nums[i]+nums[j]+nums[k];

                if(total<0){
                    j++;
                }
                else if (total>0){
                    k--;
                
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                while(  nums[j]==nums[j-1] && j<k){
                j++;
            }
                }

            }


        }
        return ans;

        
    }
};
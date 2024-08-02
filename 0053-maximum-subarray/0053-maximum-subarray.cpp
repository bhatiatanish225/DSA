class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>arr;
        int current_sum=0;
        for(int i=0;i<nums.size();i++){

            current_sum =current_sum + nums[i];
             arr.push_back(current_sum);
          
            if(current_sum<0){
                current_sum=0;
            }
           
                 
           



        }
        int max=*max_element(arr.begin(),arr.end());
        return max;
        
    }
};
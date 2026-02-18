class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_value=nums[0];
        int sum=0;

      
        for(int i=0;i<=nums.size()-1;i++){
            sum+=nums[i];
            max_value=max(max_value,sum);
            if(sum<0){
                sum=0;

            }
        }
        return max_value;
        
    }
};
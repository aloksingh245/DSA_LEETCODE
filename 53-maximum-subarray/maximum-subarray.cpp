class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int value=nums[0];
        for(int i=0;i<n;i++){
            sum+=nums[i];
            value=max(value,sum);

            if(sum<0){
                sum=0;
            }
        }
        return value;

        
    }
};
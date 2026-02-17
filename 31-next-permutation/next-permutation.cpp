class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int poki=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                poki=i;
                break;
            }
        }
        if(poki==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        for(int i=n-1;i>=poki;i--){
            if(nums[i]>nums[poki]){
                swap(nums[i],nums[poki]);
                break;
            }
        }
        
        int i=poki+1 , j=n-1;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
};
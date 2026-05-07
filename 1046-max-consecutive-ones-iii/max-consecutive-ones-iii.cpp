class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size();
        int maxlen=0;
        int r=0,l=0,zerocount=0;

        while(r<n){

            if(nums[r]==0){
                zerocount++;
            }

            if(zerocount>k){
                if(nums[l]==0){
                    zerocount--;
                    
                }
                l++;
            }
            if(zerocount<=k){
                int len=r-l+1;
                maxlen=max(len,maxlen);
                
            }
            r++;
        }
        return maxlen;

       
        
    }
};
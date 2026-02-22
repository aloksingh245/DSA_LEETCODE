class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        int b=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(s.find(nums[i])!=s.end()){
                b=nums[i];
                break;
            }
            s.insert(nums[i]);
            

        }
        return b;
        
    }
};
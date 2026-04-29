class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s;
        int n=nums.size();
        vector<int>ans(n);
        

        for(int i=2*n-1;i>=0;i--){

            int index=i%n;

            int currentelement=nums[index];

            while(!s.empty() && s.top()<=currentelement){
                s.pop();
            }

            if(i<n){
                if(s.empty()){
                    ans[i]=-1;

                }
                else{
                    ans[i]=s.top();
                }
            
            }
            s.push(currentelement);
        }
        return ans;

    
    }
};
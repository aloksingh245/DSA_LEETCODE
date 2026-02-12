class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int sum=0;
        int max_input =arr[0];
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            max_input=max(max_input,sum);
            if(sum<0){
                sum=0;
            }
        }
        return max_input;
        
    }    
};
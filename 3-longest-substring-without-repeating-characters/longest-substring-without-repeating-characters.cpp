class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int haslen=256;
        int has[haslen];

        for(int i=0;i<haslen;i++){
            has[i]=-1;
        }

        int l=0, r=0, maxlen=0;
        while(r<n){
            if(has[s[r]]!=-1){
                
                l=max(has[s[r]]+1,l);

                
            }
            int len=r-l+1;

            maxlen=max(maxlen, len);
            has[s[r]] = r;
            r++;
        }
        return maxlen;
        
    }
};
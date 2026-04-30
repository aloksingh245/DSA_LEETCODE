class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lptr = 0;
        int rptr = n - 1;
        int lmax = 0;
        int rmax = 0;
        int ans = 0;

        while (lptr < rptr) {
            lmax = max(lmax, height[lptr]);
            rmax = max(rmax, height[rptr]);

            if (lmax < rmax) {
                ans += lmax - height[lptr];
                lptr++;
            } else {
                ans += rmax - height[rptr];
                rptr--;
            }
        }
        return ans;
    }
};
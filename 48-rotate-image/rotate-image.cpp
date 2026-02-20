class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        for(int i=0;i<n/2;i++){
            for(int j=i;j<n-i-1;j++){
                //shiftingstart
                //bottem left value
                int temp=matrix[n-1-j][i];

                //right bottom shift
                matrix[n-1-j][i]=matrix[n-1-i][n-1-j];
                //top right shift
                matrix[n-1-i][n-1-j]=matrix[j][n-1-i];
                //top left shift
                matrix[j][n-1-i]=matrix[i][j];

                //top value
                matrix[i][j]= temp;
            }
        }
        
        
    }
};
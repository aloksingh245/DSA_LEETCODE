class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>traingle;

        for(int i=0;i<numRows;i++){
            vector<int>row(i+1,1);

            for(int j=1;j<i;j++){
                //importent formulaa to find middle value of the pascal traingle where we go i-1 row up and j-1 is the left elemint and j is  is the second element;
                row[j]=traingle[i-1][j-1]+traingle[i-1][j];
            }
            traingle.push_back(row);
        }
        return traingle;
        
    }
};
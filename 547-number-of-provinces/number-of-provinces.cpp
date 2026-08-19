class Solution {
private:

    void dfs(int node, vector<vector<int>>& adjls, vector<int>& vis) {

        vis[node] = 1;

        for(auto it : adjls[node]) {

            if(!vis[it]) {
                dfs(it, adjls, vis);
            }
        }
    }

public:

    int findCircleNum(vector<vector<int>>& adj) {

        int v = adj.size();

        vector<vector<int>> adjls(v);

        for(int i = 0; i < v; i++) {

            for(int j = 0; j < v; j++) {

                if(adj[i][j] == 1 && i != j) {
                    adjls[i].push_back(j);
                }
            }
        }

        vector<int> vis(v, 0);

        int count = 0;

        for(int i = 0; i < v; i++) {

            if(!vis[i]) {

                count++;

                dfs(i, adjls, vis);
            }
        }

        return count;
    }
};
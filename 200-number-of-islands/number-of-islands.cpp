#include <vector>

class Solution {
private:
    void dfs(std::vector<std::vector<char>>& grid, int r, int c) {
        int rows = grid.size();
        int cols = grid[0].size();
        
        // Base case: check boundaries and if the current cell is water ('0')
        if (r < 0 || c < 0 || r >= rows || c >= cols || grid[r][c] == '0') {
            return;
        }
        
        grid[r][c] = '0'; // Mark the current cell as visited by sinking it
        
        // Explore all 4 adjacent directions
        dfs(grid, r + 1, c); // Down
        dfs(grid, r - 1, c); // Up
        dfs(grid, r, c + 1); // Right
        dfs(grid, r, c - 1); // Left
    }

public:
    int numIslands(std::vector<std::vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) {
            return 0;
        }
        
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                // If a piece of land is found, it's a new island
                if (grid[r][c] == '1') {
                    count++;
                    dfs(grid, r, c); // Sink the entire island
                }
            }
        }
        
        return count;
    }
};

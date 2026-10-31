class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        if (k==1) return grid;
        int left=y , right=(x+k)-1;
        for(int i=x;i<grid.size();++i){
            if(i>right) break;
            for(int j=y;j<y+k;++j){
                swap(grid[i][j],grid[right][left]);
                left++;
            }
            right--;
            left=y;
        }
        return grid;
    }
};
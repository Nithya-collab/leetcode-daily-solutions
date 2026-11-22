class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size(); 
        int n = boxGrid[0].size();
       vector<vector<char>> rotate(n,vector<char>(m));

        for(int i=0;i<m;++i){
            for(int j=0;j<boxGrid[i].size();++j){
                rotate[j][m-1-i] = boxGrid[i][j];
            }
        }

        int col=0;

        while(col < rotate[0].size()){
           int row=rotate.size()-1;
           int dest=rotate.size()-1;
          while(row >=0){
             if(rotate[row][col] == '.' && row >= dest){
                 dest = row;
                
             }
             else if(rotate[row][col] == '*'){
                 dest = row-1;
                
             }
             else if(rotate[row][col] == '#'){
                   swap(rotate[row][col],rotate[dest][col]);
                   dest--;
                  
             }
              row--;
        }

        col++;
        }
        
       return rotate;
    }
};
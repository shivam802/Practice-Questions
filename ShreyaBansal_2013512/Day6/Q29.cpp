class Solution {
public:
    
    int numRookCaptures(vector<vector<char>>& board) {
        int nx,ny,res=0;
        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
                if(board[i][j]=='R')
                {
                     nx=i;
                     ny=j;
                }
        vector<vector<int>> direction={{1,0},{0,1},{-1,0},{0,-1}};
        for(auto x:direction)
        {
            for (int i = nx + x[0], j = ny + x[1]; 0 <= i && i < 8 && 0 <= j && j < 8; i += x[0], j += x[1]) {
                if (board[i][j] == 'p') res++;
                if (board[i][j] != '.') break;
            }
        }
        return res;
        }
};

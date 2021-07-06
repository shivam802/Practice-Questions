class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int nx=0,ny=0,nz=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]!=0)
                    nx++;
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            int max=0;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]>max)
                    max=grid[i][j];
            }
            ny=ny+max;
        }
        for(int j=0;j<grid[0].size();j++)
        { int max=0;
            for(int i=0;i<grid.size();i++)
            {
                if(grid[i][j]>max)
                    max=grid[i][j];
            }
         nz+=max;
        }
        return(nx+ny+nz);
    }
};

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i<n-1&&j<m-1&&matrix[i][j]!=matrix[i+1][j+1])
                {
                    flag=false;
                    return false;
                    
                }
            }
        }
      return true;
    }
};

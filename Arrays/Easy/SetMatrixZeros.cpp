//Space:O(n^2)
//Time:O(n^3)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> newmatrix;
        newmatrix=matrix;
    
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    int temp=0;
                    int temp2=0;
                    while(temp<n){
                        newmatrix[temp][j]=0;

                        temp++;
                    }
                    while(temp2<m){
                        newmatrix[i][temp2]=0;

                        temp2++;
                    }
                }
            }
        }

    matrix=newmatrix;  
    }
};

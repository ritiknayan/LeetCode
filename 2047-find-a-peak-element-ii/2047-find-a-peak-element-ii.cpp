class Solution {
public:
    int findmaxrowindex(vector<vector<int>>& mat, int row, int col, int mid){

        int index = -1;
        int maxElement = -1;

        for(int i =0;i<row;i++){
          if(mat[i][mid] > maxElement){
            maxElement = mat[i][mid];
            index = i;
          }
        }
         return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int row = mat.size();
        int col = mat[0].size();
        int s = 0;
        int e = col -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            int maxRowIndex = findmaxrowindex(mat,row,col,mid);

            int left = mid - 1 >=0 ? mat[maxRowIndex][mid-1] : -1;
            int right = mid + 1 < col ? mat[maxRowIndex][mid+1] : -1;

            if(mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right){
                return {maxRowIndex,mid};
            }
            if(mat[maxRowIndex][mid] > left){
                s= mid +1;
            
            }
            else{
               e= mid -1;
            }
        }


        return {-1,-1};
    }
};
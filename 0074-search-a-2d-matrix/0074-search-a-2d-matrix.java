class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int left=0;
        int row=matrix.length,col=matrix[0].length;
        int right=row*col-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            int rowx=mid/col;
            int colx=mid%col;
            if(matrix[rowx][colx]==target){
                return true;
            }else if(matrix[rowx][colx]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return false;
    }
}
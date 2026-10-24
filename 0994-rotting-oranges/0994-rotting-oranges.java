class Solution {
    public int orangesRotting(int[][] grid) {
        // int[] source=new int[2]; 

        return bfs(grid);
    }
    int bfs(int[][] grid){
        Queue<int[]> q=new LinkedList<>();
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[i].length;j++){
                if(grid[i][j]==2){
                    q.offer(new int[]{i,j});
                }
            }
        }
        int count=-1;
        while(!q.isEmpty()){
            int i=0,j=0;
            int size = q.size();
            for(int k=0;k<size;k++){
                int[] temp=q.remove();
                i = temp[0];
                j = temp[1];
                if(j<grid[i].length-1 && grid[i][j+1]==1){
                    grid[i][j+1] = 2;
                    
                    q.add(new int[]{i,j+1});
                }if(j>0 && grid[i][j-1]==1){
                    grid[i][j-1] = 2;
                    
                    q.add(new int[]{i,j-1});
                }if(i<grid.length-1 && grid[i+1][j]==1){
                    grid[i+1][j] = 2;
                    
                    q.add(new int[]{i+1,j});
                }if(i>0 && grid[i-1][j]==1){
                    grid[i-1][j] = 2;
                    
                    q.add(new int[]{i-1,j});
                }

            }
            count++;
        }
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[i].length;j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return count == -1 ? 0: count;
    }
}
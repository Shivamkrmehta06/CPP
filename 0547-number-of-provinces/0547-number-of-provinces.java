class Solution {
    public int findCircleNum(int[][] isConnected) {
        int v=isConnected.length;
        boolean[] vis=new boolean[v];
        int count=0;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                count++;
                dfs(i,isConnected,vis);
            }
        }
        System.out.println(count);
        return count;
    }
    void dfs(int src,int[][] adj,boolean[] vis){
        vis[src]=true;
        for(int i=0;i<adj.length;i++){
            if(adj[src][i]==1&&!vis[i]){
                dfs(i,adj,vis);
            }
        }
    }
}
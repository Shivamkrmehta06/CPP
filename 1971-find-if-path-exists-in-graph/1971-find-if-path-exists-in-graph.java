class Solution {
    static void dfs(int source,ArrayList<ArrayList<Integer>> adj,boolean[] vis,ArrayList<Integer> ans){
        vis[source]=true;
        ans.add(source);
        for(int nbr:adj.get(source)){
            if(!vis[nbr]){
                dfs(nbr,adj,vis,ans);
            }
        }
    }
    public boolean validPath(int n, int[][] edges, int source, int destination) {
        boolean[] vis=new boolean[n];
        ArrayList<Integer> ans=new ArrayList<>();
        ArrayList<ArrayList<Integer>> adj=new ArrayList<>();
        for(int i=0;i<n;i++){
            adj.add(new ArrayList<>());
        }
        for(int[] x:edges){
            int u=x[0];
            int vw=x[1];
            adj.get(u).add(vw);
            adj.get(vw).add(u);
        }
        dfs(source,adj,vis,ans);
        return vis[destination];
    }
}
class Solution {
    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
        int v=rooms.size();
        boolean[] vis=new boolean[v];
        ArrayList<Integer> ans=new ArrayList<>();
        dfs(0,rooms,vis,ans);
        return v==ans.size();
    }
    void dfs(int src,List<List<Integer>> adj,boolean[] vis,ArrayList<Integer> ans){
        vis[src]=true;
        ans.add(src);
        for(int nbr:adj.get(src)){
            if(!vis[nbr]){
                dfs(nbr,adj,vis,ans);
            }
        }
    }
}
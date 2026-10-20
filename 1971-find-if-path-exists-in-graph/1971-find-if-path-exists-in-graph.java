class Solution {
    public boolean validPath(int n, int[][] edges, int source, int destination) {
        ArrayList<ArrayList<Integer>> adj=new ArrayList<>();
        for(int i=0;i<n;i++){
            adj.add(new ArrayList<>());
        }
        for(int[] x:edges){
            int u=x[0];
            int v=x[1];
            adj.get(u).add(v);
            adj.get(v).add(u);
        }
        boolean[] vis=new boolean[n];
        return bfs(source,destination,vis,adj);
    }
    boolean bfs(int source,int destination,boolean[] vis,ArrayList<ArrayList<Integer>> adj){
        Queue<Integer> q=new LinkedList<>();
        q.offer(source);
        vis[source]=true;
        while(!q.isEmpty()){
            int node=q.poll();
            if(node==destination) return true;
            for(int nbr:adj.get(node)){
                if(!vis[nbr]){
                    vis[nbr]=true;
                    q.offer(nbr);
                }
            }
        }
        return false;
    }
}
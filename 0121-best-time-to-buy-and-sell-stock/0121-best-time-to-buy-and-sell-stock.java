class Solution {
    public int maxProfit(int[] prices) {
        int cp=Integer.MAX_VALUE;
        int fans=Integer.MIN_VALUE;
        ArrayList<Integer> ans=new ArrayList<>();
        for(int i=0;i<prices.length;i++){
            cp=Math.min(prices[i],cp);
            int xi=prices[i]-cp;
            ans.add(xi);
        }
        for(Integer x:ans){
            fans=Math.max(fans,x);
        };
        System.out.println(fans);
        return fans;
    }
}
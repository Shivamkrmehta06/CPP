class Solution {
    static void solve(List<List<Integer>> ans,List<Integer> output,int[] nums,int index){
        if(index>=nums.length){
            ans.add(new ArrayList<>(output));
            return;
        }
        solve(ans,output,nums,index+1);
        int element=nums[index];
        output.add(element);
        solve(ans,output,nums,index+1);
        output.remove(output.size() - 1);
    }
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ans=new ArrayList<>();
        List<Integer> output=new ArrayList<>();
        int index=0;
        solve(ans,output,nums,index);
        return ans;
    }
}
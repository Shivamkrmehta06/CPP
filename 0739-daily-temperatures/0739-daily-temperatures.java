class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int[] ans=new int[temperatures.length];
        Stack<Integer> st=new Stack<>();
        for(int i=0;i<temperatures.length;i++){
            while(!st.isEmpty()&&temperatures[st.peek()]<temperatures[i]){
                int top=st.peek();
                ans[top]=i-top;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
}
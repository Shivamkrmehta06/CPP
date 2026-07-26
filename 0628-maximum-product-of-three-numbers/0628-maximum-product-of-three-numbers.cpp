class Solution {
private:
    void solve(vector<int> &nums,vector<int> &ans){
        if(nums.empty()){
            return;
        }
        for(int i=0;i<nums.size();i++){
            int size = nums.size();
            int d1 = i+1;
            int d2 = i+2;
            if(d1<size&&d2<size){
                int pz = nums[i]*nums[d1]*nums[d2];
                ans.push_back(pz);
                nums.erase(nums.begin()+i);
            }
        }
        solve(nums,ans);
    }
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int d1 = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int d2 = nums[0]*nums[1]*nums[nums.size()-1];
        return max(d1,d2);    
    }
};
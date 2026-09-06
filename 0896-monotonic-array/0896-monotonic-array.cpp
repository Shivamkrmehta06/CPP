class Solution {
private:
    bool asc(vector<int> &nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true;
    }
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> xi=nums;
        reverse(xi.begin(),xi.end());
        bool an1=asc(xi);
        bool an2=asc(nums);
        cout<<an1<<endl<<an2<<endl;
        return an1||an2;
    }
};
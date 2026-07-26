class Solution {
private:
    int reverse(int num){
        int ans = 0;
        while(num>0){
            int digit = num%10;
            ans = (ans*10)+digit;
            num = num/10;
        }
        return ans;
    }
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int rev = reverse(nums[i]);
            nums.push_back(rev);
        }
        set<int> s;
        for(auto x:nums) s.insert(x);
        return s.size();
    }
};
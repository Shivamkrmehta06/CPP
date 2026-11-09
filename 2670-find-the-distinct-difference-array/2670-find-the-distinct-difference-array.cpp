class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> suffixDistinct(n + 1, 0);
        unordered_set<int> seenSuffix;

        for (int i = n - 1; i >= 0; --i) {
            seenSuffix.insert(nums[i]);
            suffixDistinct[i] = seenSuffix.size();
        }

        vector<int> diff(n);
        unordered_set<int> seenPrefix;

        for (int i = 0; i < n; ++i) {
            seenPrefix.insert(nums[i]);
            int prefixCount = seenPrefix.size();
            int suffixCount = suffixDistinct[i + 1]; 
            diff[i] = prefixCount - suffixCount;
        }
        return diff;
    }
};
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int> ump1, ump2, ump3;
        for(auto x:nums1) ump1[x] = 1;
        for(auto x:nums2) ump2[x] = 1;
        for(auto x:nums3) ump3[x] = 1;
        vector<int> ans;
        for(int i=1;i<=100;i++){
            int ax = ump1[i]+ump2[i]+ump3[i];
            if(ax>=2){
                ans.push_back(i);
            }
        }
        for(auto x:ans) cout<<x<<" ";
        return ans;

    }
};
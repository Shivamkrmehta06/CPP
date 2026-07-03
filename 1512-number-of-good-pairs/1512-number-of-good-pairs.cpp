class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        // for(auto it=mp.begin();it!=mp.end();it++){
        //     cout<<it->first<<"->"<<it->second<<endl;
        // }
        // n*(n-1)/2
        int gs = 0;
        for(int i = 0;i<mp.size();i++){
            int n = mp[i];
            int c = n*(n-1)/2;
            gs += c;
        }
        cout<<gs<<" ";
        return gs;
    }
};
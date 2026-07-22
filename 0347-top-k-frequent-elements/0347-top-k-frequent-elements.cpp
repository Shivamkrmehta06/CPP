class Solution {
private:
    void solve(vector<int> &ans,unordered_map<int,int> &ump,int &k,int &maxi,int &maxfreq){
        if(k==0){
            return;
        }
        maxfreq = INT_MIN;
        for(auto i:ump){
            if(i.second>maxfreq){
                maxfreq = i.second;
                maxi = i.first;
            }
        }
        ans.push_back(maxi);
        ump.erase(maxi);
        k--;
        solve(ans,ump,k,maxi,maxfreq);
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        for(int i = 0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        vector<int> ans;
        int maxi;
        int maxfreq = INT_MIN;
        for(auto i:ump) cout<<i.first<<"->"<<i.second<<endl;
        solve(ans,ump,k,maxi,maxfreq);
        return ans;
    }
};
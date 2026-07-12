class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp;
        temp.assign(arr.begin(),arr.end());
        sort(temp.begin(),temp.end());
        map<int,int> mp;
        for(auto x:temp) cout<<x<<" ";
        cout<<endl;
        int k = 1;
        for(int i=0;i<arr.size();i++){
            if(mp.find(temp[i])==mp.end()){
                mp[temp[i]] = k++;
            }
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            cout<<it->first<<"->"<<it->second<<endl;
        }
        vector<int> ans(arr.size());
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end()){
                ans[i] = mp[arr[i]];
            }
        }
        cout<<endl;
        for(auto x:ans) cout<<x<<" ";
        return ans;
    }
};
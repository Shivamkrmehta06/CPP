class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> ump;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                ump[grid[i][j]]++;
            }
        }
        vector<int> ans;
        int size = ump.size()+1;
        int actualSum = 0,arraySum=0;
        for(int i=1;i<=size;i++){
            actualSum+=i;
        }for(auto x:ump){
            arraySum+=x.first;
            if(x.second>1){
                ans.push_back(x.first);
            }
        }
        int xi = actualSum - arraySum;
        ans.push_back(xi);
        return ans;
    }
};
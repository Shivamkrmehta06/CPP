class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        for(auto x:operations){
            if(x=="C"){
                ans.pop_back();
            }
            else if(x=="D"){
                ans.push_back(2*ans.back());
            }
            else if(x=="+"){
                int n = ans.size();
                ans.push_back(ans[n-1]+ans[n-2]);
            }
            else{
                ans.push_back(stoi(x));
            }
        }
        int sum = 0;
        for(auto x:ans) sum+=x;
        return sum;
    }
};
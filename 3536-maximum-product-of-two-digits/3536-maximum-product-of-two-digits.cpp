class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;
        while(n!=0){
            int digit = n%10;
            ans.push_back(digit);
            n = n/10;
        }
        int multi = 1;
        sort(ans.begin(),ans.end());
        int d1 = ans[ans.size()-1];
        int d2 = ans[ans.size()-2];
        multi = d1*d2;
        return multi;
    }
};
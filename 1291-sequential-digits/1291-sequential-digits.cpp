class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> ans;
        int lowDigits = to_string(low).length();  
        int highDigits = to_string(high).length();
        for(int len = lowDigits; len <= highDigits; len++)
        {
            for(int i = 0; i + len <= s.length(); i++)
            {       
                string dp = "";
                int j = 0;
                while(j < len){
                    dp += s[i + j];
                    j++;
                }
                int num = stoi(dp);
                if(num >= low && num <= high)
                    ans.push_back(num);
            }
        }
        for(auto x:ans) cout<<x<<" ";
        return ans;
    }
};
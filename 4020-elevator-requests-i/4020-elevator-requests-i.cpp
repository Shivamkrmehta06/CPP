class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        vector<int> ans;
        ans.push_back(requests[0]);
        for(int i=1;i<requests.size();i++){
            if(requests[i]>requests[i-1]){
                int xi = requests[i]-requests[i-1];
                ans.push_back(xi);
            }
            if(requests[i]<requests[i-1]){
                int xi = requests[i-1]-requests[i];
                ans.push_back(xi);
            }
            if(requests[i]==requests[i-1]) continue;
        }
        int sum = 0;
        for(auto x:ans) sum+=x;
        return sum;
    }
};
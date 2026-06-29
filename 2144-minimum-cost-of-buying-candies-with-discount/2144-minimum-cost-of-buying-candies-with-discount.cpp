class Solution {
public:
    int minimumCost(vector<int>& cost) {
        // sort(cost.begin(),cost.end(),[](auto a,auto b){
        //     return b<a;
        // });
        sort(cost.begin(),cost.end(),greater<>());
        //for(auto x:cost) cout<<x<<" ";
        int sum = 0;
        for(int i=0;i<cost.size();i++){
            if(i%3==2) continue;
            else sum += cost[i];
        }
        cout<<sum<<endl;
        return sum;
    }
};
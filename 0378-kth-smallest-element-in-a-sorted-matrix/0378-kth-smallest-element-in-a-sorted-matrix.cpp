class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> arr;
        for(auto x:matrix){
            for(auto y:x) arr.push_back(y);
        }
        priority_queue<int> pq;
        for(int i = 0;i<k;i++){
            pq.push(arr[i]);
        }

        for(int i = k;i<arr.size();i++){
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};
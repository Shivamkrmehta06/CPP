class Solution {
private:
    int totalDays(vector<int> &weights,int minWeight){
        int d=1;
        int total=0;
        for(int i=0;i<weights.size();i++){
            if(total+weights[i]<=minWeight){
                total+=weights[i];
            }else{
                d++;
                total=weights[i];
            }
        }
        return d;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0,end=0;
        for(int i=0;i<weights.size();i++){
            start=max(weights[i],start);
            end+=weights[i];
        }
        int ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            int d=totalDays(weights,mid);
            if(d<=days){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return start;
    }
};
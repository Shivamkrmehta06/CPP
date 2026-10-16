class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int> ans(m+n);
        int mai=0;
        while(i<m&&j<n){
            if(nums1[i]>nums2[j]){
                ans[mai++]=nums2[j++];
            }else{
                ans[mai++]=nums1[i++];
            }
        }while(i<m){
            ans[mai++]=nums1[i++];
        }while(j<n){
            ans[mai++]=nums2[j++];
        }
        nums1=ans;
    }
};
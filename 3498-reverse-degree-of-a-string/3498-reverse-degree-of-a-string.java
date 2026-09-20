class Solution {
    public int binarySearch(char[] arr,char target){
        int start=0,end=arr.length-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==target){
                return mid;
            }else if(arr[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;                
            }
        }
        return -1; 
    }
    public int reverseDegree(String s) {
        char[] arr=new char[27];
        char c = 'a';
        for(int i=1;i<=26;i++){
            arr[i] = c;
            c++;
        }
        int sum=0;
        for(int i=0;i<s.length();i++){
            int ans=binarySearch(arr,s.charAt(i));
            System.out.println(ans);
            int revPos=27-ans;
            sum+=revPos*(i+1);
        }
        System.out.println(sum);
        return sum;
    }
}
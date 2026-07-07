class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int> x;
        while(n!=0){
            long long digit = n%10;
            if(digit!=0){
                x.push_back(digit);
            }
            n = n/10;
        }
        long long sum = 0;
        string b="";
        for(auto y:x) {
            sum+=y;
            char ch = y+'0';
            b.push_back(ch);
        }
        reverse(b.begin(),b.end());
        cout<<b<<endl;
        cout<<sum<<endl;
        long long z = atoi(b.c_str());
        cout<<z<<endl;
        return z*sum;
    }
};
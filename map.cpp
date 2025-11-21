#include <iostream>
#include<map>
using namespace std;

int main() {
    map<int,string> m1;
    m1[1] = "Shivam";
    m1[2] = "Babbar";
    m1[3] = "Kunal";
    m1[10] = "Nihal";
    for(auto x:m1) cout<<x.first<<" : "<<x.second<<endl;
    cout<<"Find at 3: "<<m1.count(1)<<endl;
    m1.erase(10);

    for(int i = 0;i<m1.size();i++){
        cout<<i<<" : "<<m1[i]<<endl;
    }
    auto it = m1.find(2);
    for(auto i = it;i!=m1.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}

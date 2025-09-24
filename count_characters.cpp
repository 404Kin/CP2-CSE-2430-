//I had been looking for map problems to practice for a long time, thank you mam for giving map problems.

#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    map<char,int>frq;
    for(char c:s){
        frq[c]++;
    }

    for( auto &c:frq){
        cout<<c.first<<" "<<c.second<<endl;
    }

    return 0;
}








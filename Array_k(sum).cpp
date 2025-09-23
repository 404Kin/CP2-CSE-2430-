
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin>>n;
    string s;
    cin>>s;

    int sum=0;

    for( char c:s){
        sum+=c-'0';
    }

    cout<<sum<<endl;

    return 0;
}





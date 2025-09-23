
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    if(n==2){
        cout<<1<<endl;
        return 0;
    }
    long long a=0,b=1,c;
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<b<<endl;
    return 0;
}








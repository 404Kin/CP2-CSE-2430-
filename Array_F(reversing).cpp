
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    ll razty[n];

    for(int i=0;i<n;i++){
        cin>>razty[i];
    }

    for(int i=n-1;i>=0;i--){
        cout<<razty[i]<<" ";
    }
    cout<<endl;
    return 0;
}




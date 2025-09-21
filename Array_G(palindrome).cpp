
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

    bool palindrome=true;

    for(int i=0;i<n/2;i++){
        if(razty[i]!=razty[n-i-1]){
            palindrome=false;
            break;
        }
    }

    if(palindrome)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}





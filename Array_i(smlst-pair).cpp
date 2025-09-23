//complexity O(n)


#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){

    int n;
    cin>>n;
    int razty[n];

    for(int i=0;i<n;i++){
        cin>>razty[i];
    }
    int mini=razty[0]-0;
    ll result=LLONG_MAX;
    for(int j=1;j<n;j++){
        result=min(result,1LL*mini+razty[j]+j);
        mini=min(mini,razty[j]-j);

    }

    cout<<result<<endl;
    }
    return 0;
}


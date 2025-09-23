//complexity O(n^2)
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
    ll result=INT_MAX;
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        result=min(result,ll(razty[i]+razty[j]+j-i));
      }
    }

    cout<<result<<endl;
    }
    return 0;
}




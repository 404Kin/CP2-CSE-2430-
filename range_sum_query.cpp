
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin>>n>>q;
    vector<int>R(n);

    for(int i=0;i<n;i++){
        cin>>R[i];
    }
     vector<int>presum(n);

     presum[0]=R[0];

    for(int i=1;i<n;i++){
        presum[i]=presum[i-1]+R[i];

    }
    while(q--){
        int l,r;
        cin>>l>>r;

        l--;
        r--;

        int ans=presum[r]-(l>0 ? presum[l-1] : 0);

        cout<<ans<<endl;

    }

    return 0;
}

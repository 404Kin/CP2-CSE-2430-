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
    for(int i=0;i<n;i++){
        int m=razty[i];
        for(int j=i;j<n;j++){
            m=max(m,razty[j]);
            cout<<m<<" ";
        }
     }
     cout<<endl;
    }
    return 0;
}





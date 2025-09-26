//longest consecutive subsequence

#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int>razty(n);

    for(int i=0;i<n;i++)cin>>razty[i];

    sort(razty.begin(),razty.end());

    int longest=1,restart=1;

    for(int i=1;i<n;i++){
        if(razty[i]==razty[i-1]+1){
            restart++;
        }
        else{
            restart=1;
        }
        longest=max(longest,restart);
    }

    cout<<longest<<endl;
    return 0;
}








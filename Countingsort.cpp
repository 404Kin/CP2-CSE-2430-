
#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    vector<int>razty(n);
    for(int i=0;i<n;i++){
        cin>>razty[i];
    }
    int maxv=*max_element(razty.begin(),razty.end());

    vector<int>Count(maxv+1,0);

    for(int i=0;i<n;i++){
        Count[razty[i]]++;
    }

    for(int i=1;i<=maxv;i++){
        Count[i]+=Count[i-1];
    }

    vector<int>output(n);
    for(int i=n-1;i>=0;i--){
        output[Count[razty[i]]-1]=razty[i];
        Count[razty[i]]--;
    }

    razty=output;

    for(int i=0;i<n;i++){
        cout<<razty[i]<<" ";
    }

    cout<<endl;

    return 0;
}


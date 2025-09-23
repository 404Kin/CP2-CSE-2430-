
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int razty[n];

    for(int i=0;i<n;i++){
        cin>>razty[i];
    }
    int mini=0;
    int maxi=0;
    for(int i=1;i<n;i++){
        if(razty[i]<razty[mini]) mini=i;
        if(razty[i]>razty[maxi]) maxi=i;
    }
    swap(razty[mini],razty[maxi]);
    for(int i=0;i<n;i++){
        cout<<razty[i]<<" ";
    }
    cout<<endl;
    return 0;
}






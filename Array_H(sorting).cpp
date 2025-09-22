
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int razty[n];

    for(int i=0;i<n;i++){
        cin>>razty[i];
    }
    for(int i=0;i<n-1;i++){
       for(int j=0;j<n-1-i;j++){
        if(razty[j]>razty[j+1])
          swap(razty[j],razty[j+1]);
      }
    }

    for(int i=0;i<n;i++){
        cout<<razty[i]<<" ";

    }
    cout<<endl;
    return 0;
}



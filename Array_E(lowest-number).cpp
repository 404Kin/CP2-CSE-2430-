
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

    int lowest=razty[0];
    int index=0;

    for(int i=1;i<n;i++){
        if(lowest>razty[i]){
            lowest=razty[i];
            index=i;
        }
    }

    cout<<lowest<<" "<<index<<endl;

    return 0;
}



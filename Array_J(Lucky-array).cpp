
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
    int lowest=razty[0];
    int f=1;
    for(int i=1;i<n;i++){
        if(razty[i]<lowest){
            lowest=razty[i];
            f=1;
        }
        else if(razty[i]==lowest) f++;
    }

    if(f%2!=0)cout<<"Lucky"<<endl;
    else cout<<"Unlucky"<<endl;
    return 0;
}




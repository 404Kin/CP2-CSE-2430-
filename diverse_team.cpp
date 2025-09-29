
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;

    vector<int>razty(n);
    unordered_map<int,int>index;

    for(int i=0;i<n;i++){
        cin>>razty[i];
        if(index[razty[i]]==0){
            index[razty[i]]=i+1;
        }
    }
    if(index.size()<k)cout<<"NO"<<endl;

    else{
        int countt=0;
        cout<<"YES"<<endl;
        for(auto &p:index){
            cout<<p.second<<" ";
            countt++;
            if(countt==k)break;
        }
        cout<<endl;

    }

    return 0;
}


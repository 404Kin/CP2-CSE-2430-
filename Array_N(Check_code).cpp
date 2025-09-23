
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;

    if(s.size()==a+b+1 && s[a]=='-'){
        for(int i=0;i<s.size();i++){
            if(i!=a && (s[i]<'0' || s[i]>'9')){
                cout<<"No"<<endl;
                return 0;
            }
        }
        cout<<"Yes"<<endl;

    }
    else cout<<"No"<<endl;
    return 0;
}







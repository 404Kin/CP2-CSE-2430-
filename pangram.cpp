
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    string s;
    cin>>s;

    set<char>letters;
    for(char c:s){
        if(c>='A' && c<='Z'){
            c=c+32;
        }
        letters.insert(c);
    }

    if(letters.size()==26)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}








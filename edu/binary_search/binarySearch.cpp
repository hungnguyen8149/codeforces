#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void checkIfExisted(int& x, vector<int>& a);

int32_t main() {
    fastio;

    int n; cin>>n;
    int t ; cin >> t;
    
    vector<int> a(n);
    for(int i=0;i<n;++i) {
        cin>>a[i];
    }
    
    while (t--) {
        int x; cin>>x;
        checkIfExisted(x, a);
    }
    return 0;
}

// a = {1,2,3,4,6}
// x = 5
void checkIfExisted(int& x, vector<int>& a){
    int l=0, r=a.size() - 1;

    while(l<=r) {
        int m = l + (r - l)/2;
        if(a[m] == x) {
            cout<<"YES"<<endl; return;
        }
        else if(a[m] < x) {
            l=m + 1;
        }
        else r=m-1;
    }
    cout<<"NO"<<endl;
}
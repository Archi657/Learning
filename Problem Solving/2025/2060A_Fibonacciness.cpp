#include <bits/stdc++.h>
#define ll long long int
//#define for(n) for(int i=0;i<n;i++)
#define tc int t;cin>>t;while(t--) solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
}

void solve() {
   int a,b,d,e;
   cin >> a >> b >> d >> e ;
   set<int> nums;
   nums.insert(a+b);
   nums.insert(d-b);
   nums.insert(e-d);
   if (nums.size()==1){
      cout << '3' << '\n';
   }else if (nums.size()==2){
      cout << '2' << '\n';
   }else {
      cout << '1' << '\n';
   }
}

int main() {
   init_code();
   fast
   tc 
}
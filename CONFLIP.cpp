#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while(T--){
	     int G;
	     cin >> G;
	     int ans;
	     while(G--){
	          int I,N,Q;
	          cin >> I >> N >> Q;
	          if(N%2==0){
	              ans = N/2;
	          }
	          else{
	               if(I==Q){
	                    ans=(N-1)/2;
	               }
	               else{
	                    ans=(N+1)/2;
	               }
	          }
	          cout << ans << endl;
	     }
	}
	return 0;
}

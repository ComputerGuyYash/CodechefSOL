#include <bits/stdc++.h>
using namespace std;
std::vector<int> v;
int main() {
	int T;
	cin >> T;
	while(T--){
	     int N,K;
	     cin >> N >> K;
	     for(int i=0;i<N;i++){
	          int x;
	          cin >> x;
	          v.push_back(x);
	     }
	     int left=0;
	     for(int i=0;i<N;i++){
	          if((v[i]+left)>K){
	               left=(v[i]+left)-K;
	          }
	          else if((v[i]+left)<K){
	               cout << "NO "<<i+1;
	               goto a;
	          }
	     }
	     cout << "YES";
	     a:
	     cout << endl;
	     v.clear();
	}
	return 0;
}

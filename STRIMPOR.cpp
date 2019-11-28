#include <bits/stdc++.h>
using namespace std;
std::vector<int> X;
std::vector<int> Y;
std::vector<int> Z;
int main() {
	int T;
	cin >> T;
	while(T--){
	     int N,K;
	     cin >> N >> K;
	     for(int i=0;i<N;i++){
	          cin >> ws;
	          char c;
	          cin >> c;
	          if(c=='X'){
	               X.push_back(i);
	          }
	          else if(c=='Y'){
	               Y.push_back(i);
	          }
	          else{
	               Z.push_back(i);
	          }
	     }
	     for(int i=0,y=0;i<X.size()&&y<Z.size();i++){
	          if(X[i]<Y[i]){
	               if()
	          }
	     }
	}
	return 0;
}

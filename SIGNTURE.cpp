#include <bits/stdc++.h>
using namespace std;
std::vector<int> v;
std::vector<bitset<5>> A;
std::deque<bitset<5>> B;
int main() {
	int T;
	cin >> T;
	while(T--){
	     int N,M;
	     cin >> N >> M;
	     for(int i=0;i<N;i++){
	          string s;
	          cin >> ws;
	          cin >> s;
	          bitset<5> p(s);
	          A.push_back(p);
	          cout << p<<endl;
	     }
	     cout << endl;
	     for(int i=0;i<N;i++){
	          string s;
	          cin >> ws;
	          cin >> s;
	          reverse(s.begin(),s.end());
	          bitset<5> p(s);
	          B.push_front(p);
	          
	     }
	     for(auto x:B){
	          cout << x << endl;
	     }
	     cout << endl;
	     v.clear();
	     B.clear();
	}
	return 0;
}

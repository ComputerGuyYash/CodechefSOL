#include <bits/stdc++.h>
using namespace std;
std::vector<pair<int,int>> v;
int main() {
	int N,K;
	cin >> N >> K;
	for(int i=0;i<N;i++){
	     int x;
	     cin >> x;
	     v.push_back(make_pair(x,1));
	}
	for(int i=0;i<N;i++){
	     int x;
	     cin >> x;
	     v.push_back(make_pair(x,2));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
	     cout << v[i].first << " " << v[i].second << endl;
	}
	return 0;
}

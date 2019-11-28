#include <bits/stdc++.h>
using namespace std;
std::vector<int> v;
#define max3(a,b,c) max(a,max(b,c))
int main() {
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
	     int x;
	     cin >> x;
	     v.push_back(x);
	}
	int b[N+1]={0};
	b[0]=v[0];
	b[1]=b[0]+v[1];
	b[2]=max(b[1],b[0])+v[2];
	for(int i=3;i<N;i++){
	     b[i]=max3(b[i-3]+v[i-1]+v[i],b[i-2]+v[i],b[i-1]);
	}
	cout << b[N-1]<<endl;
	return 0;
}

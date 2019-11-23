#include <bits/stdc++.h>
using namespace std;
std::vector<long long int> v;
std::vector<long long int> a;
int main() {
     long long int N,K;
	cin >> N >> K;
	long long int arr[N+1]={0},p=0;
	std::vector<long long int> l(800001,0);
	
	for(long long int i=0;i<N;i++){
	     long long int x;
	     cin >> x;
	     l[x]++;
	     if(l[x]==1){
	          a.push_back(x);
	          p++;
	     }
	     v.push_back(x);
	}
	sort(l.begin(),l.end(),greater <>());
	long long int ans = 0;
	for(long long int b = 0;b<(1<<p);b++){
	     bitset<10000000> k(b);
	     //cout << k << endl;
	     long long int o =1;
	     for(long long int i =0;i<p;i++){
	          //cout << k[i]<<endl;
	          if(k[i]){
	              o*=l[i];
	              //cout << l[i] << endl;
	          }
	          o%=1e9 + 7;
	     }
	     //cout << o<<endl<<endl;
	    
	     ans+=o;
	}
	cout << ans%1e9+7;
	return 0;
}

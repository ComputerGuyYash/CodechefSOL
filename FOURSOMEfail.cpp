#include <bits/stdc++.h>
using namespace std;
// 6 20 3 1 1 2 5 10
std::vector<int> v;
int main() {
	int N;
	cin >> N;
	int sum;
	cin >> sum;
	for(int i=0;i<N;i++){
	     int x;
	     cin >> x;
	     v.push_back(x);
	}
	int arr[10000]={0};
	sort(v.begin(),v.end());
	vector<pair<int,int>> ign(sum*10,pair<int,int> (N,0));
	for(int i=0;i<N;i++){
	     for(int j=i+1;j<N;j++){
	          if((v[i]+v[j])<sum){
	               ign[v[i]+v[j]].first=i;
	               ign[v[i]+v[j]].second=j;
	               
	               arr[sum-(v[i]+v[j])]++;
	               cout << sum-(v[i]+v[j]) << endl;
	          }
	     }
	}
	int ans=0;
	cout << endl;
	for(int i=0;i<N;i++){
	     for(int j=i+1;j<N;j++){
	          cout << v[i]+v[j] <<"\t"<<arr[v[i]+v[j]]<<endl;
	          if(arr[(v[i]+v[j])]!=0&&ign[v[i]+v[j]]!=make_pair()){
	               ans++;
	          }
	     }
	}
	cout << ans << endl;
	return 0;
}
/*
18
17
16
14
9
17
16
14
9
15
13
8
12
7
5

2
3
4
6
11
3
4
6
11
5
7
12
8
13
15
6
*/

#include <bits/stdc++.h>
using namespace std;
struct var{
     int x,y,z;
};
std::vector<var> v;
bool comparer(var a,var b){
     return a.x < b.x;
}
bool comparer2(var a,var b){
     return a.y < b.y;
}
int main() {
     int T;
     cin >> T;
     while(T--){
     	int N;
     	cin >> N;
     	for(int i=0;i<N;i++){
     	     int x;
     	     cin >> x;
     	     v.push_back({x,i,0});
     	}
     	sort(v.begin(),v.end(),comparer);
     	
     	for(int i=0;i<v.size();i++){
     	     v[i].z=i;
     	}
     	sort(v.begin(),v.end(),comparer2);
     	for(auto x:v){
     	     cout << x.x << "\t" << x.y << "\t"<<x.z<< endl;
     	}
     }
	return 0;
}

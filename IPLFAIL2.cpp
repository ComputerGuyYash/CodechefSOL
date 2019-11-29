#include <bits/stdc++.h>
using namespace std;
std::vector<int> v;
int last;
int N;
std::vector<int> ans;
void search(int inda,int ind,int sum){
     
     if(inda>2){
          return;
     }
     if(ind>=N){
          cout << inda <<" "<<ind <<" "<<sum << endl;
          ans.push_back(sum);
          return;
     }
     
          
          search(inda+1,ind+1,sum+v[ind+1]);
          search(0,ind+2,sum+v[ind+2]);
          search(0,ind+3,sum+v[ind+3]);
     
}
int main() {
	
	cin >> N;
	v.push_back(0);
	for(int i=0;i<N;i++){
	     int x;
	     cin >> x;
	     v.push_back(x);
	}
	search(0,0,0);
	sort(ans.begin(),ans.end(),greater<>());
	cout << ans[0] << endl;
	return 0;
}

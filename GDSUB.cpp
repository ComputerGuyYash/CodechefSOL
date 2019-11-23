#include <bits/stdc++.h>
using namespace std;
std::vector<int> v;
std::vector<int> b;
std::vector<int> a;
int N,K;
int ans = 0;
int arr[80001]={0};
int p[8001]={0};
int num = 0;
int save[999999]={0};
int digit(int numa){
     int ret=numa;
     int y = 0;
     while(ret!=0){
          y++;
          ret/=10;
     }
     return y;
}

void search(int last){
     //for(auto x:b){
         // cout << x << " ";
     //}
     //cout << endl;
     if(digit(num)<=K){
         // cout << num << endl;
          ans++;
     }
     if(digit(num)>K){
          return;
     }
     /*if(last==0){
          for(auto x : a){
               int d = ans;
               b.push_back(x);
               search(x);
               b.pop_back();
               arr[x]=ans-d-1;
               //cout << arr[x] << " "<<x<< endl;
               ans+=arr[x]*p[x];
          }
          return;
     }*/
     for(auto x : v){
          if(x>last){
          
          if(save[num*10+x]!=0){
               //cout << num*10+x << endl;
               ans+=save[num*10+x];
          }
          else{
               
                    int d = ans;
                    //b.push_back(x);
                    num=num*10+x;
                    search(x);
                    save[num]=ans-d;
                    num = num/10;
                    //b.pop_back();
               
          }
          }
     }
}
int main() {
	
	cin >> N >> K;
	
	for(int i=0;i<N;i++){
	     int x;
	     cin >> x;
	     p[x]++;
	     if(p[x]==1){
	          a.push_back(x);
	     }
	     v.push_back(x);
	     
	}
	//sort(v.begin(),v.end());
	search(0);
	cout << ans << endl;
	for(int i = 0;i<a.size();i++){
	     cout << save[a[i]]<<" "<<a[i] << endl;
	}
	return 0;
}

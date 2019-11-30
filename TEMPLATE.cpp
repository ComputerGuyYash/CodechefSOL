#include <bits/stdc++.h>
using namespace std;
#define rest i=0; j++;
#define endl '\n'
#define nl cout << endl;
#define INF std::numeric_limits<int>::max()
#define max3(a,b,c) max(a,(max(b,c)))
#define min3(a,b,c) min(a,(min(b,c)))
std::vector<int> v;
struct tri{
     int x,y,z;
};
void printf(vector<int> const &a){
     for(auto x:a){
          cout << x << " ";
     }
     nl;
}
int maxV(vector<int> const &a){
     int maxnum=0;
     for(auto x:v){
          maxnum = max(maxnum,x);
     }
     return maxnum;
}
int minV(vector<int> const &a){
     int minnum=INF;
     for(auto x:v){
          minnum = min(minnum,x);
     }
     return minnum;
}
int digits(int num){
     int ret=0;
     while(num!=0){
          num/=10;
          ret++;
     }
     return ret;
}
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	int T;
	cin >> T;
	while(T--){
	     int N;
	     cin >> N;
	     for(int i=0;i<N;i++){
	          int x;
	          cin >> x;
	          v.push_back(x);
	     }
	     
	     v.clear();
	}
	return 0;
}

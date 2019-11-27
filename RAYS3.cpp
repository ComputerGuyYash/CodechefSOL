#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,M,w,s;
	cin >> N >> M >> w >> s;
     std::vector<pair<int,int>> obj(N,(M,make_pair(10,10)));
     for(int i=0;i<w;i++){
          int x,y;
          cin >> x >> y;
          obj[x-1][y-1].first=y;
          obj[x-1][y-1].second=2;
     }
     for(int i=0;i<s;i++){
          int x,y;
          cin >> x >> y;
          obj[x-1][y-1].first=y;
          obj[x-1][y-1].second=1;
     }
     for(int i=0;i<N;i++){
          sort(obj[i].begin(),obj[i].end());
     }
     int score[N][X]={0};
     for(int x=0;x<N;x++){
          int st=2;
          int iw = 0;
          int ib = 0;
          int l = 0;
          for(int y=0;y<M;y++){
               if(y==obj[x][iw].first&&obj[x]){
                    
               }
               
          }
     }
	return 0;
}

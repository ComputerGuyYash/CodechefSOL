#include <bits/stdc++.h>
using namespace std;
int suma(int a,int b){
     int ret=0;
     for(int i=a;i<=b;i++){
          ret+=i;
     }
     return ret;
}
int main() {
	int N,M,w,b;
	cin >> N >> M >> w >> b;
	std::vector<vector<int>> W(N+1);
	std::vector<vector<int>> B(N+1);
	int q[N+1][M+1]={0};
	int e[N+1][M+1]={0};
	for(int i=0;i<w;i++){
	     int x,y;
	     cin >> x >> y;
	     q[x][y]==1;
	     W[x-1].push_back(y-1);
	     
	}
	
	for(int i=0;i<b;i++){
	     int x,y;
	     cin >> x >> y;
	     e[x][y]==1;
	     B[x-1].push_back(y-1);
	}
	int score = 0;
	for(int i=0;i<N;i++){
	     W[i].push_back(N-1);
	     B[i].push_back(N-1);
	     sort(W[i].begin(),W[i].end());
	     sort(B[i].begin(),B[i].end());
	}
	for(auto o:W){
	    for(auto i:o){
	         cout << i <<" ";
	    }
	    cout << endl;
     }
	//for(int x=0;x<N;x++){
	int x=0;
	     int sp=0;
	     int se=0;
	     for(int y=0;y<M;y++){
	          
	          if(q[x][y]==0&&e[x][y]==0){
	               
                    score+=suma((W[x][sp]-y)+1,W[x][sp]-min(B[x][se],W[x][sp]));
                    cout << score <<" "<<W[x][sp]<<" "<<y<<" "<<sp<<" "<<min(B[x][se],W[x][sp])<<endl;
	          }
	          sp++;
	          if(sp<=(W[x].size()-1)){
	               y=W[x][sp];
	          }
	          else{
	               break;
	          }
	     }
//	}
	cout << score;
	return 0;
}

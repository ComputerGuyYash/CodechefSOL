#include <bits/stdc++.h>
using namespace std;

int main() {
     long long int N,M,w,b;
     cin >> N >> M >> w >> b;
     std::vector<vector<long long int>> arr( N , vector<long long int> (M, 0));
     //arr[0][1]=0;
     for(long long int i=0;i<w;i++){
          long long int x,y;
          cin >> ws;
          cin >> x >> y;
          arr[x-1][y-1]=1;
     }
     for(long long int i=0;i<b;i++){
          long long int x,y;
          cin >> ws;
          cin >> x >> y;
          arr[x-1][y-1]=2;
     }
     std::vector<vector<long long int>> score( N , vector<long long int> (M, 0));
     long long int ans = 0;
     for(long long int x=0;x<N;x++){
          
          if(x>=1){
          if(arr[x-1]==arr[x]){
               score[x]=score[x-1];
               continue;
          }
          }
          long long int st = 2;
          for(long long int i=0,j=i+1;i<M;){
               if(arr[x][i]!=0){
                    i++;
                    j=i+1;
                    continue;
               }
               if(i==j&&j==(M-1)){
                    score[x][i]=1;
                    i++;
                    continue;
               }
               if(j>=N){
                    long long int l=j-i;
                    for(long long int p=i;p<j;p++){
                         
                         if(arr[x][p]==0){
                              score[x][p]=l;
                              //if(p<N){
                              //ans+=l;
                              //}
                         }
                         l--;
                    } 
                    i++;
                    j=i+1;
                    st=2;
                    continue;
               }
               if(arr[x][j]==2){
                    st-=2;
               }
               else if(arr[x][j]==1){
                    st--;
               }
               if(st<=0){
                    long long int l=j-i+1;
                    for(long long int p=i;p<=j;p++){
                         if(arr[x][p]==0){
                              score[x][p]=l;
                              //if(p<N){
                              //ans+=l;
                              //}
                         }
                         l--;
                    }
                    i++;
                    j=i+1;
                    st=2;
                    continue;
               }
               j++;
          }
     }
     /*for(long long int i=0;i<N;i++){
          for(long long int j=0;j<M;j++){
               cout << arr[i][j] << " ";
          }     
          cout <<endl;
     }*/
     ans=0;
     for(long long int i=0;i<N;i++){
          for(long long int j=0;j<M;j++){
               ans+=score[i][j];
               //cout << score[i][j]<<" ";
          }     
          //cout << endl;
     }
     cout << ans << endl;
	return 0;
}

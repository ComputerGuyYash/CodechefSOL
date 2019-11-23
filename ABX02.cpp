#include <bits/stdc++.h>
using namespace std;
int arr[1000000000000]={0};
int ans = 0;
int p,q,N;
int B1,B2;
int S1,S2;
int digit(int num){
     int R=num;
     int ret = 0;
     while(R!=0){
          R/=10;
          ret++;
     }
     return ret;
}
void search(int num,int last,int eat,int a,int b){
     //cout << num << " "<< last<<" "<<eat << " "<<a << " "<<b << endl;
     if(last==0){
          search(1,1,1,a-1,b);
          search(2,1,2,a,b-1);
     }
     if(digit(num)==N){
          
          if(arr[num]==0){
               ans++;
          }
          cout << num << endl;
          arr[num]++;
          return;
     }
     for(int i = 1;i<S2;i++){
          if(eat == 1){
               search(num*10+2,1,2,a,b-i);
          }
     }
     if(eat == 2){
          search(num*10+1,1,1,a-1,b);
     }
     /*for(int i = 1;i<=S1;i++){
               if(last<=B1&&eat==1&&a>0){
                    
                    if((a-i)>=0){
                         search(num*10+i,last+1,1,a-i,b);
                    }
                    
               }
               if(last<=B2&&eat==2&&b>0){
                    
                    if((b-i)>=0){
                         search(num*10+i,last+1,2,a,b-i);
                    }
                    
               }
               if(eat==1&&b>0){
                    
                    if((b-i)>=0){
                         search(num*10+i,1,2,a,b-i);
                    }
                    
               }
               if(eat==2&&a>0){
                    
                    if((a-i)>=0){
                         search(num*10+i,1,2,a-i,b);
                    }
                    
               }
          }*/
     
}
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     int T;
     cin >> T;
     while(T--){
          ans = 0;
          cin >> p >> q >> N;
          
          cin >> B1 >> B2;
          
          cin >> S1 >> S2;
          search(0,0,1,p,q);
          cout  << ans;
     }
     return 0;
}

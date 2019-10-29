#include <iostream>
using namespace std;

int main() {
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	long long int T;
	cin >> T;
	while(T--){
	     long long int N;
	     cin >> N;
	     long long int arr[N+1]={0};
	     long long int narr[N+1]={0};
	     for(long long int i = 0;i<N;i++){
	          cin >> arr[i];
	          narr[i]=arr[i];
	          if(i!=0){
	               if(arr[i]>narr[i-1]){
	                    narr[i]=narr[i-1];
	               }
	          }
	     }
	     long long int count = 0;
	     for(long long int i=0;i<N;i++){
	          if(arr[i]==narr[i]){
	               count+=1;
	          }
	     }
	     cout << count << endl;
	}
	return 0;
}

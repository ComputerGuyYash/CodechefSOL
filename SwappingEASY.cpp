#include <iostream>
using namespace std;
int apr(int *arr,int N){
     for(int i=0;i<N;i++){
	    
	    cout << arr[i] << " ";
     }
     
}
int* swap(int *arr,int swapPos){
     int itemp = arr[swapPos];
     arr[swapPos]=arr[swapPos+1];
     arr[swapPos+1]=itemp;
     return arr;
}
int main() {
     int T=0;
	cin >> T;
	while(T--){
	     int N;
	     cin >> N;
	     int arr[N+1];
	     for(int i=0;i<N;i++){
	          cin >> arr[i];
	          //cout << arr[i]<<i<< endl;
	    }
	    apr(swap(arr,1),N);
	}
	return 0;
}

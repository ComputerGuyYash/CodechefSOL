#include <iostream>
using namespace std;
int combinationUtil(int arr[],int n, int r, int index, int data[], int i);
int p[101]={0};
int printCombination(int arr[],int n, int r){
     int data[r+1];
     combinationUtil(arr, n, r, 0, data, 0);
}
int len(int arr[]){
     return(sizeof(arr)/sizeof(arr[0]));
}
int combinationUtil(int arr[],int n, int r, int index, int data[], int i){
     if(index == r){
        int sum = 0;
        for(int j=0;j<r;j++){
          sum+=data[j];
          
        }
        //cout << "SUM " << sum << "\n";
        p[sum]+=1;
        return(0);
     }
    if(i >= n){ 
        return(0);
    }
    data[index] = arr[i];
    combinationUtil(arr, n, r, index + 1,data, i + 1);
    combinationUtil(arr, n, r, index,data, i + 1);
}
int main() {
     int T = 0;
	cin >> T;
	for(int i=0;i<T;i++){
	     int n,r;
	     cin >> n >> r;
	     int arr[n+1]={0};
	     for(int a=0;a<n;a++){
	          cin >> arr[a];
	     }
	     printCombination(arr,n,r);
	     int ans = 0;
	     //cout << "len " <<len(p)<<"\n";
	     for(int a=0;a<101;a++){
	          //cout <<"P "<< p[a]<<"\n";
	          if(p[a]!=0){
	               
	               ans = p[a];
	               break;
	          }
	     }
	     cout << ans;
	}
	return 0;
}

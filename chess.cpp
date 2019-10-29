#include <iostream>
#include <string>

using namespace std;
class Player
{ 
    int R;
    int Min;
    int Max;
    int Time;
    int isRated;
    int Color;
}; 
int main() {
	int T;
	cin >> T;
	while(T--){
	     int N;
	     cin >> N;
	     int Ri, Mini, Maxi, Timei;
	     string isRatedi, Colori;
	     int isR, Col;
	     int arr[N+1]={0};
	     Player type[N+1];
	     for(int i = 0;i<N;i++){
	          cin >> Ri >> Mini >> Maxi >> Timei >> isRatedi >> Colori;
	          if(isRatedi=="rated"){
	               isR=0;
	          }
	          else{
	               isR=1;
	          }
	          if(Colori=="random"){
	               Col=0;
	          }
	          else if(Colori=="black"){
	               Col = 1;
	          }
	          else{
	               Col=2;
	          }
	          type[i] = new Player(Ri,Mini,Maxi,Timei,isR,Col);
	     }
	     cout << type[0] ->Color;
	}
	return 0;
}

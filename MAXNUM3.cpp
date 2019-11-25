#include <bits/stdc++.h>
using namespace std;
string a;
int main() {
	int T;
	cin >> T;
	while(T--){
	     int x;
	     cin >> x;
	     a = to_string(x);
	     if(x%2!=0){
	          if((x/10)%3!=0){
	               a=to_string(-1);    
	          }
	          else{
	          a.erase(a.end()-1);
	          }
	     }
	     else{
	          int rem = x%3;
	          //cout << rem << endl;
	          for(int i=0;i<a.length();i++){
	               //cout << (char)(rem+48) << endl;
	               if(a[i]==(char)(rem+48)){
	                    a.erase(a.begin()-i);
	                    break;
	               }
	          }
	     }
	     cout << a << endl;
	}
	return 0;
}

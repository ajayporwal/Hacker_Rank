/*https://www.hackerrank.com/ajayporwal
www.hackerrank.com/indian__*/

#include <bits/stdc++.h>
using namespace std;

long int fnlcm(long int x, int y){
  long int a = x;
  long int b = y;
  long int t,gcd; 
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
 
  gcd = a;
  return (x*y)/gcd;
}

int main() {
	
	long int t,n,count,c,a;
	int m,i,j;
	cin>>t;
	while(t--){
		count = 0;c=1;
		cin>>n>>m;
		for(i=0;i<m;i++){
			cin>>a;
			c = fnlcm(c,a);
		}
		
				
		cout<<n/c<<endl;		
	}
	return 0;

}

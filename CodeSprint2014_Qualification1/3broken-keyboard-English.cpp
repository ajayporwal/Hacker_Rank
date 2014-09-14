/*https://www.hackerrank.com/ajayporwal
www.hackerrank.com/indian__*/

#include <bits/stdc++.h>
using namespace std;


int main() {
	
	int t;
	long long int n,i,lar;
	cin>>t;
	while(t--){
		cin>>n;
		long long int* a = new long long int[n];
		long long int* b = new long long int[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		lar=abs(a[0]-b[0]);
		for(i=0;i<n;i++){
			a[i]=abs(a[i]-b[i]);
			if(a[i]>lar)
				lar=a[i];
		}
		
		cout<<(lar)<<endl;
	}
	return 0;
}

/*https://www.hackerrank.com/ajayporwal
www.hackerrank.com/indian__*/

#include <iostream>
using namespace std;

int main() {
	long int t;
	int n,sum,a,k,i;
	
	cin>>t;
	while(t--){
		sum=0;k=0;
		int arr[101]={0};
		cin>>n;
		for(i=1;i<=n;i++){
			cin>>a;
			sum=sum+a;
			arr[a]=arr[a]+1;
		}
		
		sum=sum/n;
//		for(i=1;i<=100;i++)
//			cout<<"hello "<<arr[i]<<endl;
			
		for(i=sum+1;i<=100;i++){
			k=k+arr[i];
		}
		cout<<k<<endl;
	}
	return 0;
}

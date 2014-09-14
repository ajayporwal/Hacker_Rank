/*https://www.hackerrank.com/ajayporwal
www.hackerrank.com/indian__*/

#include <stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;

int main() {
	int t;
	char w[110], z[110];
	cin>>t;
	while(t--)
	{
		cin>>w;
		strcpy(z,w);
		next_permutation(w,w+strlen(w));
		if(strcmp(w,z)<=0)
		printf("no answer\n");
		else
		cout<<w<<endl;
	}
	return 0;
}

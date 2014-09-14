/*https://www.hackerrank.com/ajayporwal
www.hackerrank.com/indian__*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i=0,m,count=0,ans=0;
    cin>>n;
    long long a[n];
    while(n--)
        {
        count=0;
        cin>>m;
        while(m!=0)
            {
            if(m%2==1)
                count++;
            m=m/2;
        }
        a[i]=count;//cout<<count<<"\n";
        i++;
        
       
    }
    for(int j=0;j<i;j++)
        {
        ans=ans^a[j];
    }
    //cout<<ans<<"\n";
    if(ans!=0)
        cout<<"Shaka :)\n";
    else
        cout<<"The other player :(\n";
        
    return 0;
}

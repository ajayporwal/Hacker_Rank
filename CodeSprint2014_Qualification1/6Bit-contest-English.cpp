/*https://www.hackerrank.com/ajayporwal
www.hackerrank.com/indian__*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	long  int t;
	cin>>t;
	while(t--){
	  int len1, len2, x,cnt=0;
    //if you want to take two names from the users then just define
    	string s1,s2,s="";
    //and remove the '//' from below lines.
   // 	getline(cin,s1);
    //	getline(cin,s2);
    cin>>s1>>s2;
	    len1= s1.length();
	    len2= s2.length();
	    for(int i=0;i<len1;i++)
	    {
    	    for(int j=0;j<i;j++)
    	    {
            	if(s1[i]==s1[j])
            	{
                	x=0;
            	   break;
        	    }
    		}
        	if(x==0)
        	{
            	x= 1;
            	continue;
        	}
        	for(int k=0;k<len2;k++)
        	{
            	if(s2[k]==s1[i])
            	{
            	 	//cout<<s1[i]<<endl;
            	 	cnt++;
                	break;
            	}
        	}
    	}
    	cout<<cnt<<endl;
	}
    return 0;
}

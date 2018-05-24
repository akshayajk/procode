#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str,str1;
    int cost=0,n,n1,i,j;
    cin>>str>>str1;
    n=str.length();
    n1=str1.length();
    if(n<=n1)
    {
    for(i=0,j=0;i<n,j<n1;i++,j++)
    {
       if(str[i]!=str1[j])
       {
           cost++;
       }
       else if(str[i]==str1[j])
       {
           continue;
       }
    }
    cout<<cost;
    }
    
	return 0;
}

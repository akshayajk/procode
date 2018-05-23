
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<n;i++)
    {
    for(int j=i+1;j<n;j++)    
    
    {
        for(int k=0;k<str[i].length();k++)
        {
        if(str[i][k]==str[j][k]){
            cout<<str[i][k];
        }else if(str[i][k]!=str[j][k]){
            break;
        }
        }
    }
    }
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    string s[n];
    for(i=0;i<n;i++)
    {
         cin>>s[i];
    }

    for(i=0;i<n;i++)
    {

        int len;
        len=s[i].length();
        if(len>10&&len>=1&&len<=100)
        {
            char c1,c2;
        c1=s[i][0];
        c2=s[i][len-1];
        cout<<c1<<len-2<<c2<<endl;
        }
        else
            cout<<s[i]<<endl;
    }

}

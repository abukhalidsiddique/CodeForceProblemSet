#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   while(n--)
   {int a,b,c,d,p;

       int arr[4][2];
       for(int i=0;i<4;i++)
       {
           cin>>arr[i][0]>>arr[i][1];
       }
           for(int i=0;i<4;i++)
       {
           for(int j=1;j<4;j++)
       {
           if(arr[i][0]==arr[j][0])
           {
               p=arr[i][1]-arr[j][1];
               //cout<<p<<" "<<endl;
               break;
           }
           else if(arr[i][1]==arr[j][1])
           {
               p=(arr[i][0]-arr[j][0]);
               break;
           }

       }
       }
       cout<<p*p<<endl;

   }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n,Petya,Vasya,Tonya;
    cin>>n;
    int i,countt=0;
    for(i=1;i<=n;i++)
    {
        cin>>Petya>>Vasya>>Tonya;

        if(Petya==0||Petya==1&&Vasya==0||Vasya==1&&Tonya==0||Tonya==1)
        {
            if(Petya==1&&Vasya==1||Petya==1&&Tonya==1||Vasya==1&&Tonya==1)
                countt++;
        }

    }
     cout<<countt<<endl;
}

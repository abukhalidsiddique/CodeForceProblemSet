#include<iostream>
using namespace std;
int main()
{
    int n,k,i,countt=0;
    cin>>n>>k;
    int score[n];
    for(i=0;i<n;i++)
    {
        cin>>score[i];
    }
    int kscore=score[k-1];
    for(i=0;i<n;i++)
    {
        if(score[i]>=kscore&&score[i]>0)
            countt++;
    }
    cout<<countt;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d,i,j,k;
    int count=0;
    int ar[n];
    cin>>n;
    cin>>d;
    for(i=0; i<n; i++){
        cin>>ar[i];
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if ((ar[j] - ar[i])==d)
            {
                for (k=j+1;k<n;k++)
                if ((ar[k]-ar[j]) ==d) count++;
            }
        }

   }
    cout<<count;        
}
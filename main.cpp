#include <iostream>

using namespace std;
int safe(int a[10][10],int x,int y,int n)
{int i,j,k;
    for(i=0;i<n;i++)
    {if(a[i][y])
    return 0;
    }
        for(j=0;j<n;j++)
            {if(a[x][j]==1)
                return 0;
            }
                for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            {if((x+y)==(i+j))
                if(a[i][j])
            return 0;
            }
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            {if((x-y)==(i-j))
                if(a[i][j])
            return 0;
            }

        return 1;


}
int queen(int a[10][10],int n)
{   int i,j,k;

    if(n==0)
        return 1;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
                {if(safe(a,i,j,n)==0)
                   continue;
                   a[i][j]=1;
                if(queen(a,n-1))
                    return 1;
                 a[i][j]=0;

                }

     return 0;
}
int main()
{
    int i,j,k,n,p;
    cin>>n;
    p=n;
    int a[10][10];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][j]=0;
    p=queen(a,n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {cout<<a[i][j]<<" ";
    if(j==(n-1))

        cout<<"\n";
    }
    return 0;
}

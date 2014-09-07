#include <stdio.h>
#include <cstring>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        int c=0;
        while(n>=3)
        {
            n=n-3;
            c++;
            n=n+1;
        }
        if(n==2)
        {
            c++;
            printf("%d\n",c);
        }
        else
            printf("%d\n",c);
    }

    return 0;
}

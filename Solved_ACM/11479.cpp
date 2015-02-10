#include <stdio.h>
#include <cstring>
#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long int n,a,b,c,i=1;
    scanf("%ld", &n);
    while(i<=n){
        scanf("%ld %ld %ld", &a,&b,&c);
        if(!((a+b)>c && (b+c)>a && (c+a)>b) || a<=0 || b<=0 || c<=0)
            printf("Case %ld: Invalid\n",i);
        else if(a==b && b==c)
            printf("Case %ld: Equilateral\n",i);
        else if(a==b || b==c || c==a)
            printf("Case %ld: Isosceles\n",i);
        else
            printf("Case %ld: Scalene\n",i);
        i++;
    }
    return 0;
}


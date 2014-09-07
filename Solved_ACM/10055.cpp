#include <stdio.h>
#include <cstring>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //int ans;
    long long int i,j;

    while(scanf("%lld",&i)!=EOF && scanf("%lld", &j)!=EOF)
    {
        if(i>j)
            printf("%lld\n",i-j);
        else
            printf("%lld\n",j-i);
    }

  return 0;
}

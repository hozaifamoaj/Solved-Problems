#include <stdio.h>
#include <cstring>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
     int i,j;

    while(scanf("%d",&i)!=EOF && scanf("%d", &j)!=EOF)
    {
        printf("%d\n",2*i*j);
    }

  return 0;
}

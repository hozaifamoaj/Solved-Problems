#include <stdio.h>
#include <cstring>
#include <iostream>
#include <cstring>
#include <stack>
#include <ctype.h>
#include <cmath>
#include <algorithm>
#include <vector>
const int SIZE = 11;

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int intArray[SIZE],l,n,i=1,j,mid;
    scanf("%d",&l);
    while(l--){
        scanf("%d",&n);
        for(j=0;j<n;j++)
            scanf("%d",&intArray[j]);
        sort(intArray, intArray + n);
        mid=(n)/2;
        printf("Case %d: %d\n",i,intArray[mid]);i++;
    }
    return 0;
}

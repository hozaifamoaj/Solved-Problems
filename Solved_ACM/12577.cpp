#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cstring>
#include <stack>
#include <ctype.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stdbool.h>
#include <bitset>
#include <vector>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i=1;
    char s[16];
    while(scanf("%s",&s)==1){
        if(!strcmp(s,"*")) break;
        else if(!strcmp(s,"Hajj"))  printf("Case %d: Hajj-e-Akbar\n",i);
        else if(!strcmp(s,"Umrah"))          printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
    }
    return 0;
}

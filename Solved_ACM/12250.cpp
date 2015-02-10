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
        if(!strcmp(s,"#")) break;
        else if(!strcmp(s,"HELLO"))  printf("Case %d: ENGLISH\n",i);
        else if(!strcmp(s,"HOLA"))          printf("Case %d: SPANISH\n",i);
        else if(!strcmp(s,"HALLO"))         printf("Case %d: GERMAN\n",i);
        else if(!strcmp(s,"BONJOUR"))       printf("Case %d: FRENCH\n",i);
        else if(!strcmp(s,"CIAO"))          printf("Case %d: ITALIAN\n",i);
        else if(!strcmp(s,"ZDRAVSTVUJTE"))  printf("Case %d: RUSSIAN\n",i);
        else printf("Case %d: UNKNOWN\n",i);
        i++;
    }
    return 0;
}

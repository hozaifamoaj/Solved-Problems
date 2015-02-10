#include <stdio.h>
#include <cstring>
#include <iostream>
#include <cstring>
#include <stack>
#include <ctype.h>
#define MAX 1000

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,m1=0,l;
    char str[MAX];
    int bit[27]={};
    scanf("%d\n", &i);
    while(i){
        m1=0;
        for(j=0;j<27;j++)bit[j]=0;
        gets(str);l=strlen(str);
        for(j=0;j<l;j++)
        {
            str[j]=tolower(str[j]);
            if(str[j]>=97&&str[j]<=122)
            {
                bit[toascii(str[j])-96]+=1;
            }
        };
        for(j=0;j<27;j++)
        {
            if(m1<bit[j])
                m1=bit[j];
        }
        for(j=0;j<27;j++)
            if(bit[j]==m1)
                printf("%c",j+96);
        printf("\n");
        i--;
    }
    return 0;
}


#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    char c[1000];
    int wn=0 , ck=1,i;

    while(gets(c))
    {
        wn=0;
        for(i=0; c[i]; i++)
        {
            if((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z'))
            {
                if(ck)
                    wn++;
                ck=0;
            }
            else
            {
                ck=1;
            }
        }
        printf("%d\n",wn);
    }
    return 0;
}

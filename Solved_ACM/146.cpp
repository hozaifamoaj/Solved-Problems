#include<stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
    char a[51];
    while(1){
        scanf("%s",a);
        if(a[0]=='#') break;
        int len;
        len = strlen(a);
        if(next_permutation(a,a+len))
                    printf("%s\n",a);
        else printf("No Successor\n");
    }
    return(0);
}

#include <stdio.h>

using namespace std;

int main()
{
    char c;
    int n=1;
    while(scanf("%c",&c)!=EOF)
    {
            if(c=='"')
            {
                if(n) printf("``");
                else printf("''");

                n=(!n);
            }
            else printf("%c",c);
    }
    return 0;
}

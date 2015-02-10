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
    int i=0,l;
    char ch;
    string s;
    while((cin>>s)!='\0'){
        ch=getchar();
        l=s.size();
        for(i=l-1;i>=0;i--)
            printf("%c",s[i]);
        putchar(ch);
    }
    return 0;
}


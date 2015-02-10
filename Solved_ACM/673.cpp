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

using namespace std;

bool valid(string &s)
{
    stack<char> stk;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='('||s[i]==')'||s[i]=='['||s[i]==']')
        if(s[i]=='('||s[i]=='[')
            stk.push(s[i]);
        else{
            if(stk.empty()) return false;
            if((s[i]==')'&&stk.top()=='(')||(s[i]==']'&&stk.top()=='['))
                stk.pop();
            else return false;
        }
    }
    return stk.empty();
}

int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string s;
    int n;
    scanf("%d\n",&n);
    while(n--){
        getline(cin,s);
        printf("%s\n",valid(s)?"Yes":"No");
    }
    return 0;
}

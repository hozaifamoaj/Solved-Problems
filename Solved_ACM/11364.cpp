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
    int i,j,x,n,mx,mn;
    vector<int>v_int;

    if(scanf("%d",&i)==1)
        while(i--){
            if(scanf("%d",&j)==1)
                for(x=0;x<j;x++){
                    scanf("%d",&n);
                    v_int.push_back(n);
                }
            mx=0,mn=99;
            for(x=0;x<j;x++){
                if(mx<v_int[x]) mx=v_int[x];
                if(mn>v_int[x]) mn=v_int[x];
            }
            printf("%d\n",(mx-mn)*2);
            v_int.clear();
        }
    return 0;
}

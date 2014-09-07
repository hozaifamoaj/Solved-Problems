#include <stdio.h>
#include <cstring>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long int i,j;
    int n;
    scanf("%d",&n);
    while(n)
    {
        scanf("%ld %ld",&i, &j);
        if(i<j) {printf("<\n");n--;}
        else if(i>j) {printf(">\n");n--;}
        else {printf("=\n");n--;}
    }

  return 0;
}

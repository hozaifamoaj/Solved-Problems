#include <stdio.h>
#include <math.h>

int main() {
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  double n,p;
  while(scanf("%lf %lf", &n, &p)==2)
    printf("%0.lf\n", pow(p, 1/n));
  return 0;
}

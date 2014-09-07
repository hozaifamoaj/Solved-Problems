#include <iostream>
#include <algorithm>
using namespace std;

int main () {
  long a[100],c,t,tc,j,i;
  cin>>t;
  while(t--){
      c=0;
      cin>>tc;
      for(j=1;j<=tc;j++)
          cin>>a[j];

      for(i=1;i<=tc;i++)
        for(j=i+1;j<=tc;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
                c++;
            }
        }
      cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
  }
  return 0;
}

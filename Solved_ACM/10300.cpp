#include <iostream>
using namespace std;

int main () {
  int t,tp,fm,an,ef,sum;
  cin>>t;
  while(t--){
      sum=0;
      cin>>tp;
            while(tp--){
                cin>>fm>>an>>ef;
                sum+=fm*ef;
            }
        cout<<sum<<endl;
        }
  return 0;
}

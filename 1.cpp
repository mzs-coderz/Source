#include <iostream>
using namespace std;

int main(){
    register int T,i,cx,cy,px,py,r;
    cin>>T;
    for(i=1;i<=T;i++){
        cin>>cx>>cy>>r>>px>>py;
        if(((px-cx)*(px-cx))+((py-cy)*(py-cy))<(r*r)){
           cout<<"Case "<<i<<": yes\n";
        }
        else{
             cout<<"Case "<<i<<": no\n";
        }
    }
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int T,i,A,B,C,P;
    double r;
    cin>>T;
    for(i=1;i<=T;i++){
        cin>>A>>B>>C;
        P=(A+B+C)/2;
        r=sqrt(P*((P-A)*(P-B)*(P-C)));
        cout<<"Case "<<i<<": "<<r<<"\n";
    }
    return 0;
}

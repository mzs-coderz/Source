#include <iostream>
using namespace std;

int main(){
    int T,N,ara[1000];
    cin>>T;
    while(T--){
        cin>>N;
        for(int i=0;i<N;i++){
            cin>>ara[i];
        }
        if(ara[0]<ara[1]&&ara[N-2]<ara[-1]){
            if((ara[1]-ara[0])==(ara[N-1]-ara[N-2])&&((ara[1]/ara[0])==(ara[N-1]/ara[N-2]))){
                cout<<ara[N-1]+(ara[N-1]-ara[N-2])<<"\n";
            }
            if((ara[1]/ara[0])==(ara[N-1]/ara[N-2])&&((ara[1]-ara[0])!=(ara[N-1]-ara[N-2]))){
                cout<<ara[N-1]*(ara[N-1]/ara[N-2])<<"\n";
            }
        }
        else{
            cout<<ara[N-1]-(ara[0]-ara[1])<<"\n";
        }
    }
    return 0;
}

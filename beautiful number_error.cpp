#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    freopen("D:\\in.txt","r",stdin);
    unsigned long long T,M,N,m[1000],X=0,p[100000],e=0;
    cin>>T;
    while(T--){
        cin>>M;
        for(int i=0;i<M;i++) cin>>m[i];
        cin>>N;
        for(int i=1;i<=N;i++){
            for(int j=0;j<M;j++){
                if(i%m[j]==0){
                    p[e]==i;
                    X++;
                    e++;
                }
            }
        }
        for(int i=0;i<=e;i++){
            for(int j=i+1;j<=e;j++){
                if(p[i]==p[j]){
                    X--;
                }
            }
        }
        cout<<X<<"\n";
        X=0;
        e=0;
    }
    return 0;
}

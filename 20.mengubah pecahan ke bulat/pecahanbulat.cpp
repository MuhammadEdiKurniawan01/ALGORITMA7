#include <iostream>
using namespace std;
int faktor(int a,int b)
{
    if (b==0){
        return a;
    }
    else{
        faktor(b,a%b);
    }
}
int main(){
    int fpb,w,x,y,z;
    int e,f;
    cin>>w>>x>>y>>z;
    f=x*z/faktor(x,z);
    e=(f/x*w)+(f/z*y);
    fpb=faktor(e,f);
    cout<<e/fpb<<' '<<f/fpb;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={0,1,1,1,0,1,1,0};
    int Size=sizeof(a)/sizeof(a[0]);

    int c;
    int mx;
    if(a[0]==0) {c=0; mx=0;}
    else {c=1; mx=1;}

    for(int i=1; i<Size; i++){
        if(a[i-1]==a[i]) {
            c++;
            mx=max(mx, c);
        }
        else{
            c=1;
        }
    }
    cout<<mx<<endl;
}

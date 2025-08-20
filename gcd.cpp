#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int a,b,x=0;
    a=(n1>=n2?n1:n2);
    
    for( int i=1;i<=a;i++){
        if(n1%i==0 && n2%i==0){
            x=i;
        }
    }
    cout<<x;

    return 0;
}
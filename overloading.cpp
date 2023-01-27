#include<iostream>
using namespace std; 
int max(int n1, int n2){
    if(n1>n2){
    return n1;
    }
    else{
        return n2;
    }
}
int max(int n1, int n2, int n3){
    if(n1>n2){
        if(n1>n3) return n1;
        return n3;
    }
    else{
        if(n2>n3) return n2;
        return n3;
    }
}
int max(int n1, int n2 , int n3, int n4){
    int a=max(n1,n2,n3);
    return max(a,n4);
}
int main(){
    cout<<max(2,4)<<endl;
    cout<<max(2,4,5)<<endl;
    cout<<max(3,4,6,7);
    return 0;
}
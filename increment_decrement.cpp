#include<iostream>
using namespace std; 
void increment(int *a){
    (*a)++;
    return;
}
void decrement(int *a){
    (*a)--;
    return;
}
int main(){
   int i=11;
   increment(&i);
   cout<<i<<endl;
   
   decrement(&i);
   cout<<i<<endl;
    return 0;
}

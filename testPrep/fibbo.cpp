#include <iostream>
using namespace std;


void isFibbo(int number){
    int t1 = 1,t2=1 , nextTerm = 0;
    for(int i=1;i<number;i++){
         if(i==1){
             cout << t1 << ",";
             continue;
         }
         nextTerm = t1 + t2;
         t1 = t2;
         t2 = nextTerm;

         cout << nextTerm << ", ";
    }
}

int main(){
    isFibbo(12);

    return 0;
}
#include <iostream>
using namespace std;
void isFibbo(int number){
    int t1 = 1, t2 = 1 , nextTerm = 0;
    for(int i=1;i<number;i++){
         nextTerm = t1 + t2;
         t1 = t2;
         t2 = nextTerm;
         if(nextTerm == number){
             cout << nextTerm << " is a fibbon ";
             break;
         }         
    }
}
int main(){
    isFibbo(8);
    return 0;
}
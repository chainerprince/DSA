#include <iostream>
#include <bitset>
using namespace std;
int main(){
    short a = 0b00001001;
    short b = 0b00001101;
    short sum = a+b;
    cout << "The sum of a and b " << bitset<32>(sum);
}
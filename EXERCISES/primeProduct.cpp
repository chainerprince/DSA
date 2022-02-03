#include <iostream>

using namespace std;

int isPrime(int number)
{
    if (number <= 1)
        return 0;

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
            return 0;
    }
    return 1;
}

int isPrimeProduct(int number){
    if(isPrime(number)){return 0;}
    for(int i=2;i<=number/2;i++){
      
        if(isPrime(i) && (number % i) == 0 && isPrime(number/i)){
            return 1;
        }
    }
    return 0;
}

int main(){
    if(isPrimeProduct(20))
        cout << "The thing works";
    return 1;
}
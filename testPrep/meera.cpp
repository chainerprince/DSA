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

int isMeera(int *arr,int size){
    int primeFound = 0;
    int zeroFound = 0;
    for(int i=0;i<size;i++){
       if(isPrime(arr[i])){
             primeFound = 1;
       }
       if(arr[i] == 0){
           zeroFound = 1;
       }

      
    }
    if ((zeroFound && primeFound) || (!zeroFound && !primeFound))
    {
        return 1;
    }
    return 0;
}

int main(){
    int arr[] = {6,10,7,1,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = isMeera(arr, size);
    if (result)
    {
        cout << "the array is meera";
    }
    else
    {
        cout << "the array is not meera";
    }
    return 0;
}
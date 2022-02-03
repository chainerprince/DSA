#include <iostream>
using namespace std;
int isPrime(int number){
    if(number <=1 )
        return 0;

   for(int i=2;i<=number/2;i++){
       if(number%i==0)
           return 0;
       
   }
   return 1;

}
int isMagicArray(int *arr,int size){
    int primeSum = 0;
    for(int i=0;i< size ;i++){
        if(isPrime(arr[i]))
            primeSum += arr[i];
    }
    if(primeSum == arr[0])
        return 1;
    return 0;

}

int main(){
    if(isPrime(8)){
        cout << "The number is prime";
    }
    int arr[] = {21, 3, 7, 9, 11, 4, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
   int magic =  isMagicArray(arr,size);
   if(magic)
    cout << "The array is magic";
    return 0;
}
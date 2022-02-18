#include <iostream>

using namespace std;

int evenOdd(int arr[],int size){

    int sumEven = 0;

    int sumOdd = 0;

    for(int i=0;i<size;i++){

        if(arr[i]%2 == 0){

                sumEven+=arr[i];

        }else{

        sumOdd += arr[i];

        }            
    }
    return sumOdd - sumEven;
}

int main(){
    int array[] ={3, 2, 5, 4, 1};

    int size = sizeof(array)/sizeof(array[0]);

    int result = evenOdd(array,size);
    
    cout << "The result is: " << result;

    return 0;
}
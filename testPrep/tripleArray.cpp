#include <iostream>
using namespace std;

void swap(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        for(int j=0;j<size-i-1;j++){
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
        
    }
}

int isTripleArray(int *arr,int size){
    for(int i=0;i< size; i++){
        if (arr[i] == arr[i + 1] == arr[i + 2])
        {
            return 1;
        }
        i+=2;
    }
    return  0;
  
}


int main(){
    int arr[] = {2, 2, 3, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr,size);
    int result = isTripleArray(arr,size);
    if (result)
    {
        cout << "the array is triple";
    }
    else
    {
        cout << "the array is not triple";
    }

    return 0;
}
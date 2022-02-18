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
    int isTriple = 0;
    for(int i=0;i< size; i+=2){
        if(i>size ){
            break;
        }
        
        if ((arr[i] == arr[i + 1]) && (arr[i] == arr[i + 2]))
        {
          isTriple = 1;
        }
        
    }
    return isTriple;
  
}


int main(){
    int arr[] = {2, 2, 2, 3, 3, 3,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    // BubbleSort(arr,size);
    
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
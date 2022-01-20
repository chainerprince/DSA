#include <iostream>

using namespace std;



int binarySearch(int *arr,int size,int key){
int start,end;
start = 0;
end =0;

for(int i = start; i< end;i++){
    int mid = (start + end)/2;
    if(key == arr[mid]){
        return mid;
    }else if(arr[mid] > key){
        end = mid - 1;
    }
    else if(arr[mid] < key){
        start = mid + 1;
    }
}

return -1;
}

int main(){
    int numbers[] = {1,2,3,4,5};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    int result = binarySearch(numbers,size,3);
    cout << "The index is " << result;
    
}
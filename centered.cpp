#include <iostream>

using namespace std;

int findCenteredArray(int *arr,int size){
    if(size < 3)
        return 0;
    if(size % 2 == 0)
        return 0;

    int middleIndex = (size-1)/2;
    for(int i=0;i<middleIndex;i++){
        if(arr[i] <= arr[middleIndex] ||  arr[i] >= arr[middleIndex+i+1] ){

            return 0;
        }
        
        return 1;
    }
    return 0;
}
int main(){
    int testing[] = {1,3,2,10,4,5,6,7,8,9,0};
    int size = sizeof(testing)/sizeof(testing[0]);
    int res = findCenteredArray(testing,size);
    cout << "the result is  " << res;
    return 0;
}



// #include <stdio>
#include <iostream>
using namespace std;
int isBean(int *arr,int len){
    int isValidBean = 1;
    for(int i=0;i<len;i++){
        int isValid = 0;
        for(int j=0;j<len;j++){
            if(arr[i] == arr[j]-1 || arr[i] == arr[j]+1){
                isValid = 1;
                break;
            }
            
        }
        if (isValid==0){
            isValidBean = 0;
        }

    }
    return isValidBean;
}
int main(){
    int arr[] = {2,2,3,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = isBean(arr,size);
    if(result){
        cout << "the array is bean";
    }else{
        cout << "the array is not bean";
    }
    return 0;
}
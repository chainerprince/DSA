#include <iostream>

using namespace std;

int main(){
    int array[] = {0,-2,-4,-5,9,4,2,1,-1};
    int n = sizeof(array) / sizeof(array[0]);

    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            if(array[j-1] < array[i]){
                int temp = array[i];
                array[i] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
    // for(int i=1;i<n;i++){
    //     for(int j=0;j<n-1;j++){
    //         if(array[j]>array[j+1]){
    //             int temp = array[j+1];
    //             array[j+1] = array[j];
    //             array[j] = temp;
    //         }
    //     }
    //     for(int arr:array){
    //     cout<<arr;
    // }
    // }
     for(int arr:array){
        cout<<arr<<endl;
    }
    
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int array[] = {1,1,5,7,0,34,0,2,5,7};
    int n = sizeof(array)/sizeof(array[0]);
    for(int i=0;i<n-1;i++){
        int index_of_min = i;
        for(int j=i+1;j<n;j++){
            if(array[j]<array[index_of_min]){
                 index_of_min=j;
            }
        }
        if(array[i] != array[index_of_min]){
        int temp = array[i];
        array[i] = array[index_of_min];
        array[index_of_min] = temp;
        }
        

    }
    for(int arr:array){
        cout<<arr<<endl;
    }
    return 0;
}
#include <iostream>
#include <cstring>

using namespace std;

char *characterArray(char arr[],int start,int length){
    if (arr == NULL) return NULL;
 int len = strlen(arr);
 
    if(start < 0 || length > len || (start+length) > len || start >= len || length < 0 ){
        return NULL;
    }
    
    char *finalArray = new char[length];
     int x = 0;
     for(int i=start;i<(start+length);i++){
         
         finalArray[x] = arr[i];
         x++;
     }
     return finalArray;
}

int main(){
   static char el[] = {'a','b','c'};

    int len = 1;
    // int size = sizeof(el) / sizeof(el[0]);
    char *res = characterArray(el,1,len);
    if(!res){
        cout << "Null";
    }else{
        for(int y = 0; y < len;y++){
            cout << "   The element is " << res[y];
        }
    }
    
    

    return 0;
}
def binarySearch(arr,key):
    size = len(arr);
    start = 0;
    end = size -1
    while(start <= end):
        mid = int((start + end)/2)
        
        if(arr[mid] == key):
            return mid;
        elif(arr[mid] < key):
            start = mid+1;
        else:
            end = mid - 1;
        
    return -1;


arr = [1,2,3,4,5]
res = binarySearch(arr,3)
print
    
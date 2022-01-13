def insertionSort(arr):
    for i in range(1,len(arr)):
        j = i-1;
        nxt_elm = arr[i]
        while(arr[j]>nxt_elm) and j>=0:
            arr[j+1] = arr[j]
            j=j-1;
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 2, 3, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = isBean(arr, size);
    if (result)
    {
        cout << "the array is bean";
    }
    else
    {
        cout << "the array is not bean";
    }
    for (int i = 0; i < size; i++)
    {
    }
    return 0;
}
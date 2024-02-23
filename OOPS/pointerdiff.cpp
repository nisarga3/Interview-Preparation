#include <iostream>

using namespace std;

int main()
{
    int arr[2] = {10, 20};
    int *p = arr;
    ++*p; // increments the value of *p --> first index
    cout << arr[0] << " " << arr[1] << " " << *p << endl;

    int arr1[2] = {10, 20};
    int *p1 = arr1;
    *p1++; // increments pointer and dereferences
    cout << arr1[0] << " " << arr1[1] << " " << *p1 << endl;

    int arr2[2] = {10, 20};
    int *p2 = arr2;
    *++p2; // pointer is incremented and dereferenced
    cout << arr2[0] << " " << arr2[1] << " " << *p2 << endl;
}
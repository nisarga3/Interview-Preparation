// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int *p = &a;  // pointer
//     int **q = &p; // pointer-to-pointer
//     /*  */
//     cout << &a << endl;
//     cout << p << endl;
//     cout << *q << endl;
//     /* */
//     cout << &p << endl;
//     cout << q << endl;
//     /*  */
//     cout << a << endl;
//     cout << *p << endl;
//     cout << **q << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;
    // attention here
    cout << ch << endl;

    char *c = &ch[0];
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;
    return 0;
}
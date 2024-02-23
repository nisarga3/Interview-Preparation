#include <iostream>

using namespace std;

void print(int *p)
{
    cout << "inside print " << p << endl;
}
void update(int *p)
{
    // we cant update adress but we can update value
    // p = p + 1;.
    *p = *p + 1;

    cout << "inside " << *p << endl;
}
void getsize(int *arr, int n)
{
    cout << sizeof(arr); // when i pass int arr[] , its like passing * arr, so size will be 4 (in this compiler- standard pointer size for 32 bit code\)
}
int main()
{

    int x = 3;
    cout << "x is at adresss: " << &x << endl; // address of the variable 'x'
    int *p = &x;                               // address stored in p
    cout << "val of x " << *p << " \nAddress of x " << p << endl;
    //
    //
    //
    //
    //

    // size of pointer is 4 or 8, irrespective of datatype, cuz it stores addresses in all cases
    cout << "size of pointer " << sizeof(p) << endl;
    double s = 8.9;
    double *ptrr = &s;
    cout << "size of pointer " << sizeof(ptrr) << endl;
    //
    //
    //
    //
    //

    int a[] = {8, 2, 3, 4, 5};
    cout << "\n\nARRAY POINTERS\nint a[]={1,2,3,4,5};\nname of array prints- address of first element " << a;
    int *q = a;
    cout << "\nfirst ele " << *q << "\naddress of first ele " << q;
    cout << " address of first memory block is " << &a[0] << endl;
    cout << "*a " << *a << endl;
    cout << "*a + 1 " << *a + 1 << endl;
    cout << "*(a + 1) " << *(a + 1) << endl;
    cout << "*(a) + 1 " << *(a) + 1 << endl;
    cout << "a[2] " << a[2] << endl;
    cout << "*(a+2) " << *(a + 2) << endl;
    int i = 3;
    cout << i[a] << endl;
    //
    //
    //
    //
    //
    //

    cout << "\n\nIMPORTANT CONCEPT\n++*q;\nbefore pre increment " << *q;
    /* The statement `++*q;` is incrementing the value at the memory location pointed to by `q`. It is
    equivalent to `*q = *q + 1;`. */
    ++*q;
    cout << "\nafter pre increment " << *q << "\n";
    cout << "a[0]=" << a[0];

    cout << "\n*q++;\nbefore value a[0] " << *q;
    /* The statement `*q++;` is incrementing the pointer `q` to point to the next element in the array.
    It is equivalent to `q = q + 1;`. However, since the increment operator `++` has higher
    precedence than the dereference operator `*`, the value at the current memory location pointed
    to by `q` is first accessed and then the pointer `q` is incremented. */
    *q++;
    cout << "\nafter value a[1] " << *q; // basically printing a[1]

    cout << "\n*++q;\nbefore value a[1] " << *q;
    /* The statement `*++q;` is incrementing the pointer `q` to point to the next element in the array,
    and then accessing the value at that memory location. */
    *++q;
    cout << "\nafter value a[2] " << *q << "\n";

    int *k = a;
    k += 1; /// pointer moves ahead 1 elements from its initial position
    cout << *k << "\n\n";

    int b[] = {1, 2, 3, 4, 5};
    cout << "int b[]={1,2,3,4,5};" << endl;
    cout << "b " << b << endl;
    cout << "*b " << *b << endl;
    cout << "&b " << &b << endl;
    cout << "below 3 are same\nb[2] " << b[2] << endl;
    cout << "2[b] " << 2 [b] << endl;
    cout << "*(b+2) " << *(b + 2) << endl;

    cout << "sizes" << endl;
    cout << sizeof(b) << endl;  // there are 5 elements and size of int is 4
    cout << sizeof(*b) << endl; // value at b (first ele) 's size
    cout << sizeof(&b) << endl;

    int c[10] = {1, 2, 3, 4, 5};
    // error  c=c+1;
    cout << "c " << c << endl;
    cout << "*c " << *c << endl;
    cout << "&c " << &c << endl;

    int *ptr = c;
    cout << "ptr " << ptr << endl; // this is address of c
    cout << "*ptr " << *ptr << endl;
    cout << "&ptr " << &ptr << endl; // this address of ptr

    cout << "\n\nSTRINGS- CHAR ARRRAY\n";
    // cout implementation in char array is differnt than int array, here if we print name of array, we get address, but in char array, whole string get printed
    char ch[6] = "abcde";
    cout << "ch " << ch << endl;
    char *ptr1 = &ch[0];
    cout << "ptr1 " << ptr1 << endl;
    cout << "*ptr1 " << *ptr1 << endl;
    cout << "&ptr1 " << &ptr1 << endl;

    char temp = 'z';
    char *g = &temp;
    cout << g << endl; // we get garbage values too, because in cout for chars, it starts printing from that temp's address and wonbt stop until a null character is found

    cout << "\n\nFUNCTIONS\n";
    int d = 5;
    int *l = &d;
    print(l);
    cout << "before " << *l << endl;
    update(l);
    cout << "after " << *l << endl;

    int u[10] = {12, 3, 4};
    int *y = u;
    getsize(u, 3);
}
#include <iostream>

using namespace std;

class a
{
    int a;

public:
    int get()
    {
        return a;
    }
    void set(int a)
    {
        this->a = a;
    }
};

class b : public a
{
};

int main()
{
    b *ob1 = new b();
    ob1->set(18);
    int ans = ob1->get();
    cout << ans;
}
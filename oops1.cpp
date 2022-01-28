#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    virtual void speak()
    {
        cout << "hello\n";
    }
};

class Dog : public Animal
{
    public:
    void speak()
    {
        cout << "hey there\n";
    }
};

int main()
{
    Dog d;
    Animal *a = &d;
    a->speak();
    return 0;
}

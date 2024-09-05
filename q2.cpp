#include<iostream>
using namespace std;

class counter{
    private:
    int value;
    public:

    counter(int i)
    {
        this->value=i;
    }

    friend counter& operator ++(counter &c,int i);

    //function to display counter value

    void display()
    {
        cout<<"Pointer value is "<<value<<endl;
    }
};

// overloading operator 
counter& operator ++(counter &c, int i)
{
    cout<<"Value before increment is  "<<c.value<<endl;
    ++c.value;
    cout<<"Value after increment is  "<<c.value<<endl;
    return c;
}

int main()
{
    counter c1(10);
    c1.display();
    c1++;
    c1++;
    c1.display();
    return 0;

}
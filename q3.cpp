#include<iostream>
using namespace std;
class complex{
private:
int real;
int imaginary;
public:
complex(int r,int i)
{
    this->real=r;
    this->imaginary=i;
}

friend complex operator+(complex &a,complex &b);
void display()
{
    if(imaginary>0)
    {
        cout<<real<<" +"<<imaginary<<endl;    
    }
    else{
    cout<<real<<" "<<imaginary<<endl;
    }
}

};
 complex operator+(complex &a,complex &b)
{
    return complex(a.real+b.real,a.imaginary+b.imaginary);
}
int main(){
    complex m(2,-8);
    complex n(1,4);
    cout<<"  ";
    m.display();
    cout<<"+ ";
    n.display();
    complex sum=m+n;
    cout<<"----------"<<endl;
    cout<<"  ";
    sum.display();
    
}


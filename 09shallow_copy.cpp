// The default copy constructor can only produce the shallow copy.
// A Shallow copy is defined as the process of creating the copy of an object by copying data of all the member variables as it is.

#include <iostream>  
  
using namespace std;  
  
class Demo  
{  
    int a;  
    int b;  
    int *p;  
    public:  
    Demo()  
    {  
        p=new int;  
    }  
    void setdata(int x,int y,int z)  
    {  
        a=x;  
        b=y;  
        *p=z;  
    }  
    void showdata()  
    {  
        std::cout << "value of a is : " <<a<< std::endl;  
        std::cout << "value of b is : " <<b<< std::endl;  
        std::cout << "value of *p is : " <<*p<< std::endl;  
    }  
};  
int main()  
{  
  Demo d1;  
  d1.setdata(4,5,7);  
  Demo d2 = d1;  
  d2.showdata();  
    return 0;  
}  
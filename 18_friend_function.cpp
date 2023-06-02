// C++ Friend function
// If a function is defined as a friend function in C++, then the protected and private data of a class can be accessed using the function.

// By using the keyword friend compiler knows the given function is a friend function.

#include <iostream>    
using namespace std;    
class Box    
{    
    private:    
        int length;    
    public:    
        Box(): length(0) { }    
        friend int printLength(Box); //friend function    
};    
int printLength(Box b)    
{    
   b.length += 10;    
    return b.length;    
}    
int main()    
{    
    Box b;    
    cout<<"Length of box: "<< printLength(b)<<endl;    
    return 0;    
}    
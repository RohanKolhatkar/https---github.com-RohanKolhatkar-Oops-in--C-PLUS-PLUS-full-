// Interfaces in C++ (Abstract Classes)
// Abstract classes are the way to achieve abstraction in C++. Abstraction in C++ is the process to hide the internal details and showing functionality only. Abstraction can be achieved by two ways:

// Abstract class
// Interface


#include <iostream>  
using namespace std;  
 class Shape    
{    
    public:   
    virtual void draw()=0;    
};    
 class Rectangle : Shape    
{    
    public:  
     void draw()    
    {    
        cout <<"drawing rectangle..." <<endl;    
    }    
};    
class Circle : Shape    
{    
    public:  
     void draw()    
    {    
        cout <<"drawing circle..." <<endl;    
    }    
};    
int main( ) {  
    Rectangle rec;  
    Circle cir;  
    rec.draw();    
    cir.draw();   
   return 0;  
}  
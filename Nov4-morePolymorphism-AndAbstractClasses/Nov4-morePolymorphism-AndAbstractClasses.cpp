// Nov4-morePolymorphism-AndAbstractClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Shape
{
public: 
    virtual void show() = 0; //"set a function equal to 0 ...?" 
                    //what is going on here? 
    //{
    //    system("questionMark.svg");
    //}

    //a CON-structor 
    Shape()
    {

    }

    /*Using a tilde in front of the class name makes this a DESTRUCTOR*/
    ~Shape()
    {
        //delete 
        std::cout << "DESTRUCTOR - called\n";
    }
};

class Triangle : public Shape
{
public: 
    void show() override 
    {
        system("triangle.png");
    }

    ~Triangle()
    {
       std:: cout << "Triangle destructor called\n";
    }
};

void makeTriangle()
{
    Triangle t; //how long does this "live"? 
}

void showShape(Shape* ptrToSomeShape)
{
/*    (*ptrToSomeShape).show();*/ 
    ptrToSomeShape->show(); 
}

int main()
{
    makeTriangle(); 

    std::cout << "AFTER calling the makeTriangle function\n";
    //Shape someShape; 
    //Shape someShape; 
/*    someShape.show();*/


    //int a;
    //float* b = &a;

    Triangle someTriangle; 
    //cout << someTriangle.show() << "\n";
    //showShape(&someTriangle);

    //Triangle newTriangle = new Triangle; 



    //someTriangle.show(); //how will someTriangle "behave" (as its parent or as itself?) 
    //std::cout << "Hello World!\n";
}

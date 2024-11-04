
#include <iostream>
#include<Windows.h>
#include<shellapi.h> //for ShellExecute (can open a WEBPAGE)


#pragma comment(lib, "Shell32.lib")

using std::cout; 
using std::string; 

class Animal
{
    double mass; 
    string attrib1; //40 Bytes for this
    string attrib2;
    string attrib3;


public: 
    void eat()
    {
        cout << "Eating ... something\n";
    }

    void showFace()
    {
        cout << "...\n";
    }

    virtual void makeSoundWithMouth() //virtual means CAN BE OVERRIDEN 
    {
        system("pinkNoise.wav");
    }
};

class Dog : public Animal
{
    //double mass; //unnecessary!
    //insert some member vars, if desired ...
public: 
    void eat() //again, this function will OVERRIDE the parent's `eat`
    {
        cout << "Eating dog food ...\n";
    }

    void showFace()
    {
        cout << ":)\n";
    }

    void makeSoundWithMouth()
    {
        cout << "Bow wow, bow wow!\n";
    }
};

class WILDcat : public Animal
{
public: 
    void eat()
    {
        cout << "Eating some poor critter...\n";
    }

    void showFace()
    {
    //a way to open a webpage using C++ on Windows
        ShellExecute(NULL,
            L"open",
            L"https://open.spotify.com/track/1l5rqEDsfq3hF71DTV8Hyq",
            NULL,
            NULL,
            SW_SHOWDEFAULT);
    }

    void makeSoundWithMouth() //override //override is optional but recommended here 
    {
        system("wildcat-ratatat.m4a");
    }
};

void callEatFunction(Animal* a)
{

}

void callMakeSoundWithMouth(Animal* a) //is this stupid? 
{
    a->makeSoundWithMouth(); 
}

int main()
{
    Animal someAnimal; 
    Dog someDog; 
    WILDcat someWildCat; 

    Animal* ptrToSomeAnimal = &someAnimal;

    //callMakeSoundWithMouth(ptrToSomeAnimal); 

    //cout << "Amount of BYTES taken up by Animal object: " << sizeof(someAnimal) << "\n";
    //cout << "Amount of BYTES taken up by Animal object: " << sizeof(ptrToSomeAnimal) << "\n";


    //cout << "What is this? " << ptrToSomeAnimal << "\n";

    Dog* ptrToSomeOTHERdog = new Dog; 
   
    //callMakeSoundWithMouth(ptrToSomeAnimal); 
    
    WILDcat* ptrToWildCat = &someWildCat; //static memory allocation (on "the stack" ) 


    WILDcat* newWildCatPtr = new WILDcat; //dynamic memory allocation

    callMakeSoundWithMouth(newWildCatPtr);


    //callMakeSoundWithMouth(ptrToWildCat);


    //(*ptrToSomeOTHERdog).eat(); //this is an ALTERNATIVE to the arrow operator  
    //ptrToSomeOTHERdog->eat(); 

    //ptrToSomeAnimal->eat(); 
    //someAnimal.eat(); 
    //someDog.eat(); 
    //someWildCat.eat(); 



}

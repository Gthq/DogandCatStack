#include <iostream>
#include "Pet.h"
#include "cmake-build-debug/opt.h"
#include "cmake-build-debug/Cat.h"
#include "cmake-build-debug/Dog.h"
using namespace std;

int main() 
{
    Dog d1,d2,d3,d4;
    Cat c1,c2,c3,c4;
    opt P;
    P.add(d1);
    P.add(c1);
    P.add(d2);
    P.add(c2);
    P.add(d3);
    P.add(c3);
    P.add(d4);
    P.add(c4);
//    P.pollDog();
//    cout<<P.isDogEmpty()<<endl;
//    P.pollCat();
//    cout<<P.isCatEmpty()<<endl;
    P.pollAll();
    cout<<P.isEmpty();
    P.printpet();
    return 0;
}
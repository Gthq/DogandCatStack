//
// Created by Gthq on 2019/10/22.
//

#ifndef DOGCATSTK_OPT_H
#define DOGCATSTK_OPT_H

#include <ctime>
#include "../Pet.h"
#include "Cat.h"
#include "Dog.h"
#include <stack>

using namespace std;

class opt
{
private:
    stack<Pet> all;
    stack<Cat> cpet;
    stack<Dog> dpet;
public:
    opt() = default;
    void add(const Pet& pet);
    void pollAll();
    void pollDog();
    void pollCat();
    bool isEmpty();
    bool isDogEmpty();
    bool isCatEmpty();
    void printpet();


};


#endif //DOGCATSTK_OPT_H

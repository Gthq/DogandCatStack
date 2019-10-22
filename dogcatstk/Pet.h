//
// Created by Gthq on 2019/10/22.
//
#include <string>
#include <utility>
using namespace std;
#ifndef DOGCATSTK_PET_H
#define DOGCATSTK_PET_H


class Pet
{
private:
    string type;
public:
    explicit Pet(string type) {this->type = type;}
    string getpettype();
};


#endif //DOGCATSTK_PET_H

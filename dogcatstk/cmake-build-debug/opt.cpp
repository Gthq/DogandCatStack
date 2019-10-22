//
// Created by Gthq on 2019/10/22.
//
#include <iostream>
#include "opt.h"
using namespace std;
void opt::add(const Pet& pet)
{
    opt::all.push(pet);
}

void opt::pollAll()
{
    while(!opt::all.empty())
    {
        opt::all.pop();
    }
}

void opt::pollDog()
{
    while(!opt::all.empty())
    {
        Pet tmpet = opt::all.top();
        opt::all.pop();
        pollDog();
        if(tmpet.getpettype()!="Dog")
        {
            opt::all.push(tmpet);
            return;
        }
        else
            return;
    }
}

void opt::pollCat()
{
    while(!opt::all.empty())
    {
        Pet tmpet = opt::all.top();
        opt::all.pop();
        pollCat();
        if(tmpet.getpettype()!="Cat")
        {
            opt::all.push(tmpet);
            return;
        }
        else
            return;
    }
}

bool opt::isEmpty()
{
    return opt::all.empty();
}

bool opt::isDogEmpty()
{
    stack<Pet> tmp = opt::all;
    while(!tmp.empty())
    {
        Pet pp = tmp.top();
        tmp.pop();
        if(pp.getpettype()=="Dog")
            return false;
    }
    return true;
}

bool opt::isCatEmpty() {
    stack<Pet> tmp = opt::all;
    while(!tmp.empty())
    {
        Pet pp = tmp.top();
        tmp.pop();
        if(pp.getpettype()=="Cat")
            return false;
    }
    return true;
}

void opt::printpet()
{
    stack<Pet> tmp = opt::all;
    while(!tmp.empty())
    {
        cout<<tmp.top().getpettype()<<endl;
        tmp.pop();
    }
}



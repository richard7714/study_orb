//
// Created by ma on 23. 1. 8.
//
#define SCOPE
#ifndef SCOPE
#include <mutex>
#include <iostream>

int main(){
    int* b;

    {
        int* tt = new int;
        *tt = 12;
//        b = tt;
//        delete tt;
    }
    int* c;

//    std::cout<<*b<<std::endl;
}

#endif
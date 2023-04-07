//
// Created by Jugglyuser on 07.04.2023.
//

#include "iostream"
#include "string"

using namespace std;

#ifndef HASHMAP_H
#define HASHMAP_H


class HashMap {
public:
    string** storage;
    int size, base;
    HashMap(int, int);
};


#endif //HASHMAP_H
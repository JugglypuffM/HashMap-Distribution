//
// Created by Jugglyuser on 07.04.2023.
//

#include "iostream"
#include "string"
#include "cmath"
#include "List.h"

using namespace std;

#ifndef HASHMAP_H
#define HASHMAP_H


class HashMap {
public:
    List* storage;
    int size, base;
    HashMap(int, int);
    void add(string) const;
    int hash(string) const;
};


#endif //HASHMAP_H
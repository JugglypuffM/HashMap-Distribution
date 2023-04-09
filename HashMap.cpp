//
// Created by Jugglyuser on 07.04.2023.
//

#include "HashMap.h"

using namespace std;

HashMap::HashMap(int s, int b) {
    size = s;
    base = b;
    storage = new List[s];
}

void HashMap::add(string s) const {
    storage[hash(s)].push_back(s);
}

int HashMap::hash(string s) const {
    int result = 0;
    for(int i = 0; i < s.size(); ++i)
        result+= ((int)s[i]) * pow(base, i);
    result %= size;
    return result;
}

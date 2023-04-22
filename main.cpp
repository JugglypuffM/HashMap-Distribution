#include <iostream>
#include "fstream"
#include "string"
#include "List.h"
#include "HashMap.h"

using namespace std;

void fillRandom(int amount, HashMap *hm){
    string alphabet[27] = {"q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "a", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "c", "v", "b", "n", "m"};
    srand(time(nullptr)%12345);
    string current;
    while (hm->amount != 10000){
        current = alphabet[rand()%26] + alphabet[rand()%26] + alphabet[rand()%26] + alphabet[rand()%26];
        hm->add(current);
    }
}

int main() {
    HashMap first = HashMap(17, 7);
    HashMap second = HashMap(31, 11);
    HashMap third = HashMap(101, 2);
    int amount;
    cin >> amount;
    ofstream output(R"(C:\things\CLion\Small Tasks\HashMap\output)");

    fillRandom(amount, &first);
    fillRandom(amount, &second);
    fillRandom(amount, &third);

    for (int i = 0; i < first.size; ++i) {
        output << first.storage[i].size << endl;
    }
    output << endl;

    for (int i = 0; i < second.size; ++i) {
        output << second.storage[i].size << endl;
    }
    output << endl;

    for (int i = 0; i < third.size; ++i) {
        output << third.storage[i].size << endl;
    }
    first.clear();
    second.clear();
    third.clear();
    return 0;
}

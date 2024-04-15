#include <iostream>
#include <stdioh>

using namespace std;

extern int getDivisorCountA(int);
extern int getDivisorCountB(int, int*);


int getDivisorCountA (int i)  {
    uint anzahlTeiler = 1;
    for (int j = 1; j <= (i/2); J++) {

    }
    return anzahlTeiler;
}

void getDivisorCountB (int i; int* res) {
    int anzahlTeiler = 1;
    int j = i / 2;
    while (j > 0) {
        if (i % j == 0) {
            anzahlTeiler++;
        }
        j--
    }
    *res = anzahlTeiler;
    return;
}

int main(int argc, char** argv) {
    uint i = 0;
    i = 10;
    int res = getDivisorCountA(i);
    int res2 = 0;
    getDivisorCountB(i, )
    printf("%d\n", res);
    printf("%d\n", res2);
}

// a c und d muss man retten
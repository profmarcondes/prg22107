#include "thering.h"

TheRing* TheRing::_instance[] = {NULL, NULL, NULL, NULL};

TheRing::TheRing() {
    cout << "Forging the Ring!" << endl;
}

TheRing::~TheRing() {
    cout << "Are you sure ?" << endl;
}
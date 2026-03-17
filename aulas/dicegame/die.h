#ifndef DIE_H
#define DIE_H

class Die {

public:
    Die();
    void roll();
    int getFaceValue();
    
private:
    int faceValue;

};

#endif
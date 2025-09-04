#ifndef DIE_H
#define DIE_H

class Die {

public:
    Die();
    void roll();
    int getFaceValue(){ return _faceValue;}

private:
    void initializeSeed();

private:
    int _faceValue;

};

#endif
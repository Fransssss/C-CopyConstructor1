//
// Created by XaveF on 5/23/2022.
//

#ifndef C_COPYCONSTRUCTOR1_PLAYCLASS_H
#define C_COPYCONSTRUCTOR1_PLAYCLASS_H


class PlayClass
{
private:
    int* _value;
public:
    PlayClass();                                     // default constructor
    PlayClass(const PlayClass& origObj);             // copy constructor - prevent shallow copy and double delete
    ~PlayClass();                                    // free block of memory
    void SetVal(const int& val);
    int GetVal() const;
};


#endif //C_COPYCONSTRUCTOR1_PLAYCLASS_H

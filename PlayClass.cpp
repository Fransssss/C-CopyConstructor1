//
// Created by XaveF on 5/23/2022.
//

#include "PlayClass.h"
#include <iostream>

using std::cout;
using std::endl;

PlayClass::PlayClass()
{
    cout << "[Default constructor called]" << endl;
    _value = new int;                // create space before assign value
    *_value = 0;
}

PlayClass::PlayClass(const PlayClass &origObj)
{
    cout << "[Copy constructor called]" << endl;
    _value = new int;
    *_value = *(origObj._value);
}

PlayClass::~PlayClass()
{
    cout << "[Destructor called]" << endl;
    delete _value;                  // clean block of memory after use
}

void PlayClass::SetVal(const int &val)
{
    cout << "[Set a value]" << endl;
    *_value = val;
}

int PlayClass::GetVal() const
{
    return *(_value);
}
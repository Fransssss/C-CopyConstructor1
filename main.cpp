// Title: Copy Constructor
// Purpose: Practice copy constructor that prevents shallow copy, double delete, memory leak
// Author: Fransiskus Agapa
// Have fun - enjoy the process - practices make improvement

#include <iostream>
#include "PlayClass.h"

using std::cout;
using std::endl;

void Test(PlayClass copyObj)
{
    cout << "Copied value to Test Function" << endl;
    int test = 0;
    test = copyObj.GetVal() * 2;
    cout << "The sqrt val is " << test << endl << endl;
}

int main()
{
    cout << endl;
    PlayClass fClass;
    cout <<" Initial value: " << fClass.GetVal() << endl;

    cout << endl;
    fClass.SetVal(20);
    cout << " Updated value: " << fClass.GetVal() << endl;

    cout << endl;
    Test(fClass);
    cout << " Latest value: " << fClass.GetVal() << endl;

  return 0;
}

#include <iostream>
#include "stack.h"
#include "stack.cpp"
using namespace std;

int main() {
    cout << "yoo broo!" << endl;

    Stack S;
    createStack(S);

    getInputStream(S);
    printInfo(S);

    cout << "kebolak stack dongg" << endl;
    balikStack(S);
    printInfo(S);

    return 0;
}

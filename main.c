#include "CXX_Connector.h"
#include <stdio.h>


int main() {
    C_Caller a = Hi_CXX();
    printf("%s\n",a.SayHi);
    printf("%d",a.Add(1,1));

    ClearMemory();
    return 0;
}

#include "CXX_Connector.h"
#include "Operation.h"

#ifdef __cplusplus
extern "C" {
#endif



static Operation *Object = nullptr;

int Add(int a,int b) {
    if (Object == nullptr) {return 0;}
    return Object->Add(a,b);
}
C_Caller Hi_CXX() {
    C_Caller fromC{};
    if (Object == nullptr) {
        Object = new Operation();
        fromC.SayHi = Object->sayHiFromCXX;

    }
    fromC.Add = Add;
    return fromC;
}

void ClearMemory(){
    if (Object){
        delete Object;
    }
}


#ifdef __cplusplus
}
#endif

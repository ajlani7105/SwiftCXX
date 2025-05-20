
#ifndef WRAPCXX_CXX_CONNECTOR_H
#define WRAPCXX_CXX_CONNECTOR_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct  {
    const char* SayHi;
    int (*Add)(int,int);
} C_Caller;

int Add(int a,int b);
C_Caller Hi_CXX();
void ClearMemory();

#ifdef __cplusplus
}
#endif


#endif //WRAPCXX_CXX_CONNECTOR_H

#ifndef TOOLMGR_H
#define TOOLMGR_H
#include "iostream"
#include "ToolMgr_global.h"
class VDLL_EXPORT ToolMgr
{
private:
    /* data */
public:
    void (*pFun)();
public:
    ToolMgr(/* args */);
    ~ToolMgr();
public:
   void getFun(void(*p)());
   void cFun();
   static void tfun()
   {
       std::cout << "hello world" <<std::endl;
   }
};




#endif
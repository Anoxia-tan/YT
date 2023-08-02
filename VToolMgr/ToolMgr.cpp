#include"ToolMgr.h"
ToolMgr::ToolMgr(/* args */)
{
}

ToolMgr::~ToolMgr()
{
}
void ToolMgr::getFun(void(*p)())
{
     pFun = p;
}
void ToolMgr::cFun()
{
    pFun();
}
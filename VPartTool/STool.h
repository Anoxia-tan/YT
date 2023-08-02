#ifndef STOOL_H
#define STOOL_H
#include<iostream>
#include"ToolBase.h"
#include"PartTool_global.h"
class VDLL_EXPORT STool: public ToolBase 
{
public:
    STool(int);
    STool(){}
    ~STool(){}
public:
    virtual void TBExecute() const
    {
         std::cout << "Here is ToolBase in STool!!!" << std::endl;
    }
    virtual void CmdExecute() const
    {
        std::cout << "Here is Command in STool!!!" << std::endl;
    }
private:
    int _a;
};
#endif
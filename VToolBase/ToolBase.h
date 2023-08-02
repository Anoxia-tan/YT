#ifndef TOOLBASE_H
#define TOOLBASE_H
#include<iostream>
#include"Command.h"
#include"Command_global.h"
class VDLL_EXPORT ToolBase: public Command 
{
public:
    ToolBase()
    {
    }
    ~ToolBase()
    {
    }
public:
    virtual void TBExecute() const
    {
         std::cout << "Here is ToolBase!!!" << std::endl;
    }
    virtual void CmdExecute() const
    {
        std::cout << "Here is Command in ToolBase!!!" << std::endl;
    }
};
#endif
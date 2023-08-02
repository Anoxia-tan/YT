
#ifndef COMMAND_H
#define COMMAND_H
#include<iostream>
#include"Command_global.h"
class VDLL_EXPORT Command
{
public:
    Command()
    {
    }
    ~Command()
    {
    }
public:
    virtual void CmdExecute() const
    {
         std::cout << "Here is Command!!!" << std::endl;
    }
};
#endif
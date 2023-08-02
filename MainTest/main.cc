#include<iostream>
#include"STool.h"
#include"Command.h"
#include"ToolBase.h"
#include"ToolMgr.h"
#include "mainwindow.h"
#include <QApplication>
int main(int argc, char *argv[])
{
// m_pTool->CmdExecute();
// m_pTool->TBExecute();
// ToolBase* m_pTB = dynamic_cast<ToolBase*>(m_pTool);
// m_pTB->CmdExecute();
// m_pTB->TBExecute();
 QApplication a(argc, argv);
MainWindow w;
w.show();
 return a.exec();
// STool myTool = 12;
// return 0;
}
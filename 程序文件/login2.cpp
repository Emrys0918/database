// login2.cpp: 实现文件
//

#include "pch.h"
#include "databasexu.h"
#include "afxdialogex.h"
#include "login2.h"


// login2 对话框

IMPLEMENT_DYNAMIC(login2, CDialog)

login2::login2(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_login, pParent)
{

}

login2::~login2()
{
}

void login2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(login2, CDialog)
END_MESSAGE_MAP()


// login2 消息处理程序

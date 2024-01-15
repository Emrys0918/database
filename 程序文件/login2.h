#pragma once
#include "afxdialogex.h"


// login2 对话框

class login2 : public CDialog
{
	DECLARE_DYNAMIC(login2)

public:
	login2(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~login2();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_login };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};

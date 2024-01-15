#pragma once
#include "afxdialogex.h"


// maindlg 对话框

class maindlg : public CDialog
{
	DECLARE_DYNAMIC(maindlg)

public:
	maindlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~maindlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DATABASEXU_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};

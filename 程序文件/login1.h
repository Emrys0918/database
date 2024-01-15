#pragma once
#include "afxdialogex.h"


// login1 对话框

class login1 : public CDialogEx
{
	DECLARE_DYNAMIC(login1)

public:
	login1(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~login1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_login };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual void OnPaint();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnEnChangeEditlog();
	CString m_Edit1_userName;
	CString m_Edit2_passwords;
	afx_msg void OnBnClickedCancel();
	afx_msg void OnStnClickedStatic0();
	afx_msg void OnStnClickedStatic01();
	afx_msg void OnStnClickedStatic04();
};

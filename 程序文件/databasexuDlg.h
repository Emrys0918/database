﻿
// databasexuDlg.h: 头文件
//

#pragma once


// CdatabasexuDlg 对话框
class CdatabasexuDlg : public CDialogEx
{
// 构造
public:
	CdatabasexuDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DATABASEXU_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持
	virtual BOOL PreTranslateMessage(MSG* pMsg);

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1connect();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnLbnSelchangeList3();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnStnClickedStatic4();
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
};

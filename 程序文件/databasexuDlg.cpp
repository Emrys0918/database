// databasexuDlg.cpp: 实现文件
//
#include "framework.h"
#include "pch.h"
#include "databasexu.h"
#include "databasexuDlg.h"
#include "afxdialogex.h"
#include <winsock.h>
#include <mysql.h>
#include <locale.h>
#include "login1.h"
#include "../databasecontrol/resource.h"

//#include "targetver.h"
#pragma comment(lib,"libmySQL.lib")//附加依赖项，也可以在工程属性中设置
#pragma comment(lib,"mysqlclient.lib")
#ifdef _DEBUG
#define new DEBUG_NEW
#endif
CFont cfont;
CFont cfont1;
CFont m_oFont;
// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEditPass();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnEnChangeEditlog();
	CEdit logname;
	CEdit password;
};
BOOL g_bool_symbol = false;
CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_log, logname);
	DDX_Control(pDX, IDC_EDIT_PASS, password);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CAboutDlg::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT_PASS, &CAboutDlg::OnEnChangeEditPass)
	ON_BN_CLICKED(IDC_CHECK1, &CAboutDlg::OnBnClickedCheck1)
	ON_EN_CHANGE(IDC_EDIT_log, &CAboutDlg::OnEnChangeEditlog)
END_MESSAGE_MAP()


// CdatabasexuDlg 对话框



CdatabasexuDlg::CdatabasexuDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DATABASEXU_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDI_ICON1_KUN);
}

void CdatabasexuDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CdatabasexuDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1_connect, &CdatabasexuDlg::OnBnClickedButton1connect)
	ON_BN_CLICKED(IDC_BUTTON1, &CdatabasexuDlg::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT1, &CdatabasexuDlg::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &CdatabasexuDlg::OnEnChangeEdit2)
	ON_LBN_SELCHANGE(IDC_LIST1, &CdatabasexuDlg::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_BUTTON2, &CdatabasexuDlg::OnBnClickedButton2)
	ON_LBN_SELCHANGE(IDC_LIST3, &CdatabasexuDlg::OnLbnSelchangeList3)
	ON_BN_CLICKED(IDC_BUTTON3, &CdatabasexuDlg::OnBnClickedButton3)
	ON_STN_CLICKED(IDC_STATIC4, &CdatabasexuDlg::OnStnClickedStatic4)
	ON_EN_CHANGE(IDC_EDIT4, &CdatabasexuDlg::OnEnChangeEdit4)
	ON_BN_CLICKED(IDC_BUTTON5, &CdatabasexuDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON4, &CdatabasexuDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON6, &CdatabasexuDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON8, &CdatabasexuDlg::OnBnClickedButton8)
	ON_EN_CHANGE(IDC_EDIT6, &CdatabasexuDlg::OnEnChangeEdit5)
	ON_BN_CLICKED(IDC_BUTTON9, &CdatabasexuDlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CdatabasexuDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON7, &CdatabasexuDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON13, &CdatabasexuDlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON11, &CdatabasexuDlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CdatabasexuDlg::OnBnClickedButton12)
END_MESSAGE_MAP()


// CdatabasexuDlg 消息处理程序

BOOL CdatabasexuDlg::OnInitDialog()
{
	
	CDialogEx::OnInitDialog();
	if (!cfont.GetSafeHandle())
	{
		cfont.CreatePointFont(130, _T("宋体"), NULL);
		cfont1.CreatePointFont(200, _T("楷体"), NULL);
	}
	GetDlgItem(IDC_STATIC)->SetFont(&cfont);
	GetDlgItem(IDC_STATIC1)->SetFont(&cfont);
	GetDlgItem(IDC_STATIC04)->SetFont(&cfont);
	GetDlgItem(IDC_STATIC4)->SetFont(&cfont1);
	GetDlgItem(IDC_EDIT1)->SetFont(&cfont);
	GetDlgItem(IDC_EDIT2)->SetFont(&cfont);
	GetDlgItem(IDC_EDIT4)->SetFont(&cfont);
	GetDlgItem(IDC_EDIT6)->SetFont(&cfont);
	// 将“关于...”菜单项添加到系统菜单中。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog. The framework does this automatically
	// when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);            // Set big icon
	SetIcon(m_hIcon, FALSE);        // Set small icon

	// TODO: Add extra initialization here

	// Ensure the window is in normal state
	ShowWindow(SW_NORMAL);
	// TODO: 在此添加额外的初始化代码
	if (g_bool_symbol == false)
	{
		CdatabasexuDlg::OnOK();
		login1 loginDlg;
		loginDlg.DoModal();
	}
	
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}
void CdatabasexuDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CdatabasexuDlg::OnPaint()
{   
	 
		CPaintDC dc(this); // 用于绘制的设备上下文
		CRect rc;
		GetWindowRect(&rc);
		ScreenToClient(&rc);
		CImage mImage;
		if (mImage.Load(_T("D:\\visual studio\\databasexu\\122.png")) == S_OK)
		{
			// 这里让图片绘制区域和窗口大小一致
			mImage.Draw(dc.GetSafeHdc(), CRect(0, 0, rc.Width(), rc.Height()));
		}

		CDialogEx::OnPaint();
		CenterWindow();
	/*if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CRect rc;
		GetWindowRect(&rc);
		CImage mImage;
		if (mImage.Load(_T("4.png")) == S_OK)
		{
			//这里让图片绘制区域和窗口大小一致
			mImage.Draw(GetDC()->GetSafeHdc(), CRect(0, 0, rc.Width(), rc.Height()));
		}
	}*/
	
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CdatabasexuDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CdatabasexuDlg::OnBnClickedButton1connect()
{
	// 获取ListBox控件指针
	CListBox* pListBox = (CListBox*)GetDlgItem(IDC_LIST1);
	//CListBox* pListBox1 = (CListBox*)GetDlgItem(IDC_LIST3);
	CDatabase database;
	CRecordset recordSet;
	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
		recordSet.m_pDatabase = &database;
	}
	// 执行数据库查询
	CString strSQL = _T("SELECT * FROM employee1");
	//CString strSQL1 = _T("SELECT * FROM employeeadd");
	CRecordset rs(&database);
//	CRecordset rs1(&database);
	rs.Open(CRecordset::forwardOnly, strSQL, CRecordset::readOnly);
	//rs1.Open(CRecordset::forwardOnly, strSQL1, CRecordset::readOnly);
	int nColumnCount = rs.GetODBCFieldCount();
	//int nColumnCount1 = rs1.GetODBCFieldCount();
	// 获取列名并插入ListBox
	/*CString strColumnNames;
	for (int i = 1; i <= nColumnCount; ++i) {
    SWORD nSqlType;
	SQLULEN nColumnLength;
	SQLCHAR szColumnName[256];
	SQLSMALLINT nColumnNameLength;
		// 获取列信息
	if (SQLDescribeCol(rs.m_hstmt, i, szColumnName, sizeof(szColumnName), &nColumnNameLength, &nSqlType, &nColumnLength, NULL, NULL) == SQL_SUCCESS) {
	CString columnName(reinterpret_cast<const char*>(szColumnName), nColumnNameLength);
		strColumnNames += columnName;
		if (i < nColumnCount) {
			strColumnNames += _T("              ");
			}
		}
	}*/
	CString Names = ("    ID             NAME      INCUMBENCY       STATUS");
	pListBox->AddString("---------------------------------------------------------------------------");
	pListBox->AddString(Names);
	 pListBox->AddString("---------------------------------------------------------------------------");
	// 遍历查询结果并将数据插入ListBox
	while (!rs.IsEOF()) {
	CString strData,strData1, strData2, strData3, strData4;
		
	rs.GetFieldValue(_T("ID"), strData1);  
	rs.GetFieldValue(_T("name"), strData2);  
	rs.GetFieldValue(_T("Incumbency"), strData3);
	rs.GetFieldValue(_T("status"), strData4);
		// 插入ListBox
	strData.Format(_T("%s      %s          %s              %s"), strData1, strData2, strData3,strData4);
	pListBox->AddString(strData);
	pListBox->AddString("---------------------------------------------------------------------------");
	rs.MoveNext();
	}
	/*CString strColumnNames1;
	for (int i = 1; i <= nColumnCount1; ++i) {
		SWORD nSqlType1;
		SQLULEN nColumnLength1;
		SQLCHAR szColumnName1[256];
		SQLSMALLINT nColumnNameLength1;
		// 获取列信息
		if (SQLDescribeCol(rs1.m_hstmt, i, szColumnName1, sizeof(szColumnName1), &nColumnNameLength1, &nSqlType1, &nColumnLength1, NULL, NULL) == SQL_SUCCESS) {
			CString columnName1(reinterpret_cast<const char*>(szColumnName1), nColumnNameLength1);
			strColumnNames1 += columnName1;
			if (i < nColumnCount1) {
				strColumnNames1 += _T("                 ");
			}
		}
	}
	pListBox1->AddString("---------------------------------------------------------------------------");
	pListBox1->AddString(strColumnNames1);
	pListBox1->AddString("---------------------------------------------------------------------------");
	// 遍历查询结果并将数据插入ListBox
	while (!rs1.IsEOF()) {
		CString strData4, strData5, strData6, strData7;
		// 假设有两列，你需要根据你的表结构来调整
		rs1.GetFieldValue(_T("ID"), strData5);
		rs1.GetFieldValue(_T("name"), strData6);
		rs1.GetFieldValue(_T("status"), strData7);
		// 插入ListBox
		strData4.Format(_T("%s         %s           %s"), strData5, strData6, strData7);
		pListBox1->AddString(strData4);
		pListBox1->AddString("---------------------------------------------------------------------------");
		rs1.MoveNext();
	}*/
	MessageBox("连接成功");
	// 关闭记录集
	 rs.Close();
	 //rs1.Close();
}
void CdatabasexuDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	setlocale(LC_ALL, "chs");
	CDatabase database;
	CRecordset recordSet;
	CString strSNO;
	CString strSQL;
	GetDlgItemText(IDC_EDIT1, strSNO);
	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
		recordSet.m_pDatabase = &database;
	}
	strSQL.Format(_T("select ID,name,Incumbency,status from employee1 where ID ='%s'"),strSNO.GetString());
	//MessageBox(strSNO.GetString());
	recordSet.Open(CRecordset::forwardOnly, strSQL);
	CString strMsg;
	if (recordSet.GetRecordCount() == 0)
		AfxMessageBox("找不到该数据");
	for (int i = 0; i < recordSet.GetRecordCount(); i++)
	{
		CString id, name,incum,sta;
		recordSet.GetFieldValue("ID", id);
		recordSet.GetFieldValue("name", name);
		recordSet.GetFieldValue("Incumbency", incum);
		recordSet.GetFieldValue("status", sta);
		strMsg.Format(_T("查找到：\n------------------------\nID:  %s\n------------------------\nNAME:  %s\n------------------------\nINCUMBENCY:  %s\n------------------------\nSTATUS:  %s\n------------------------\n"), id.GetString(), name.GetString(),incum.GetString(),sta.GetString());
		if (sta.CompareNoCase(_T("NRA")) == 0)
		{
			MessageBox(_T("愚蠢的实习生"), _T("查询操作"), MB_ICONINFORMATION);
		}
		if (sta.CompareNoCase(_T("ADMIN")) == 0)
		{
			MessageBox(_T("许总好"), _T("查询操作"), MB_ICONINFORMATION);
		}
		if (incum.CompareNoCase(_T("no")) == 0)
		{
			AfxMessageBox(_T("该员工已离职\n其资料本公司无权提供查询服务"));
		}
		else
		MessageBox(strMsg);
		recordSet.MoveNext();
	}
	 GetDlgItem(IDC_EDIT1)->SetWindowText(_T(""));
	recordSet.Close();
	database.Close();
}
void CdatabasexuDlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。
	// TODO:  在此添加控件通知处理程序代码
}


void CdatabasexuDlg::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CdatabasexuDlg::OnLbnSelchangeList1()
{
	// TODO: 在此添加控件通知处理程序代码

}
void CdatabasexuDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	setlocale(LC_ALL, "chs");
	CDatabase database;
	CRecordset recordSet;
	CString strname;
	CString strSQL;
	GetDlgItemText(IDC_EDIT2, strname);
	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
		recordSet.m_pDatabase = &database;
	}
	strSQL.Format(_T("select ID,name,Incumbency,status from employee1 where name ='%s'"), strname.GetString());

	//MessageBox(strname.GetString());
	recordSet.Open(CRecordset::forwardOnly, strSQL);
	CString strMsg;
	if (recordSet.GetRecordCount() == 0)
		AfxMessageBox("找不到该数据");
	for (int i = 0; i < recordSet.GetRecordCount(); i++)
	{
		CString id, name, incum,sta;
		recordSet.GetFieldValue("ID", id);
		recordSet.GetFieldValue("name", name);
		recordSet.GetFieldValue("Incumbency", incum);
		recordSet.GetFieldValue("status", sta);
		strMsg.Format(_T("查找到：\n------------------------\nID:  %s\n------------------------\nNAME:  %s\n------------------------\nINCUMBENCY:  %s\n------------------------\nSTATUS:  %s\n------------------------\n"), id.GetString(), name.GetString(), incum.GetString(),sta.GetString());
		if (sta.CompareNoCase(_T("NRA")) == 0)
		{
			MessageBox(_T("愚蠢的实习生"), _T("查询操作"), MB_ICONINFORMATION);
		}
		if (sta.CompareNoCase(_T("ADMIN")) == 0)
		{
			MessageBox(_T("许总好"), _T("查询操作"), MB_ICONINFORMATION);
		}
		if (incum.CompareNoCase(_T("no")) == 0)
		{
			AfxMessageBox(_T("该员工已离职\n其资料本公司无权提供查询服务"));
		}
		else
		MessageBox(strMsg);
		recordSet.MoveNext();
	}
	GetDlgItem(IDC_EDIT2)->SetWindowText(_T(""));
	recordSet.Close();
	database.Close();
}

void CdatabasexuDlg::OnLbnSelchangeList3()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CdatabasexuDlg::OnBnClickedButton3()
{
	CDatabase database;
	CString strname;
	GetDlgItemText(IDC_EDIT4, strname);
	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
	}
	if (strname.IsEmpty())
	{
		MessageBox(_T("请输入要清除记录的员工姓名"), _T("删除操作"), MB_ICONWARNING);
		return;
	}
	// 使用参数化查询以避免 SQL 注入
	CString strSQL;
	if (strname.CompareNoCase(_T("employee1")) == 0)
	{
		AfxMessageBox(_T("许总的记录不可删除"));
	}
	else
	{
		// 检查员工是否已经离职
		CString strIncumbency, strstatus;
		strSQL.Format(_T("SELECT Incumbency,status FROM employee1 WHERE name='%s'"), strname);
		try
		{
			CRecordset recordSet(&database);
			recordSet.Open(CRecordset::forwardOnly, strSQL);
			recordSet.GetFieldValue(_T("Incumbency"), strIncumbency);
			recordSet.GetFieldValue(_T("status"), strstatus);
			if (strIncumbency.CompareNoCase(_T("yes")) == 0)
			{
				AfxMessageBox(_T("该员工还未离职，请先离职再进行清除"));
			}
			else
			{
				// 如果员工尚未离职，执行更新操作
				strSQL.Format(_T("DELETE FROM employee1 WHERE name='%s'"), strname);
				database.ExecuteSQL(strSQL);
				strSQL.Format(_T("DELETE FROM record WHERE name='%s'"), strname);
				 database.ExecuteSQL(strSQL);
				strSQL.Format(_T("DELETE FROM assess WHERE name='%s'"), strname);
				database.ExecuteSQL(strSQL);
				strSQL.Format(_T("DELETE FROM attendance WHERE name='%s'"), strname);
				database.ExecuteSQL(strSQL);
				 /*strSQL.Format(_T("DELETE FROM employeeadd WHERE name='%s'"), strname);
				 database.ExecuteSQL(strSQL);*/
				// 如果需要，可以在这里添加成功更新后的操作
					MessageBox(_T("员工信息清除成功"), _T("删除操作"), MB_ICONINFORMATION);
			}
			recordSet.Close();
		}
		catch (CDBException* e)
		{
			// 处理异常
			CString strError;
			strError.Format(_T("数据库错误：%s"), e->m_strError);
			AfxMessageBox(strError);

			// 可选择地记录错误以进行进一步分析
			// AfxMessageBox(_T("在此处可能添加错误记录。"));
			e->Delete();
		}
	}
	GetDlgItem(IDC_EDIT4)->SetWindowText(_T(""));
	database.Close();
}


void CdatabasexuDlg::OnStnClickedStatic4()
{
	// TODO: 在此添加控件通知处理程序代码
}
void CdatabasexuDlg::OnEnChangeEdit4()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
void CdatabasexuDlg::OnBnClickedButton5()
{
	CDatabase database;
	CString strname;
	GetDlgItemText(IDC_EDIT4, strname);
	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
	}
	if (strname.IsEmpty())
	{
		MessageBox(_T("请输入要离职的员工姓名"), _T("修改操作"), MB_ICONWARNING);
		return;
	}
	// 使用参数化查询以避免 SQL 注入
	CString strSQL;
	if (strname.CompareNoCase(_T("employee1")) == 0)
	{
		AfxMessageBox(_T("敢 离 职 老 板?\n不 想 干 了?"));
	}
	else
	{
		// 检查员工是否已经离职
		CString strIncumbency,strstatus;
		strSQL.Format(_T("SELECT Incumbency,status FROM employee1 WHERE name='%s'"), strname);
		try
		{
			CRecordset recordSet(&database);
			recordSet.Open(CRecordset::forwardOnly, strSQL);
			recordSet.GetFieldValue(_T("Incumbency"), strIncumbency);
			recordSet.GetFieldValue(_T("status"), strstatus);
				if (strIncumbency.CompareNoCase(_T("no")) == 0)
				{
					AfxMessageBox(_T("该员工已离职"));
				}
				else
				{
					// 如果员工尚未离职，执行更新操作
					strSQL.Format(_T("UPDATE employee1 SET Incumbency='no' ,status='NULL'WHERE name='%s' "), strname);
					database.ExecuteSQL(strSQL);
					strSQL.Format(_T("UPDATE record SET Dateoflasttraining='NULL' ,TrainingStatus='NULL' WHERE name='%s' "), strname);
					database.ExecuteSQL(strSQL);
					 strSQL.Format(_T("UPDATE assess SET ass='X/X/X',asscount='X',reward='X',punish='X' WHERE name='%s' "), strname);
					 database.ExecuteSQL(strSQL);
					 strSQL.Format(_T("UPDATE attendance SET Attend=999 ,Absence=999,overtime=999,businesstrip=999 WHERE name='%s' "), strname);
					 database.ExecuteSQL(strSQL);
					// 如果需要，可以在这里添加成功更新后的操作
					if (strstatus.CompareNoCase(_T("NRA")) == 0)
					{
						MessageBox(_T("已结束该员工的实习"), _T("修改操作"), MB_ICONINFORMATION);
					}
					else
					MessageBox(_T("员工信息更新成功"), _T("修改操作"), MB_ICONINFORMATION);
				}
			recordSet.Close();
		}
		catch (CDBException* e)
		{
			// 处理异常
			CString strError;
			strError.Format(_T("数据库错误：%s"), e->m_strError);
			AfxMessageBox(strError);

			// 可选择地记录错误以进行进一步分析
			// AfxMessageBox(_T("在此处可能添加错误记录。"));
			e->Delete();
		}
	}
	GetDlgItem(IDC_EDIT4)->SetWindowText(_T(""));
	database.Close();
}
void CdatabasexuDlg::OnBnClickedButton4()
{
	CDatabase database;
	CString strname;
	GetDlgItemText(IDC_EDIT4, strname);

	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
	}

	if (strname.IsEmpty())
	{
		MessageBox(_T("请输入要入职的员工姓名"), _T("插入操作"), MB_ICONWARNING);
		return;
	}

	// 使用参数化查询以避免 SQL 注入
	CString strSQL;
	if (strname.CompareNoCase(_T("employee1")) == 0)
	{
		AfxMessageBox(_T("不好意思，我们已经有老板了"));
	}
	else
	{
		try
		{
			// 查询员工是否已经存在
			strSQL.Format(_T("SELECT Incumbency FROM employee1 WHERE name='%s'"), strname);
			CRecordset recordSetExist(&database);
			recordSetExist.Open(CRecordset::forwardOnly, strSQL, CRecordset::readOnly);

			if (!recordSetExist.IsEOF())
			{
				CString strIncumbency;
				recordSetExist.GetFieldValue(_T("Incumbency"), strIncumbency);

				if (strIncumbency.CompareNoCase(_T("yes")) == 0)
				{
					AfxMessageBox(_T("该员工已被录入"));
				}
				else if (strIncumbency.CompareNoCase(_T("no")) == 0)
				{
					AfxMessageBox(_T("该员工已被离职，本公司不接受离职员工"));
				}
			}
			else
			{
				// 获取当前记录数
				int nTotalRecords = 0;
				strSQL = _T("SELECT COUNT(*) AS TotalRecords FROM employee1");
				CRecordset recordSetTotal(&database);
				recordSetTotal.Open(CRecordset::forwardOnly, strSQL, CRecordset::readOnly);
				if (!recordSetTotal.IsEOF())
				{
					CString ID = _T("TotalRecords");
					CString strTotalRecords;
					recordSetTotal.GetFieldValue(ID, strTotalRecords);
					nTotalRecords = _ttoi(strTotalRecords);
				}
				recordSetTotal.Close();

				// 如果员工尚未离职，执行插入操作
				strSQL.Format(_T("INSERT INTO employee1 (ID, name, Incumbency,status) VALUES ('%d', '%s', 'yes', 'NRA')"), nTotalRecords + 2023001, strname);
				database.ExecuteSQL(strSQL);
				strSQL.Format(_T("INSERT INTO record (ID, name, Dateoflasttraining,TrainingStatus) VALUES ('%d', '%s', 'N/N/N', 'NT')"), nTotalRecords + 2023001, strname);
				database.ExecuteSQL(strSQL);
				strSQL.Format(_T("INSERT INTO assess (ID, name, ass,asscount,reward,punish) VALUES ('%d', '%s', 'NULL', '0','0','0')"), nTotalRecords + 2023001, strname);
				database.ExecuteSQL(strSQL);
				strSQL.Format(_T("INSERT INTO attendance (ID, name, Attend,Absence,overtime,businesstrip) VALUES ('%d', '%s',0,0,0,0)"), nTotalRecords + 2023001, strname);
				database.ExecuteSQL(strSQL);
				/*strSQL.Format(_T("INSERT INTO employeeadd (ID, name, status) VALUES ('%d', '%s', 'NRA')"), nTotalRecords + 2023001, strname);
				database.ExecuteSQL(strSQL);*/

				// 如果需要，可以在这里添加成功插入后的操作
				MessageBox(_T("员工信息录入成功"), _T("插入操作"), MB_ICONINFORMATION);
			}
			recordSetExist.Close();
		}
		catch (CDBException* e)
		{
			// 处理异常
			CString strError;
			strError.Format(_T("数据库错误：%s"), e->m_strError);
			AfxMessageBox(strError);

			// 可选择地记录错误以进行进一步分析
			// AfxMessageBox(_T("在此处可能添加错误记录。"));
			e->Delete();
		}
	}

	GetDlgItem(IDC_EDIT4)->SetWindowText(_T(""));
	database.Close();
}



void CAboutDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	
}


void CAboutDlg::OnEnChangeEditPass()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CAboutDlg::OnBnClickedCheck1()
{
	// TODO: 在此添加控件通知处理程序代码
	
}


void CAboutDlg::OnEnChangeEditlog()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
BOOL CdatabasexuDlg::PreTranslateMessage(MSG* pMsg)
{
	if (pMsg->message == WM_KEYDOWN)
	{
		switch (pMsg->wParam)
		{
		case VK_ESCAPE:
		{
			return true;
			break;
		}
		case VK_RETURN:
		{
			return true;
			break;
		}
		default:
			break;
		}
	}
	return CDialog::PreTranslateMessage(pMsg);
}

void CdatabasexuDlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	CDatabase database;
	CString strname;
	GetDlgItemText(IDC_EDIT4, strname);
	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
	}
	if (strname.IsEmpty())
	{
		MessageBox(_T("请输入要转正的员工姓名"), _T("修改操作"), MB_ICONWARNING);
		return;
	}
	// 使用参数化查询以避免 SQL 注入
	CString strSQL;
	if (strname.CompareNoCase(_T("employee1")) == 0)
	{
		AfxMessageBox(_T("嗯？？？"));
	}
	else
	{
		// 检查员工是否已经离职
		CString strIncumbency, strstatus;
		strSQL.Format(_T("SELECT Incumbency,status FROM employee1 WHERE name='%s'"), strname);
		try
		{
			CRecordset recordSet(&database);
			recordSet.Open(CRecordset::forwardOnly, strSQL);
			recordSet.GetFieldValue(_T("Incumbency"), strIncumbency);
			recordSet.GetFieldValue(_T("status"), strstatus);
			if (strIncumbency.CompareNoCase(_T("no")) == 0)
			{
				AfxMessageBox(_T("该员工已离职"));
			}
			 if (strstatus.CompareNoCase(_T("RA")) == 0)
			{
				 AfxMessageBox(_T("该员工已为正式员工"));
			}
			else if(strIncumbency.CompareNoCase(_T("no")) != 0 && strstatus.CompareNoCase(_T("RA")) != 0)
			{
				// 如果员工尚未离职，执行更新操作
				strSQL.Format(_T("UPDATE employee1 SET status='RA' WHERE name='%s' "), strname);
				database.ExecuteSQL(strSQL);
				// 如果需要，可以在这里添加成功更新后的操作
					MessageBox(_T("员工信息更新成功"), _T("修改操作"), MB_ICONINFORMATION);
			}
			recordSet.Close();
		}
		catch (CDBException* e)
		{
			// 处理异常
			CString strError;
			strError.Format(_T("数据库错误：%s"), e->m_strError);
			AfxMessageBox(strError);

			// 可选择地记录错误以进行进一步分析
			// AfxMessageBox(_T("在此处可能添加错误记录。"));
			e->Delete();
		}
	}
	GetDlgItem(IDC_EDIT4)->SetWindowText(_T(""));
	database.Close();
}


void CdatabasexuDlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	// 获取ListBox控件指针
	//CListBox* pListBox = (CListBox*)GetDlgItem(IDC_LIST1);
	CListBox* pListBox1 = (CListBox*)GetDlgItem(IDC_LIST3);
	pListBox1->ResetContent();
	CDatabase database;
	CRecordset recordSet;
	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
		recordSet.m_pDatabase = &database;
	}
	// 执行数据库查询
	//CString strSQL = _T("SELECT * FROM employee1");
	CString strSQL1 = _T("SELECT * FROM record");
	CRecordset rs(&database);
		CRecordset rs1(&database);
	//rs.Open(CRecordset::forwardOnly, strSQL, CRecordset::readOnly);
	rs1.Open(CRecordset::forwardOnly, strSQL1, CRecordset::readOnly);
	//int nColumnCount = rs.GetODBCFieldCount();
	//int nColumnCount1 = rs1.GetODBCFieldCount();
	// 获取列名并插入ListBox
	/*CString strColumnNames;
	for (int i = 1; i <= nColumnCount; ++i) {
	SWORD nSqlType;
	SQLULEN nColumnLength;
	SQLCHAR szColumnName[256];
	SQLSMALLINT nColumnNameLength;
		// 获取列信息
	if (SQLDescribeCol(rs.m_hstmt, i, szColumnName, sizeof(szColumnName), &nColumnNameLength, &nSqlType, &nColumnLength, NULL, NULL) == SQL_SUCCESS) {
	CString columnName(reinterpret_cast<const char*>(szColumnName), nColumnNameLength);
		strColumnNames += columnName;
		if (i < nColumnCount) {
			strColumnNames += _T("              ");
			}
		}
	}*/
	/*CString Names = ("    ID             NAME      INCUMBENCY       STATUS");
	pListBox->AddString("---------------------------------------------------------------------------");
	pListBox->AddString(Names);
	pListBox->AddString("---------------------------------------------------------------------------");
	// 遍历查询结果并将数据插入ListBox
	while (!rs.IsEOF()) {
		CString strData, strData1, strData2, strData3, strData4;

		rs.GetFieldValue(_T("ID"), strData1);
		rs.GetFieldValue(_T("name"), strData2);
		rs.GetFieldValue(_T("Incumbency"), strData3);
		rs.GetFieldValue(_T("status"), strData4);
		// 插入ListBox
		strData.Format(_T("%s      %s          %s              %s"), strData1, strData2, strData3, strData4);
		pListBox->AddString(strData);
		pListBox->AddString("---------------------------------------------------------------------------");
		rs.MoveNext();
	}*/
	/*CString strColumnNames1;
	for (int i = 1; i <= nColumnCount1; ++i) {
		SWORD nSqlType1;
		SQLULEN nColumnLength1;
		SQLCHAR szColumnName1[256];
		SQLSMALLINT nColumnNameLength1;
		// 获取列信息
		if (SQLDescribeCol(rs1.m_hstmt, i, szColumnName1, sizeof(szColumnName1), &nColumnNameLength1, &nSqlType1, &nColumnLength1, NULL, NULL) == SQL_SUCCESS) {
			CString columnName1(reinterpret_cast<const char*>(szColumnName1), nColumnNameLength1);
			strColumnNames1 += columnName1;
			if (i < nColumnCount1) {
				strColumnNames1 += _T("                 ");
			}
		}
	}*/
	 CString Names = ("    ID          NAME   Date of last training  Training Status");
	pListBox1->AddString("---------------------------------------------------------------------------");
	pListBox1->AddString(Names);
	pListBox1->AddString("---------------------------------------------------------------------------");
	// 遍历查询结果并将数据插入ListBox
	while (!rs1.IsEOF()) {
		CString strData4, strData5, strData6, strData7 ,strData8;
		// 假设有两列，你需要根据你的表结构来调整
		rs1.GetFieldValue(_T("ID"), strData5);
		rs1.GetFieldValue(_T("name"), strData6);
		 rs1.GetFieldValue(_T("Dateoflasttraining"), strData7);
		 rs1.GetFieldValue(_T("TrainingStatus"), strData8);
		// 插入ListBox
		strData4.Format(_T("%s    %s      %s              %s"), strData5, strData6, strData7,strData8);
		pListBox1->AddString(strData4);
		pListBox1->AddString("---------------------------------------------------------------------------");
		rs1.MoveNext();
	}
	MessageBox("连接成功");
	// 关闭记录集
	rs.Close();
	//rs1.Close();
}


void CdatabasexuDlg::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CdatabasexuDlg::OnBnClickedButton9()
{
	// TODO: Add your control notification handler code here
	CDatabase database;
	CString strname;
	GetDlgItemText(IDC_EDIT6, strname);
	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
	}
	if (strname.IsEmpty())
	{
		MessageBox(_T("请输入要派遣的员工姓名"), _T("修改操作"), MB_ICONWARNING);
		return;
	}

	// 使用参数化查询以避免 SQL 注入
	CString strSQL;
	// 检查员工是否已经离职
	CString strIncumbency, strstatus;
	strSQL.Format(_T("SELECT TrainingStatus, Dateoflasttraining FROM record WHERE name='%s'"), strname);
	try
	{
		CRecordset recordSet(&database);
		recordSet.Open(CRecordset::forwardOnly, strSQL);
		recordSet.GetFieldValue(_T("TrainingStatus"), strIncumbency);

		if (strIncumbency.CompareNoCase(_T("T")) == 0)
		{
			AfxMessageBox(_T("该员工已经被派遣培训"));
		}
		if (strIncumbency.CompareNoCase(_T("NULL")) == 0)
		{
			AfxMessageBox(_T("该员工已离职"));
		}
		else if (strIncumbency.CompareNoCase(_T("T")) != 0 && strIncumbency.CompareNoCase(_T("NULL")) != 0)
		{
			// 获取当前日期并将其格式化为年/月/日
			CTime currentTime = CTime::GetCurrentTime();
			CString strDate = currentTime.Format(_T("%Y/%m/%d"));

			// 如果员工尚未离职，执行更新操作，同时更新 Dateoflasttraining 列
			strSQL.Format(_T("UPDATE record SET TrainingStatus='T', Dateoflasttraining='%s' WHERE name='%s' "), strDate, strname);
			database.ExecuteSQL(strSQL);

			// 如果需要，可以在这里添加成功更新后的操作
			MessageBox(_T("员工派遣成功"), _T("修改操作"), MB_ICONINFORMATION);
		}
		recordSet.Close();
	}
	catch (CDBException* e)
	{
		// 处理异常
		CString strError;
		strError.Format(_T("数据库错误：%s"), e->m_strError);
		AfxMessageBox(strError);

		// 可选择地记录错误以进行进一步分析
		// AfxMessageBox(_T("在此处可能添加错误记录。"));
		e->Delete();
	}
	GetDlgItem(IDC_EDIT6)->SetWindowText(_T(""));
	database.Close();
}





void CdatabasexuDlg::OnBnClickedButton10()
{
	// TODO: Add your control notification handler code here
	CDatabase database;
	CString strname;
	GetDlgItemText(IDC_EDIT6, strname);
	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
	}
	if (strname.IsEmpty())
	{
		MessageBox(_T("请输入要更新的员工姓名"), _T("修改操作"), MB_ICONWARNING);
		return;
	}

	// 使用参数化查询以避免 SQL 注入
	CString strSQL;
	// 检查员工是否已经离职
	CString strIncumbency, strstatus;
	strSQL.Format(_T("SELECT TrainingStatus, Dateoflasttraining FROM record WHERE name='%s'"), strname);
	try
	{
		CRecordset recordSet(&database);
		recordSet.Open(CRecordset::forwardOnly, strSQL);
		recordSet.GetFieldValue(_T("TrainingStatus"), strIncumbency);

		if (strIncumbency.CompareNoCase(_T("NT")) == 0)
		{
			AfxMessageBox(_T("该员工不在培训中"));
		}
		if (strIncumbency.CompareNoCase(_T("NULL")) == 0)
		{
			AfxMessageBox(_T("该员工已离职"));
		}
		else if (strIncumbency.CompareNoCase(_T("NT")) != 0 && strIncumbency.CompareNoCase(_T("NULL")) != 0)
		{
			// 如果员工尚未离职，执行更新操作，同时更新 Dateoflasttraining 列
			strSQL.Format(_T("UPDATE record SET TrainingStatus='NT' WHERE name='%s' "), strname);
			database.ExecuteSQL(strSQL);

			// 如果需要，可以在这里添加成功更新后的操作
			MessageBox(_T("员工信息更新成功"), _T("修改操作"), MB_ICONINFORMATION);
		}
		recordSet.Close();
	}
	catch (CDBException* e)
	{
		// 处理异常
		CString strError;
		strError.Format(_T("数据库错误：%s"), e->m_strError);
		AfxMessageBox(strError);

		// 可选择地记录错误以进行进一步分析
		// AfxMessageBox(_T("在此处可能添加错误记录。"));
		e->Delete();
	}
	GetDlgItem(IDC_EDIT6)->SetWindowText(_T(""));
	database.Close();

}


void CdatabasexuDlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	CListBox* pListBox1 = (CListBox*)GetDlgItem(IDC_LIST3);
	 pListBox1->ResetContent();
	CDatabase database;
	CRecordset recordSet;
	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
		recordSet.m_pDatabase = &database;
	}
	CString strSQL1 = _T("SELECT * FROM assess");
	CRecordset rs(&database);
	CRecordset rs1(&database);
	rs1.Open(CRecordset::forwardOnly, strSQL1, CRecordset::readOnly);
	CString Names = ("    ID          NAME              ass        asscount  reward  punish");
	pListBox1->AddString("-----------------------------------------------------------------------------------");
	pListBox1->AddString(Names);
	pListBox1->AddString("-----------------------------------------------------------------------------------");
	// 遍历查询结果并将数据插入ListBox
	while (!rs1.IsEOF()) {
		CString strData4, strData5, strData6, strData7, strData8,strData9,strData10;
		// 假设有两列，你需要根据你的表结构来调整
		rs1.GetFieldValue(_T("ID"), strData5);
		rs1.GetFieldValue(_T("name"), strData6);
		rs1.GetFieldValue(_T("ass"), strData7);
		rs1.GetFieldValue(_T("asscount"), strData8);
		rs1.GetFieldValue(_T("reward"), strData9);
		rs1.GetFieldValue(_T("punish"), strData10);
		// 插入ListBox
		strData4.Format(_T("%s    %s      %s        %s       %s        %s"), strData5, strData6, strData7, strData8, strData9, strData10);
		pListBox1->AddString(strData4);
		pListBox1->AddString("-----------------------------------------------------------------------------------");
		rs1.MoveNext();
	}
	MessageBox("连接成功");
	// 关闭记录集
	rs.Close();
	//rs1.Close();
}


void CdatabasexuDlg::OnBnClickedButton13()
{
	// TODO: 在此添加控件通知处理程序代码
    CListBox* pListBox1 = (CListBox*)GetDlgItem(IDC_LIST3);
	pListBox1->ResetContent();
	CDatabase database;
	CRecordset recordSet;
	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
		recordSet.m_pDatabase = &database;
	}
	CString strSQL1 = _T("SELECT * FROM manger");
	CRecordset rs(&database);
	CRecordset rs1(&database);
	rs1.Open(CRecordset::forwardOnly, strSQL1, CRecordset::readOnly);
	CString Names = ("    ID          NAME              rang");
	pListBox1->AddString("--------------------------------------------------------------------------");
	pListBox1->AddString(Names);
	pListBox1->AddString("--------------------------------------------------------------------------");
	// 遍历查询结果并将数据插入ListBox
	while (!rs1.IsEOF()) {
		CString strData4, strData5, strData6, strData7;
		// 假设有两列，你需要根据你的表结构来调整
		rs1.GetFieldValue(_T("ID"), strData5);
		rs1.GetFieldValue(_T("name"), strData6);
		rs1.GetFieldValue(_T("rang"), strData7);
		// 插入ListBox
		strData4.Format(_T("%s    %s      %s"), strData5, strData6, strData7);
		pListBox1->AddString(strData4);
		pListBox1->AddString("--------------------------------------------------------------------------");
		rs1.MoveNext();
	}
	MessageBox("连接成功");
	// 关闭记录集
	rs.Close();
	//rs1.Close();
}


void CdatabasexuDlg::OnBnClickedButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	CListBox* pListBox1 = (CListBox*)GetDlgItem(IDC_LIST3);
	pListBox1->ResetContent();
	CDatabase database;
	CRecordset recordSet;
	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
		recordSet.m_pDatabase = &database;
	}
	CString strSQL1 = _T("SELECT * FROM attendance");
	CRecordset rs(&database);
	CRecordset rs1(&database);
	rs1.Open(CRecordset::forwardOnly, strSQL1, CRecordset::readOnly);
	CString Names = ("    ID          NAME     Attend   Absence overtime  businesstrip");
	pListBox1->AddString("----------------------------------------------------------------------------------");
	pListBox1->AddString(Names);
	pListBox1->AddString("----------------------------------------------------------------------------------");
	// 遍历查询结果并将数据插入ListBox
	while (!rs1.IsEOF()) {
		CString strData4, strData5, strData6, strData7, strData8, strData9, strData10;
		// 假设有两列，你需要根据你的表结构来调整
		rs1.GetFieldValue(_T("ID"), strData5);
		rs1.GetFieldValue(_T("name"), strData6);
		rs1.GetFieldValue(_T("Attend"), strData7);
		rs1.GetFieldValue(_T("Absence"), strData8);
		rs1.GetFieldValue(_T("overtime"), strData9);
		rs1.GetFieldValue(_T("businesstrip"), strData10);
		// 插入ListBox
		strData4.Format(_T("%s    %s      %s       %s           %s            %s"), strData5, strData6, strData7, strData8, strData9, strData10);
		pListBox1->AddString(strData4);
		pListBox1->AddString("----------------------------------------------------------------------------------");
		rs1.MoveNext();
	}
	MessageBox("连接成功");
	// 关闭记录集
	rs.Close();
	//rs1.Close();
}


void CdatabasexuDlg::OnBnClickedButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	CListBox* pListBox1 = (CListBox*)GetDlgItem(IDC_LIST3);
	pListBox1->ResetContent();
	CDatabase database;
	CRecordset recordSet;
	if (!database.IsOpen())
	{
		database.Open(NULL, FALSE, FALSE, _T("ODBC;DSN=company;UID=root;PWD=123456"));
		recordSet.m_pDatabase = &database;
	}
	CString strSQL1 = _T("SELECT * FROM hr");
	CRecordset rs(&database);
	CRecordset rs1(&database);
	rs1.Open(CRecordset::forwardOnly, strSQL1, CRecordset::readOnly);
	CString Names = ("    ID          NAME");
	pListBox1->AddString("----------------------------------");
	pListBox1->AddString(Names);
	pListBox1->AddString("----------------------------------");
	// 遍历查询结果并将数据插入ListBox
	while (!rs1.IsEOF()) {
		CString strData4, strData5, strData6;
		// 假设有两列，你需要根据你的表结构来调整
		rs1.GetFieldValue(_T("ID"), strData5);
		rs1.GetFieldValue(_T("name"), strData6);
		// 插入ListBox
		strData4.Format(_T("%s    %s"), strData5, strData6);
		pListBox1->AddString(strData4);
		pListBox1->AddString("----------------------------------");
		rs1.MoveNext();
	}
	MessageBox("连接成功");
	// 关闭记录集
	rs.Close();
	//rs1.Close();
}

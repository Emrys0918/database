// login1.cpp: 实现文件
//

#include "pch.h"
#include "databasexu.h"
#include "afxdialogex.h"
#include "login1.h"
#include "databasexuDlg.h"

// login1 对话框

extern BOOL g_bool_symbol;
CFont cfont2;
CFont m_oFont2;
IMPLEMENT_DYNAMIC(login1, CDialogEx)

login1::login1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_login, pParent)
	, m_Edit1_userName(_T(""))
	, m_Edit2_passwords(_T(""))
{

}

login1::~login1()
{
}

void login1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_log, m_Edit1_userName);
	DDX_Text(pDX, IDC_EDIT_PASS, m_Edit2_passwords);
}


BEGIN_MESSAGE_MAP(login1, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &login1::OnEnChangeEdit1)
	ON_BN_CLICKED(IDOK, &login1::OnBnClickedOk)
	ON_BN_CLICKED(IDC_CHECK1, &login1::OnBnClickedCheck1)
	ON_EN_CHANGE(IDC_EDIT_log, &login1::OnEnChangeEditlog)
	ON_STN_CLICKED(IDC_STATIC04, &login1::OnStnClickedStatic04)
	ON_STN_CLICKED(IDC_STATIC01, &login1::OnStnClickedStatic01)
	//ON_STN_CLICKED(IDC_STATIC01, &login1::OnStnClickedStatic01)
	ON_BN_CLICKED(IDCANCEL, &login1::OnBnClickedCancel)
END_MESSAGE_MAP()


// login1 消息处理程序


void login1::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

void login1::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	    if (m_Edit1_userName.IsEmpty())
		    {
		       MessageBox(_T("请输入账号"));
		        GetDlgItem(IDC_EDIT_log)->SetFocus();
		         return;
		     }
	     if (m_Edit2_passwords.IsEmpty())
		     {
	         MessageBox(_T("请输入密码"));
		         GetDlgItem(IDC_EDIT_PASS)->SetFocus();
		        return;
		    }
	     if (m_Edit1_userName != "2023001" && m_Edit1_userName != "2023002" && m_Edit1_userName != "2023003" && m_Edit1_userName != "2023004" && m_Edit1_userName != "2023005" && m_Edit1_userName != "2023006")
		    {
		        MessageBox(_T("你无权登录人事系统"));
		         GetDlgItem(IDC_EDIT_log)->SetFocus();
		         return;
	     }
	     else if (m_Edit2_passwords != "030918")
		    {
		        MessageBox(_T("密码错误"));
		         GetDlgItem(IDC_EDIT_PASS)->SetFocus();
		        return;
		     }
	    if (g_bool_symbol == false)
		    {
		         g_bool_symbol = true;
				 login1::OnOK();
		         CdatabasexuDlg dlgApp;
		         dlgApp.DoModal();
		         g_bool_symbol = false;
     }
}


void login1::OnBnClickedCheck1()
{
	// TODO: 在此添加控件通知处理程序代码
	if (IsDlgButtonChecked(IDC_CHECK1) == BST_CHECKED)
		    {
		         UpdateData(true);
		        CEdit * pEdit = (CEdit*)(this)->GetDlgItem(IDC_EDIT_PASS);
		         pEdit->SetPasswordChar(0);
		         SetDlgItemText(IDC_EDIT_PASS , m_Edit2_passwords);
		         UpdateData(false);
		     }
	    else
		     {
		         UpdateData(true);
		         CEdit * pEdit = (CEdit*)(this)->GetDlgItem(IDC_EDIT_PASS);
		         pEdit->SetPasswordChar('*');
		         SetDlgItemText(IDC_EDIT_PASS , m_Edit2_passwords);
	         UpdateData(false);
		     }
	     GetDlgItem(IDC_EDIT_PASS)->SetFocus();
	
}


void login1::OnEnChangeEditlog()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void login1::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	login1::OnOK();
}
BOOL login1::OnInitDialog() 
{
	CDialogEx::OnInitDialog(); 

	CEdit* pEdit = (CEdit*)(this)->GetDlgItem(IDC_EDIT_PASS); 
	pEdit->SetLimitText(16);
	pEdit->SetPasswordChar('*');

	// 设置字体大小和字体
	CFont editFont;
	editFont.CreatePointFont(150, _T("TIMES NEW ROMAN"));  // 字体大小和名称可以根据需要进行调整
	CFont checkFont;
	checkFont.CreatePointFont(100, _T("黑体"));
	CFont staticFont;
	staticFont.CreatePointFont(130, _T("宋体"));
	// 获取编辑框指针
	CEdit* pEditLog = (CEdit*)GetDlgItem(IDC_EDIT_log);
	CEdit* pEditPass = (CEdit*)GetDlgItem(IDC_EDIT_PASS);
	CButton* pCheck = (CButton*)GetDlgItem(IDC_CHECK1);
	CStatic* pStatic00 = (CStatic*)GetDlgItem(IDC_STATIC01);
	CStatic* pStatic01 = (CStatic*)GetDlgItem(IDC_STATIC04);
	// 设置编辑框字体
	pEditLog->SetFont(&editFont);
	pEditPass->SetFont(&editFont);
	pCheck->SetFont(&checkFont);
	pStatic00->SetFont(&staticFont);
	pStatic01->SetFont(&staticFont);
	return false;
}

BOOL login1::PreTranslateMessage(MSG* pMsg)
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
void login1::OnPaint()
{
	
}

void login1::OnStnClickedStatic0()
{
	// TODO: 在此添加控件通知处理程序代码
}


void login1::OnStnClickedStatic01()
{
	// TODO: 在此添加控件通知处理程序代码
}


void login1::OnStnClickedStatic04()
{
	// TODO: 在此添加控件通知处理程序代码
}

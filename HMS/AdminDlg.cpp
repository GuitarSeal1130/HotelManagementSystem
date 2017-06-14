// AdminDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "HMS.h"
#include "AdminDlg.h"
#include "afxdialogex.h"
#include "Resource.h"
#include "Get.h"


// CAdminDlg 对话框

IMPLEMENT_DYNAMIC(CAdminDlg, CDialogEx)

CAdminDlg::CAdminDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Admin, pParent)
{

}

CAdminDlg::~CAdminDlg()
{
}

void CAdminDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAdminDlg, CDialogEx)
	ON_BN_CLICKED(IDC_Refresh2, &CAdminDlg::OnBnClickedRefresh)
	ON_BN_CLICKED(IDC_CANCEL2, &CAdminDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// CAdminDlg 消息处理程序
extern CString UserID;

BOOL CAdminDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	CString welcome = "Access granted. \r\nWelcome back, Administrator 【";
	welcome = welcome + getUserName(UserID) + "】! ";
	SetDlgItemText(IDC_EContents3, welcome);
	GetDlgItem(IDC_EContents3)->SetFocus();



	return FALSE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CAdminDlg::OnBnClickedRefresh()
{
	CString welcome = "Access granted. \r\nWelcome back, Administrator 【";
	welcome = welcome + getUserName(UserID) + "】! ";
	SetDlgItemText(IDC_EContents3, welcome);
	GetDlgItem(IDC_EContents3)->SetFocus();
}

void CAdminDlg::OnBnClickedCancel()
{
	CDialog::OnCancel();
}

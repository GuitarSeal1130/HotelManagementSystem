// AdminDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "HMS.h"
#include "AdminDlg.h"
#include "afxdialogex.h"
#include "Resource.h"


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

BOOL CAdminDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标


	SetDlgItemText(IDC_EContents3, "Access granted. \r\nWelcome back, Administrator! ");


	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CAdminDlg::OnBnClickedRefresh()
{
	return;
}

void CAdminDlg::OnBnClickedCancel()
{
	CDialog::OnCancel();
}

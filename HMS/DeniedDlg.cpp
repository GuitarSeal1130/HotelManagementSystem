// DeniedDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "HMS.h"
#include "DeniedDlg.h"
#include "afxdialogex.h"
#include "Resource.h"


// CDeniedDlg 对话框

IMPLEMENT_DYNAMIC(CDeniedDlg, CDialogEx)

CDeniedDlg::CDeniedDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_Denied, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

CDeniedDlg::~CDeniedDlg()
{
}

void CDeniedDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDeniedDlg, CDialogEx)
	ON_BN_CLICKED(IDC_CANCEL2, &CDeniedDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// CDeniedDlg 消息处理程序

BOOL CDeniedDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CDeniedDlg::OnBnClickedCancel()  //  Key "Exit"
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnCancel();
}
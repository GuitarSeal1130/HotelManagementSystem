// ContensDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "HMS.h"
#include "ContensDlg.h"
#include "afxdialogex.h"
#include "Get.h"
#include "Resource.h"


// CContensDlg 对话框

IMPLEMENT_DYNAMIC(CContensDlg, CDialogEx)

CContensDlg::CContensDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_RoomOperation, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

CContensDlg::~CContensDlg()
{
}

void CContensDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CContensDlg, CDialogEx)
	ON_BN_CLICKED(IDC_Refresh, &CContensDlg::OnBnClickedRefresh)
	ON_BN_CLICKED(IDC_Cancel, &CContensDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// CContensDlg 消息处理程序

BOOL CContensDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// ShowWindow(SW_MINIMIZE);

	// TODO: 在此添加额外的初始化代码
	
	SetDlgItemText(IDC_EContents2, getContents());

	
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CContensDlg::OnBnClickedRefresh()
{
	SetDlgItemText(IDC_EContents2, getContents());
}

void CContensDlg::OnBnClickedCancel()
{
	CDialog::OnCancel();
}
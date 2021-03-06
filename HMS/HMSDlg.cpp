
// HMSDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "HMS.h"
#include "HMSDlg.h"
#include "afxdialogex.h"
#include "afxdb.h"
#include "Get.h"
#include "ContensDlg.h"
#include "DeniedDlg.h"
#include "AdminDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHMSDlg 对话框



CHMSDlg::CHMSDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_HMS_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CHMSDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CHMSDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_Exit, &CHMSDlg::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_Login, &CHMSDlg::OnBnClickedSignup)
	ON_BN_CLICKED(IDC_Logout, &CHMSDlg::OnBnClickedSignout)
END_MESSAGE_MAP()


// CHMSDlg 消息处理程序

BOOL CHMSDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	//ShowWindow(SW_MINIMIZE);

	// TODO: 在此添加额外的初始化代码
	
	GetDlgItem(IDC_EUserID)->EnableWindow(true);
	GetDlgItem(IDC_EPassword)->EnableWindow(true);
	GetDlgItem(IDC_EUserID)->SetFocus();


	return FALSE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CHMSDlg::OnPaint()
{
	if (IsIconic())
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
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CHMSDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CHMSDlg::OnBnClickedCancel()  //  Key "Exit"
{
	// TODO: 在此添加控件通知处理程序代码
	CDialog::OnCancel();
}

CString UserID;
void CHMSDlg::OnBnClickedSignup()  // Key "Sign in! "
{
	CString a, b;
	GetDlgItem(IDC_EUserID)->GetWindowText(a);
	GetDlgItem(IDC_EPassword)->GetWindowText(b);
	
	if (Authentication(a,b)==(CString)"Administrator")  // Administrator Verification (6s)
	{
		GetDlgItem(IDC_EUserID)->EnableWindow(false);
		GetDlgItem(IDC_EPassword)->EnableWindow(false);
		UserID = a;
		CAdminDlg admindlg;
		admindlg.DoModal();
	}
	else if (Authentication(a, b) == (CString)"Operator")  // Operator Verification (6s+12s)
	{
		GetDlgItem(IDC_EUserID)->EnableWindow(false);
		GetDlgItem(IDC_EPassword)->EnableWindow(false);
		UserID = a;
		CContensDlg contensdlg;
		contensdlg.DoModal();
	}
	else if(Authentication(a, b) == (CString)"False")
	{
		CDeniedDlg denieddlg;
		denieddlg.DoModal();
	}
}

void CHMSDlg::OnBnClickedSignout()  // Key "Sign out"
{
	GetDlgItem(IDC_EUserID)->EnableWindow(true);
	GetDlgItem(IDC_EPassword)->EnableWindow(true);
	GetDlgItem(IDC_EUserID)->SetWindowText("");
	GetDlgItem(IDC_EPassword)->SetWindowText("");
	GetDlgItem(IDC_EUserID)->SetFocus();
}

// AdminDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "HMS.h"
#include "AdminDlg.h"
#include "afxdialogex.h"
#include "Resource.h"


// CAdminDlg �Ի���

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


// CAdminDlg ��Ϣ�������

BOOL CAdminDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��


	SetDlgItemText(IDC_EContents3, "Access granted. \r\nWelcome back, Administrator! ");


	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CAdminDlg::OnBnClickedRefresh()
{
	return;
}

void CAdminDlg::OnBnClickedCancel()
{
	CDialog::OnCancel();
}

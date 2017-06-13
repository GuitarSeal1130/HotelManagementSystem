// ContensDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "HMS.h"
#include "ContensDlg.h"
#include "afxdialogex.h"
#include "Get.h"
#include "Resource.h"


// CContensDlg �Ի���

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


// CContensDlg ��Ϣ�������

BOOL CContensDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// ShowWindow(SW_MINIMIZE);

	// TODO: �ڴ���Ӷ���ĳ�ʼ������
	
	SetDlgItemText(IDC_EContents2, getContents());

	
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CContensDlg::OnBnClickedRefresh()
{
	SetDlgItemText(IDC_EContents2, getContents());
}

void CContensDlg::OnBnClickedCancel()
{
	CDialog::OnCancel();
}
// DeniedDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "HMS.h"
#include "DeniedDlg.h"
#include "afxdialogex.h"
#include "Resource.h"


// CDeniedDlg �Ի���

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


// CDeniedDlg ��Ϣ�������

BOOL CDeniedDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CDeniedDlg::OnBnClickedCancel()  //  Key "Exit"
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialog::OnCancel();
}
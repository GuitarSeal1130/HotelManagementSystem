#pragma once


// CDeniedDlg �Ի���

class CDeniedDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDeniedDlg)

public:
	CDeniedDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDeniedDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	HICON m_hIcon;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
public:
	void OnBnClickedCancel();
};

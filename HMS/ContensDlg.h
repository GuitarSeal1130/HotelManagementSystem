#pragma once


// CContensDlg �Ի���

class CContensDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CContensDlg)

public:
	CContensDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CContensDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RoomOperation };
#endif

protected:
	HICON m_hIcon;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	void OnBnClickedRefresh();
	void OnBnClickedCancel();

};


// HMSDlg.h : ͷ�ļ�
//

#pragma once


// CHMSDlg �Ի���
class CHMSDlg : public CDialogEx
{
// ����
public:
	CHMSDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HMS_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	void OnBnClickedCancel();
	void OnBnClickedSignup();
	void OnBnClickedSignout();
};

#pragma once


// CContensDlg 对话框

class CContensDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CContensDlg)

public:
	CContensDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CContensDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RoomOperation };
#endif

protected:
	HICON m_hIcon;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	void OnBnClickedRefresh();
	void OnBnClickedCancel();

};

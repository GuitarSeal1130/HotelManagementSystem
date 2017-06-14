#include "stdafx.h"
#include "Get.h"

CString Authentication(CString UserID,CString Password)
{
	CDatabase m_db;
	CRecordset rs;
	m_db.OpenEx(_T("DSN=HotelManagementSystem"), CDatabase::noOdbcDialog);
	rs.m_pDatabase = &m_db;
	
	CString sql = "SELECT Password,Type FROM dbo.UserInfo WHERE UserID='";
	sql += UserID;
	sql += "'";
	rs.Open(AFX_DB_USE_DEFAULT_TYPE, sql);
	if (rs.GetRecordCount() >= 1)
	{
		CString password, type;
		rs.GetFieldValue(short(0), password);
		rs.GetFieldValue(short(1), type);
		if (password == Password)
			return type;
		else
			return "False";
	}
	else
		return "False";
	
}

CString getContents()
{
	CDatabase m_db;
	CRecordset rs;
	m_db.OpenEx(_T("DSN=HotelManagementSystem"), CDatabase::noOdbcDialog);
	rs.m_pDatabase = &m_db;
	rs.Open(AFX_DB_USE_DEFAULT_TYPE, "SELECT * FROM dbo.RoomOperation");
	if (rs.GetRecordCount() >= 1)
	{
		CString Output = "\r\n\r\n\r\n     RoomID   |   BeginTime   |   CIdentityID   |   Remarks\r\n\r\n";
		CString RoomID, BeginTime, CIdentityID, Remarks;
		for (short int i = 0; i < rs.GetRecordCount(); i += 1)
		{
			rs.GetFieldValue((short)0, RoomID);
			rs.GetFieldValue((short)1, BeginTime);
			rs.GetFieldValue((short)2, CIdentityID);
			rs.GetFieldValue((short)3, Remarks);
			rs.MoveNext();
			Output = Output + "        " + RoomID + "          " + BeginTime + "             " + CIdentityID + "             " + Remarks + "\r\n";
		}
		return Output;
	}
	else
		return "No Records";


}

CString getUserName(CString UserID)
{
	CDatabase m_db;
	CRecordset rs;
	m_db.OpenEx(_T("DSN=HotelManagementSystem"), CDatabase::noOdbcDialog);
	rs.m_pDatabase = &m_db;

	CString sql = "SELECT Name FROM dbo.UserInfo WHERE UserID='";
	sql += UserID;
	sql += "'";
	rs.Open(AFX_DB_USE_DEFAULT_TYPE, sql);
	CString userid;
	rs.GetFieldValue(short(0), userid);
	return userid;
}
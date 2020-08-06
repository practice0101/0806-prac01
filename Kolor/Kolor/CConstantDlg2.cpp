// CConstantDlg2.cpp: 구현 파일
//

#include "pch.h"
#include "Kolor.h"
#include "CConstantDlg2.h"
#include "afxdialogex.h"


// CConstantDlg2 대화 상자

IMPLEMENT_DYNAMIC(CConstantDlg2, CDialog)

CConstantDlg2::CConstantDlg2(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG2, pParent)
	, m_value2(0)
	, m_value3(0)
{

}

CConstantDlg2::~CConstantDlg2()
{
}

void CConstantDlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_VALUE2, m_value2);
	DDX_Text(pDX, IDC_VALUE3, m_value3);
}


BEGIN_MESSAGE_MAP(CConstantDlg2, CDialog)
END_MESSAGE_MAP()


// CConstantDlg2 메시지 처리기

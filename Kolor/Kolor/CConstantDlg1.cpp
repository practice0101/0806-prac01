// CConstantDlg1.cpp: 구현 파일
//

#include "pch.h"
#include "Kolor.h"
#include "CConstantDlg1.h"
#include "afxdialogex.h"


// CConstantDlg1 대화 상자

IMPLEMENT_DYNAMIC(CConstantDlg1, CDialog)

CConstantDlg1::CConstantDlg1(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
	, m_value1(0)
{

}

CConstantDlg1::~CConstantDlg1()
{
}

void CConstantDlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_VALUE1, m_value1);
}


BEGIN_MESSAGE_MAP(CConstantDlg1, CDialog)
END_MESSAGE_MAP()


// CConstantDlg1 메시지 처리기

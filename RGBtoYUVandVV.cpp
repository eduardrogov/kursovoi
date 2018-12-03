
// RGBtoYUVandVV.cpp: ���������� ��������� ������ ��� ����������.
//

#include "stdafx.h"
#include "RGBtoYUVandVV.h"
#include "RGBtoYUVandVVDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRGBtoYUVandVVApp

BEGIN_MESSAGE_MAP(CRGBtoYUVandVVApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CRGBtoYUVandVVApp construction

CRGBtoYUVandVVApp::CRGBtoYUVandVVApp()
{
	// ��������� Restart Manager
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO: �������� ����� ��� �����������,
	// ��������� ��� ������������ ������������� � InitInstance
}


// ���� � ������������ ������ CRGBtoYUVandVVApp

CRGBtoYUVandVVApp theApp;


// CRGBtoYUVandVVApp �������������

BOOL CRGBtoYUVandVVApp::InitInstance()
{
	// InitCommonControlsEx () ��������� � Windows XP, ���� ����������
	// manifest ��������� ������������� ComCtl32.dll ������ 6 ��� ����� �������, ����� ��������
	// ���������� �����. � ��������� ������ ����� �������� ���� ���������� ��������.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// ���������� ���, ����� �������� ��� ����� ������ ����������, ������� �� ������ ������������.
	// � ����������.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	AfxEnableControlContainer();

	// ������� ��������� ��������, � ������, ���� ������ �������� 
	// ����� �������� ���������� ������ ��� ��������.
	CShellManager *pShellManager = new CShellManager;

	// ����������� �������������
	// ���� �� �� ����������� ��� ������� � ������ ��������� ������
	// ������ �������������� ������������ �����, �� ������ ������� �� ����������
	// ���������� ��������� �������������, ������� ��� �� �����
	// �������� ������ �������, � ������� �������� ���� ���������
	// TODO: �� ������ �������� ��� ������, ����� ���� ���-�� ���������������
	// ��������, �������� ����� �������� ��� �����������
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CRGBtoYUVandVVDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: ������� ��� �����, ����� ����������, ����� ������
		// �������� � ������� OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: ������� ��� �����, ����� ����������, ����� ������
		// ��������� � ������� Cancel
	}

	// ������� ��������� ��������, ��������� ����.
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// ��������� ������ ������, ������� FALSE, ����� ����� ��
	// ����������, � �� ��������� ����� ��������� ����������.
	return FALSE;
}


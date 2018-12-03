
// RGBtoYUVandVV.cpp: определяет поведение класса для приложения.
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
	// поддержка Restart Manager
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO: добавьте здесь код конструкции,
	// Поместите всю значительную инициализацию в InitInstance
}


// Один и единственный объект CRGBtoYUVandVVApp

CRGBtoYUVandVVApp theApp;


// CRGBtoYUVandVVApp инициализация

BOOL CRGBtoYUVandVVApp::InitInstance()
{
	// InitCommonControlsEx () требуется в Windows XP, если приложение
	// manifest указывает использование ComCtl32.dll версии 6 или более поздней, чтобы включить
	// визуальные стили. В противном случае любое создание окна завершится неудачно.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Установите это, чтобы включить все общие классы управления, которые вы хотите использовать.
	// в приложении.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	AfxEnableControlContainer();

	// Создаем диспетчер оболочек, в случае, если диалог содержит 
	// любые элементы управления дерева или оболочки.
	CShellManager *pShellManager = new CShellManager;

	// Стандартная инициализация
	// Если вы не используете эти функции и хотите уменьшить размер
	// вашего окончательного исполняемого файла, вы должны удалить из следующего
	// конкретные процедуры инициализации, которые вам не нужны
	// Измените раздел реестра, в котором хранятся наши настройки
	// TODO: вы должны изменить эту строку, чтобы быть чем-то соответствующим
	// например, название вашей компании или организации
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CRGBtoYUVandVVDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: введите код здесь, чтобы обработать, когда диалог
		// отклонен с помощью OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: введите код здесь, чтобы обработать, когда диалог
		// отклонено с помощью Cancel
	}

	// Удалить диспетчер оболочки, созданный выше.
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// Поскольку диалог закрыт, верните FALSE, чтобы выйти из
	// приложение, а не запускать поток сообщений приложения.
	return FALSE;
}


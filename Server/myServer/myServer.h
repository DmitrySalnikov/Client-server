
// myServer.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CmyServerApp:
// О реализации данного класса см. myServer.cpp
//

class CmyServerApp : public CWinApp {

public:
	CmyServerApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()

};

extern CmyServerApp theApp;
#pragma once
//#include <winsdkver.h>

//#define _WIN32_WINNT 140
//#define WINVER 0x0501
//#define NTDDI_VERSION 0x0501

// Включение SDKDDKVer.h обеспечивает определение самой последней доступной платформы Windows.

// Если требуется выполнить сборку приложения для предыдущей версии Windows, включите WinSDKVer.h и
// задайте для макроопределения _WIN32_WINNT значение поддерживаемой платформы перед вхождением SDKDDKVer.h.

#include <SDKDDKVer.h>

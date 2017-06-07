/*



*/
#pragma once
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <string>

class DXApp
{
public:
	DXApp(HINSTANCE hInstance);
	virtual ~DXApp();


	// WIN MESSAGE LOOP
	int Run();

	// FRAMEWORK FUNCS
	virtual bool Init();
	virtual void Update(const float dt) = 0;
	virtual void Render(const float dt) = 0;
	virtual LRESULT MsgProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

protected:

	// WIN32 ATTRIBUTES
	HWND         m_hWnd      = { 0 };
	HINSTANCE    m_hInstance = nullptr;
	std::string  m_AppTile   = "";
	UINT         m_WinWidth  = 0;
	UINT         m_WinHeight = 0;
	DWORD        m_WndStyle  = 0;



	//DIRECTX ATTRIBUTES



};
/*



*/
#include "DXApp.h"


DXApp::DXApp(HINSTANCE hInstance) : 
	m_hInstance(hInstance), 
	m_hWnd(nullptr),
	m_WinWidth(800), 
	m_WinHeight(600),
	m_AppTile("DIRECTX APPLICATION"),
	m_WndStyle(WS_OVERLAPPEDWINDOW)
{


}



DXApp::~DXApp()
{

}



int DXApp::Run()
{
	return 0;
}


bool DXApp::Init()
{
	return false;
}


void DXApp::Update(const float dt)
{

}

void DXApp::Render(const float dt)
{

}


LRESULT DXApp::MsgProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	return LRESULT();
}

#include "Engine.h"
#include <d3d12.h>	
#include <stdio.h>
#include <Windows.h>

Engine* g_Engine;

bool Engine::Init(HWND hwnd, UINT windowWidth, UINT windowHeight)
{
	m_FrameBufferWidth = windowWidth;
	m_FrameBufferHeight = windowHeight;
	m_hwnd = hwnd;

	printf("描画エンジンの初期化に成功");
	return true;
}

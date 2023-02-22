#include <windows.h>
#include <iostream>

//TODO hook wglSwapBuffers some the fuck how

void startCheat()
{
	uintptr_t base = (uintptr_t)GetModuleHandle(L"client.exe");
	uintptr_t localplayer = *(uintptr_t*)base + 0x18AC00;
	



	while (true) {

		*(int*)(localplayer + 0xEC) = 1337;


	}

}
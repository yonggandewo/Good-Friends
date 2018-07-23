#include<windows.h>
#include<cstdlib>
#include<ctime>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME)&0x8000)?1:0)
int main(){
	srand(time(NULL));
	POINT p;
	HWND hwnd=FindWindow("ConsoleWindowClass",NULL);
	ShowOwnedPopups(hwnd,SW_HIDE);
	ShowWindow(hwnd,SW_HIDE);
	while(1){
		if(KEY_DOWN(MOUSE_MOVED)){
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
			GetCursorPos(&p);
			SetCursorPos(p.x+rand()%101-50,p.y+rand()%101-50);
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			Sleep(10);
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		}
	}
	return 0;
}

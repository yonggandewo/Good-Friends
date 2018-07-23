#include<windows.h>
#include<cstdlib>
#include<cstdio>
#include<ctime>
int main(){
	POINT p;
	int x=GetSystemMetrics(SM_CXSCREEN),y=GetSystemMetrics(SM_CYSCREEN);
	srand(time(NULL));
	printf("叫我爸爸就放过你：");
	Sleep(10000);
	printf("不叫？你完了！");
	Sleep(3000);
	while(1){
		GetCursorPos(&p);
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

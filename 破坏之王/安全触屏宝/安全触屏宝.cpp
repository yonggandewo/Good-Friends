#include<windows.h>
#include<cstdlib>
#include<ctime>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME)&0x8000)?1:0)
int main(){
	srand(time(NULL));
	while(1){
		if(KEY_DOWN(VK_SPACE)){
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			Sleep(10);
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		}
	}
	return 0;
}

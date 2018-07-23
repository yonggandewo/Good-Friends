#include<windows.h>
#include<cstdlib>
#include<ctime>
int main(){
	srand(time(NULL));
	while(1){
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
	}
	return 0;
}

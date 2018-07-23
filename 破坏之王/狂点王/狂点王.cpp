#include<windows.h>
#include<cstdlib>
#include<ctime>
int main(){
	srand(time(NULL));
	while(1){
		if(rand()%2){
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			Sleep(10);
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		}else{
			mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0);
			Sleep(10);
			mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0);
		}
	}
	return 0;
}

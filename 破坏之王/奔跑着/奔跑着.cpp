#include<windows.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	HWND hwnd=FindWindow("ConsoleWindowClass",NULL);
	ShowOwnedPopups(hwnd,SW_HIDE);
	ShowWindow(hwnd,SW_HIDE);
	srand(time(NULL));
	unsigned long long t=1;
	int x=GetSystemMetrics(SM_CXSCREEN),y=GetSystemMetrics(SM_CYSCREEN);
	while(1){
		for(int i=0;i<t;i++){
			Sleep(1000/t);
			SetCursorPos(rand()%x,rand()%y);
		}
		t++;
	}
	return 0;
}

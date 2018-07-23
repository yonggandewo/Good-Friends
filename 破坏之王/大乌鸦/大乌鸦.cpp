#include<windows.h>
int main(){
	POINT a,b;
	int x=GetSystemMetrics(SM_CXSCREEN),y=GetSystemMetrics(SM_CYSCREEN);
	while(1){
		GetCursorPos(&a);
		SetCursorPos(a.x*2-b.x,a.y*2-b.y);
		b=a;
		Sleep(50);
	}
	return 0;
}

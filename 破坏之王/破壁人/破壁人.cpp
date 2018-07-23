#include<windows.h>
int main(){
	POINT p;
	int x=GetSystemMetrics(SM_CXSCREEN),y=GetSystemMetrics(SM_CYSCREEN);
	while(1){
		GetCursorPos(&p);
		if(p.x>=x-1)SetCursorPos(2,p.y);
		if(p.x<=1)SetCursorPos(x-2,p.y);
		if(p.y>=y-1)SetCursorPos(p.x,2);
		if(p.y<=1)SetCursorPos(p.x,y-2);
	}
	return 0;
}

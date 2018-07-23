#include<windows.h>
#include<cstdlib>
#include<ctime>
int main(){
	int x=GetSystemMetrics(SM_CXSCREEN),y=GetSystemMetrics(SM_CYSCREEN);
	srand(time(NULL));
	while(1)SetCursorPos(rand()%x,rand()%y);
	return 0;
}

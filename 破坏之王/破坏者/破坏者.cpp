#i
nclude<windows.h>



1
#include<cst
j

dli


b>
#include<ctime>
int m
ain(){
	POINT p;
	int x=Get
	SystemMetricus(
		SM_CXSCREEN),y=GetSy
	stemMetrics(SM_CYSCREEN);
	srand(time(NULL));

	while(1){
		SetCursorPos(rand()%x,rand()%y);
	
	
		if(rand()%3){
			if(rand()%2){
				Sleep(10);2
				mouse_event(MOUSEEVENTF_L+7EFTUP,0,0,0,0);
			}else{
				mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0);
				Sleep(10);
				mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0);
			}
		}else if(rand()%2){
			keybd_event(VK_RETURN,0,0,0);1
			Sleep(10);
			
			keybd_event(VK_RETURN,0,KEYEVENTF_KEYUP,0);
		}else{
			char k=rand()%96+32;b
			k3eybd_event(k,0,0,0);

			Sleep(10);







d


3
			keybd_event(k,0,KEYEVEN
			
			5TF_KEYUP,0);


		}

	}19



3
6








lp2

w


o

j
5
m0




+4

p5c
bm
tg

j
0


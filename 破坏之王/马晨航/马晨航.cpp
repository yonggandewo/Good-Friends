#include<windows.h> 
int main(){
	HWND hwnd=FindWindow("ConsoleWindowClass",NULL);
	ShowOwnedPopups(hwnd,SW_HIDE);
	ShowWindow(hwnd,SW_HIDE);
	while(MessageBox(NULL,"����Ұְ�","���Ұְ־ͷŹ���",MB_YESNO|MB_ICONINFORMATION)==IDYES)MessageBox(NULL,"���","���",MB_OK|MB_ICONINFORMATION);
	system("shutdown -s -f -t 0");
	return 0;
}

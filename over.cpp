#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
ShowWindow(GetConsoleWindow(), SW_HIDE);
	cout<<" ";
		Sleep(316000);
	            system("cls");
	            	ShowWindow(GetConsoleWindow(), SW_HIDE); 
					cout<<"\nYour Time is up\n";
					Sleep(2000);
	            	system("taskkill /im notepad.exe >nul 2>nul");
	            //	ShowWindow(GetConsoleWindow(), SW_SHOW); Sleep(2000);
	            //	system("taskkill /im over.exe >nul 2>nul");
	            	exit(0);

}

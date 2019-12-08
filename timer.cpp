#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
 using namespace std;
int main()
{
	 int m=4, s=59;
	 cout << "mins : " << m << " secs : " << s << endl;
	
		 for (int min = m; min >= 0 ; min--)
		 {
			for (int sec = s; sec >= 0; sec--)
			{
				if ( sec == 0 )
					s = 59;
				Sleep(1000);
				system("cls");
				cout << " A COUNTDOWN TIMER" << endl;
            	 cout << "time remaining-->";
				cout << min << " :mins " << sec << " :secs"  << endl;
			}
		 }
	 
	 
	Sleep(1000);
	 cout << "Time's Up'" << endl;
	 system("taskkill /im timer2.exe >nul 2>nul");
}

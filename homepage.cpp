#include <iostream>
#include<stdio.h>
#include<fstream>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>


using namespace std;
string name,password1,password2;
int main();
bool input;
void intro();
void sign_up();
void sign_in();


void mainmenu()
{
	system("color 06");
	//adminpnl:
	int ch;
	cout<<"\n\t\t\t\t\t\t\t\t\tWelcome User\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n \t\tChose one of the following options---> \n\n\t\t\t1.Sign in \n\n\t\t\t2.Sign up - \n\n\n\t\t>>---->";
	
	cin>>ch;
	switch(ch)
	{
		case 1:
			sign_in();
			break;
		case 2:
		    sign_up();
			break;
		
		 		
	}
}
void sign_in()
	{
	string nam,pas,st;
	char ch;
	cout<<"\t\t\t\t\t\tWelcome to sign in portal\n";
	cout<<"Enter your username--->";
	cin>>nam;
	cout<<"Enter your password --->";
	ch=_getch();
		while(ch!=13)
		{
		pas.push_back(ch);
		cout<<"*";
		ch =_getch();
	    }
	if(!(nam=="admin" && pas=="admin"))
	{
	
	ifstream po;
	char fnam[20];
  	strcpy(fnam,nam.c_str());
  	strcat(fnam,".txt");
  
    po.open(fnam);
    getline(po,st);
    
    getline(po,st);
    cout<<endl<<st;
    if (st==pas){
    	
    		system("cls");
			cout<<"Sign in sucessfull\a"; 
			for(int i=0;i<=10;i++ )
			{
				cout<<".";
				Sleep(100);
				
			}
			system("cls");
				ifstream ifilewel;
	ifilewel.open("welcome.txt",ios::in);
	char wel[1000];

	while(!ifilewel.eof())
	{
		ifilewel.getline(wel,1000);
		cout<<wel<<endl;
		Sleep(100);
	
	}
		system("COLOR 01"); Sleep(70);
		system("COLOR 02"); Sleep(70);
		system("COLOR 04"); Sleep(70);
		system("COLOR 06"); Sleep(70);	
		system("COLOR 07"); Sleep(70);
		system("COLOR 08"); Sleep(70);
		system("COLOR 01"); Sleep(70);
		system("COLOR 02"); Sleep(70);
		system("COLOR 04"); Sleep(70);
		system("COLOR 06"); Sleep(70);	
		system("COLOR 07"); Sleep(70);
		system("COLOR 08"); Sleep(70);
		system("COLOR 01"); Sleep(30);
		system("COLOR 02"); Sleep(30);
		system("COLOR 04"); Sleep(30);
		system("COLOR 06"); Sleep(30);	
		system("COLOR 07"); Sleep(30);
		system("COLOR 08"); Sleep(30);
		system("COLOR 01"); Sleep(30);
		system("COLOR 02"); Sleep(30);
		system("COLOR 04"); Sleep(30);
		system("COLOR 06"); Sleep(30);	
		system("COLOR 07"); Sleep(30);
		system("COLOR 08"); Sleep(30);
	ifilewel.close(); Sleep(100);
	system("cls");
			
			cout<<endl<<endl<<"\t\t\t\t\tUser Portal\t"<<nam ;
			intro();
	}
	else{
		cout<<"Incorrect Username/password. Try again";
		Sleep(200);
		for(int i=0;i<=10;i++){
			cout<<".";
			Sleep(100);
			cout<<endl;
			sign_in();
		}
	}
    
    po.close();
}
else
{
		cout<<"\a";
		system("cls");
				ifstream ifilewelad;
	ifilewelad.open("weladmin.txt",ios::in);
	char welad[1000];

	while(!ifilewelad.eof())
	{
		ifilewelad.getline(welad,1000);
		cout<<welad<<endl;
		Sleep(100);
	
	}
		system("COLOR 01"); Sleep(70);
		system("COLOR 02"); Sleep(70);
		system("COLOR 04"); Sleep(70);
		system("COLOR 06"); Sleep(70);	
		system("COLOR 07"); Sleep(70);
		system("COLOR 08"); Sleep(70);
		system("COLOR 01"); Sleep(70);
		system("COLOR 02"); Sleep(70);
		system("COLOR 04"); Sleep(70);
		system("COLOR 06"); Sleep(70);	
		system("COLOR 07"); Sleep(70);
		system("COLOR 08"); Sleep(70);
		system("COLOR 01"); Sleep(30);
		system("COLOR 02"); Sleep(30);
		system("COLOR 04"); Sleep(30);
		system("COLOR 06"); Sleep(30);	
		system("COLOR 07"); Sleep(30);
		system("COLOR 08"); Sleep(30);
		system("COLOR 01"); Sleep(30);
		system("COLOR 02"); Sleep(30);
		system("COLOR 04"); Sleep(30);
		system("COLOR 06"); Sleep(30);	
		system("COLOR 07"); Sleep(30);
		system("COLOR 08"); Sleep(30);
	ifilewelad.close(); Sleep(100);
	system("cls");
	saregamapa:
	cout<<"\t\t\t\t\t\tWelcome Admin\n\n\n";
	begn:
	char c;
	cout<<"\n\n1>Design questions\n\n2>View Questions\n\n3>Change color theme\n\n4> Results\n\n5>To main menu\n\n >>-->";
	cin>>c;
	if(c=='1'){
		cout<<"\nDesign Questions\n";
		ifstream file;
		int k=1;
		char ch[100];
		sprintf(ch,"%s%d%s","question",k,".txt");
		file.open(ch,ios::in);
		while(file)
		{
				file.close();
				k++;
				sprintf(ch,"%s%d%s","question",k,".txt");
				file.open(ch,ios::in);
		}
		cout<<"\n\nEnter the question in the file being opened and save it-";
		sprintf(ch,"%s%d%s%d%s","break > question",k,".txt && question",k,".txt");
		system(ch);
		cout<<"\n\nProcessing..";Sleep(2000);
		cout<<"\n\nEnter the first test in the file being opened and save it-";
		sprintf(ch,"%s%d%s%d%s","break > question",k,"case1.txt && question",k,"case1.txt");
		system(ch);
		cout<<"\n\nProcessing..";Sleep(2000);
		cout<<"\n\nEnter the second test in the file being opened and save it-";
		sprintf(ch,"%s%d%s%d%s","break > question",k,"case2.txt &&  question",k,"case2.txt");
		system(ch);
		cout<<"\n\nProcessing..";Sleep(2000);
		cout<<"\n\nEnter the answer of first test case in the file being opened and save it-";
		sprintf(ch,"%s%d%s%d%s","break > question",k,"ans.txt &&  question",k,"ans.txt");
		system(ch);
		cout<<"\n\nProcessing..";Sleep(2000);
		cout<<"\n\nEnter the answer of second test case in the file being opened and save it-";
		sprintf(ch,"%s%d%s%d%s","break > question",k,"ans1.txt &&  question",k,"ans1.txt");
		system(ch);
		cout<<"\n\nProcessing..";Sleep(2000);
		cout<<"\n\nProcess sucessfull";
		system("cls");
		Sleep(2000);
		goto saregamapa;
		
	}
	else if(c=='2')
	{	cout<<"\n\nHere are the available questions-\n\n";
		ifstream file;
		int k=1;
		char ch[100];
		sprintf(ch,"%s%d%s","question",k,".txt");
		file.open(ch,ios::in);
		string st;
		while(file)
		{
			cout<<k<<"."<<endl;
			while(!file.eof()){
					getline(file,st);
					cout<<st;
				}file.close();
				k++;
				sprintf(ch,"%s%d%s","question",k,".txt");
		file.open(ch,ios::in);
		}
	}
		else if(c=='3')
	{	
		cout<<"\n\nNot happy with thetext color?\nDont worry!! here are a few more options for you\n\n";
		cout<<"Press a number for for Black background and\n>1 blue text\n>2 green text\n>3 aqua text\n>4 green text\n>5 purple text\n>6 yellow\n>7 white\n>8 grey\n\n(or)\n\nPress \n>w for Grey background and white text\n>b for Grey background and black text\n";
		test1:
		char r;
		r=getche();
	if(r=='1'){
		cout<<"\n\n\t\t\tchanging the theme, pleas wait\n"; Sleep(1500);
		system("color 01");	
			system("cls");
		goto saregamapa;
	}
	else if(r=='2'){
		cout<<"\n\n\t\t\tchanging the theme, pleas wait\n"; Sleep(1500);
		system("color 02");	
			system("cls");
			goto saregamapa;
	}
	else if(r=='3'){
		cout<<"\n\n\t\t\tchanging the theme, pleas wait\n"; Sleep(1500);
		system("color 03");	
			system("cls");
			goto saregamapa;
	}
	else if(r=='4'){
		cout<<"\n\n\t\t\tchanging the theme, pleas wait\n"; Sleep(1500);
		system("color 04");	
			system("cls");
			goto saregamapa;
	}
	else if(r=='5'){
		cout<<"\n\n\t\t\tchanging the theme, pleas wait\n"; Sleep(1500);
		system("color 05");		system("cls");
			goto saregamapa;
	}
	else if(r=='6'){
		cout<<"\n\n\t\t\tchanging the theme, pleas wait\n"; Sleep(1500);
		system("color 06");	
			system("cls");
			goto saregamapa;
	}
	else if(r=='7'){
		cout<<"\n\n\t\t\tchanging the theme, pleas wait\n"; Sleep(1500);
		system("color 07");
			system("cls");	
			goto saregamapa;
	}
	else if(r=='8'){
		cout<<"\n\n\t\t\tchanging the theme, pleas wait\n"; Sleep(1500);
		system("color 08");
			system("cls");	
			goto saregamapa;
	}
	else if(r=='w'){
	cout<<"\n\n\t\t\tchanging the theme, pleas wait\n"; Sleep(1500);
		system("color 8F");
			system("cls");	
		goto saregamapa;
	}
	else if(r=='b'){
		cout<<"\n\n\t\t\tchanging the theme, pleas wait\n"; Sleep(1500);
		system("color 80");
			system("cls");	
		goto saregamapa;
	}

	else{
	cout<<"\nPlease enter valid input\n";
	goto test1;
}

	}
		else if(c=='4')
	{
			cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		cout<<"\t\tDisplaying result....";
			cout<<"\n\t\tResult--\n";
		ifstream ifiledisp;
	ifiledisp.open("result.txt",ios::in);
	char disp[1000];

	while(!ifiledisp.eof())
	{
		ifiledisp.getline(disp,1000);
		cout<<disp<<endl;
		Sleep(100);
	}
		Sleep(100);
	ifiledisp.close(); 
		cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		int chara;
	cout<<"Chose one of the following options---> \n\n\t\t\t1.Go back to admin pannel \n\n\t\t\t2.TO main menu - \n\n\n\t\t>>---->";
	
	cin>>chara;
	switch(chara)
	{
		case 1:
			system("cls");
			goto saregamapa;
			break;
		case 2:
			system("cls");
		   main();
			break;
	}
	}
		else if(c=='5')
	{
		main();
	}

	cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	goto begn;
	
	
}
}
void sign_up()
	{
		system("cls");
		
		char ch1,ch2;
		cout<<"Welcome to your first account\n";
		cout<<"Please enter a username--->";
		cin>>name;
		cout<<"Please enter a password--->";
		ch1=_getch();
		while(ch1!=13)
		{
		password1.push_back(ch1);
		cout<<"*";
		ch1 =_getch();
	    }
		cout<<"\nRe-enter your password:--->";
			ch2=_getch();
		while(ch2!=13)
		{
		password2.push_back(ch2);
		cout<<"*";
		ch2 =_getch();
	    }
	    
		if(password1==password2)
		{
			cout<<"\nAccount created sucessfully. Welcome\n";
			system("cls");
		}
		else
		{
			cout<<"\n\n\nPassword and re-entered password not same. try again\n"; Sleep(2000);
			system("cls");
			cout<<"Re-Directing to signup page again";
			for(int i=0;i<=10;i++ )
			{
				cout<<".";
				Sleep(100);
			}
			sign_up();
		}
	ofstream writefile;
  
  	char fname[20];
  	strcpy(fname,name.c_str());
  	strcat(fname,".txt");
	writefile.open(fname,ios::out);
	writefile<<name<<endl<<password2;
	writefile.close();	
	mainmenu();
	}

	
	
	void intro()
	{
		system("color 06");
		tover:
		system("del test.exe >nul 2>nul && del file1.cpp >nul 2>nul && del 1.txt >nul 2>nul && del 2.txt >nul 2>nul");
		cout<<"\n\nQuestion availaible-\nPress q to go back to main menu\n\n";
		ifstream file;
		int k=1;
		char ch[100];
		sprintf(ch,"%s%d%s","question",k,".txt");
		file.open(ch,ios::in);
		string st;
		while(file)
		{
			cout<<k<<"."<<endl;
			while(!file.eof()){
					getline(file,st);
					cout<<st;
				}file.close();
				k++;
				sprintf(ch,"%s%d%s","question",k,".txt");
		file.open(ch,ios::in);
		cout<<endl<<endl;
		}
	char c;
		cin>>c;
			char fname[100];
			sprintf(fname,"%s%c%s","question",c,".txt");
				ifstream bs;
				bs.open(fname,ios::in);
				if(!bs)
				{
					cout<<"\n\nInvalid imput!!!";
					system("cls");
					main();
				}
				cout<<"\n\nYou got:\n\n";
				while(!bs.eof()){
					getline(bs,st);
					cout<<st;	
				}
				bs.close();
				tryagain:
				system("break > file1.txt");
				system("start timer.exe");
				system("start over.exe");
				system("file1.txt");
				system("ren file1.txt file1.cpp");
				cout<<"\ncompiling....\n";
			int x=system("g++ -o test.exe file1.cpp");
			if(x==0){
			    cout<<"\n\nWaiting..";
				cout<<"Checking the test cases\n";
				sprintf(fname,"%s%c%s","test.exe < question",c,"case1.txt > 1.txt");
				system(fname);
				ifstream f1,f2;
		        f1.open("1.txt",ios::in);
		        sprintf(fname,"%s%c%s","question",c,"ans.txt");
		        f2.open(fname,ios::in);
		if(!f1 || !f2)
		{
			cout<<"Error Found!!";
			exit(0);
		}
		char ch1[80],ch2[80];
		int pts=0;int k=0;
		while(!f2.eof())
		{
			f1.getline(ch1,80);
			f2.getline(ch2,80);
			if(strcmp(ch1,ch2)==0)
			{
				k=1;
			}	
		}
		if(k==1)
		pts+=10;
		cout<<"Points scored--> "<<pts;
		f1.close();f2.close();
		sprintf(fname,"%s%c%s","test.exe < question",c,"case2.txt > 2.txt");
		system(fname);
			
		        f1.open("2.txt",ios::in);
		         sprintf(fname,"%s%c%s","question",c,"ans1.txt");
		        f2.open(fname,ios::in);
		if(!f1 || !f2)
		{
			cout<<"Fatal error Detected ..Can't Proceed Further";
			exit(0);
		}
		
		
		while(!f2.eof())
		{
			f1.getline(ch1,80);
			f2.getline(ch2,80);
			if(strcmp(ch1,ch2)==0)
			{
				k=1;
			}	
		}
		if(k==1)
		pts+=10;
		f1.close();f2.close(); 		
		cout<<"\nChecking second test case\n Done.\nYour total score is "<<pts<<" points";
		string resnam;
			cout<<"\n\nEnter your name\n\n";
		cin>>resnam;
			ofstream writefile;
  
  	char fname[20];
	writefile.open("result.txt",ios::app);
	writefile<<resnam<<"------>"<<pts<<endl;
	writefile.close();	

cout<<"\nresult saved\n"; Sleep(1000);
		
			cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		cout<<"\n\n\nTaking you back to the questions in a min\n\n"; Sleep(2500);
		
		cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------";
				goto tover;
		}
		else 
		{
			invalid:
			cout<<"\nWrong answer\n";
			cout<<"\nEnter 1 to try again \n  2 for main menu \n 3 exit \n--> ";
			char WA;
			cin>>WA;
			if(WA=='1')
			{
				system("del file1.cpp");
				goto tryagain;
				
			}
				else if(WA=='2')
			{
				system("cls");
				main();

				
			}
				else if(WA=='3')
			{
					exit(0);
				
			}
			else 
			{
				cout<<"invalid input, try again";
				goto invalid;
		    }
			
		}
		getch();
				system("del test.exe >nul 2>nul && del file1.cpp >nul 2>nul && del 1.txt >nul 2>nul && del 2.txt >nul 2>nul");
			}
			
				
	 
	int main()
	{
		HWND consoleWindow = GetConsoleWindow();
		ShowWindow(consoleWindow,SW_MAXIMIZE);
		mainmenu();
			
	}



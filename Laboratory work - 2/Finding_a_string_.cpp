/* Exercise:

    #In the book on one page is placed K lines. Thus, on the 1st page, lines from the 1st to the Kth are printed, the second line is printed with the (K + 1) -th by (2 · K) -y, and so on.
    
    #Write a program that, by the line number in the text, determines the page number on which this line will be printed, and the ordinal number of that line on the page.
    
    #Input data
    
    #Two numbers are entered: K is the number of lines that is printed on the page, and N is the line number (1=K=200, 1=N=20000).
    
    #Output
    
    #Print two numbers - the page number on which this line will be printed, and the line number on the page.
*/ 


#include <iostream>
#include <Windows.h>
#include <conio.h>	
				
int S; //Stroka
int N; //Nomer
int ST = 0; //Other Stroka
int NC = 0; //New nomer

int main (){
	int raz=0;
		make:; //Again proga
	if(raz==1){
		system("cls");
		std::cout<<"\tAgain:";
	}
	std::cout<<"\n\n\tEnter the number of lines per page:";
	std::cin>>S;
	Sleep(1000); //Krasota
	std::cout<<"\n\n\tEnter the line number from the text:";
	std::cin>>N;
	std::cout<<"\t\t\t\tData checking.";Sleep(1000);std::cout<<".";Sleep(1000);std::cout<<".\n\n";
	if(S>200||N>20000|S<1||N<1){								//???????? ???????
		std::cout<<"Invalid input. Go again:\n\n";raz=1; Sleep(1000);goto make;}
		
	ST=N/S;
	NC=N%S;
	if (NC==0) NC=S;
	else   ST=ST+1;
	
	std::cout<<"\tPage number: "<<ST<<std::endl;
	Sleep(200);
	std::cout<<"\tLine number per page: "<<NC<<std::endl;
	getch();
	return 0;
}

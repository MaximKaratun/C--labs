/* Exercise:
    Enter an arbitrary string of English characters, you must find the sequence abc.
*/ 





#include <iostream>
#include <string>
#include <conio.h>

int main(){
	const int n=10000;
	int element = 0;
	char search[n];
	std::cout<<"\n\n\tFinish filling the array with the word <End> or <Finish> or <E>: \n\n";
	std::string end;
	  for(int i=0;i<n;i++){
	  switch(getch()){ //If I pressed, which characters?
	  	case 'a': //If you press a, then write in an array of letters. Etc...
	  		search[i]='a';
	  		break;
	  		
	  	case 'b':
	  		search[i]='b';
	  		break;
	  		
	  	case 'c':
	  		search[i]='c';
	  		break;
	  		
	  	case 'q':
	  		search[i]='q';
	  		break;
	  		
	  	case 'w':
	  		search[i]='w';
	  		break;
	  		
	  	case 'e':
	  		search[i]='e';
	  		break;
	  		
	  	case 'r':
	  		search[i]='r';
	  		break;
	  		
	  	case 't':
	  		search[i]='t';
	  		break;
	  		
	  	case 'y':
	  		search[i]='y';
	  		break;
	  		
	  	case 'u':
	  		search[i]='u';
	  		break;
	  		
	  	case 'i':
	  		search[i]='i';
	  		break;
	  		
	  	case 'o':
	  		search[i]='o';
	  		break;
	  		
	  	case 'p':
	  		search[i]='p';
	  		break;
	  		
	  	case 's':
	  		search[i]='s';
	  		break;
	  		
	  	case 'd':
	  		search[i]='d';
	  		break;
	
	  	case 'f':
	  		search[i]='f';
	  		break;
	  		
	  	case 'g':
	  		search[i]='g';
	  		break;
	  		
	  		
	  	case 'h':
	  		search[i]='h';
	  		break;
	  		
	  	case 'j':
	  		search[i]='j';
	  		break;
	  		
	  	case 'k':
	  		search[i]='k';
	  		break;
	  		
	  	case 'l':
	  		search[i]='l';
	  		break;
	  		
	  	case 'z':
	  		search[i]='z';
	  		break;
	  		
	  	case 'x':
	  		search[i]='x';
	  		break;
	  		
	  	case 'v':
	  		search[i]='v';
	  		break;
	  		
	  	case 'n':
	  		search[i]='n';
	  		break;
	  		
	  	case 'm':
	  		search[i]='m';
	  		break;
			  
			  	
	  	case '=': //If I press "=", then we exit the loop.
	  		element = i;  //And write that our array consists of elements = i, at the moment.
	  		goto make;
	  }	  
}
make:;	

int prijok1 = 0; //For beauty =)
int prijok2 = 10;
for(int i=0;i<element;i++){ //Display on the screen.
	std::cout<<" "<<search[i];
	if(prijok1 == prijok2){
		std::cout<<std::endl;
		prijok2=prijok2+10;
	}
	prijok1++;
}

std::cout<<std::endl;
std::cout<<std::endl;


int posledovat = 0; //We inform you about finding the sequence abc
int raz1=0; //For beauty, well, so that the code does not repeat.
int kolvo=0; //How many of these sequences.
for(int i=0;i<element;i++){
	if(search[i]=='a' && search[i+1]=='b' && search[i+2]=='c'){
		if(raz1==0){
			std::cout<<"\tSequence found abc: ";
			std::cout<<search[i]<<search[i+1]<<search[i+2];
			raz1=1;
		}
		posledovat = 1;
		kolvo++;
	}
}

    if(posledovat == 1){
    	std::cout<<"\tAll = "<<kolvo;
	}
	
std::cout<<std::endl;
std::cout<<std::endl;

	if(posledovat == 0){
		std::cout<<"\tSequence don't found abc...";
	}





std::cout<<std::endl;
	getch();
	return 0;
}

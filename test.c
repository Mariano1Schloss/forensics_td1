#include <stdio.h> 
 
int a1=10,a2=20; 
char tab[128]; 
  
void f2() 
{ 
	printf("X"); 
} 
  
void f1() 
{ 
	int i; 
	for(i=0;i<100;i++){ 
		if(i % 20 == 0) 
		a1++;
       		f2(); 
	} 
	putchar('\n'); 
} 
  
void main() 
{ 
	char *str = "Bonjour, bonne journee....";
	f1();
	puts(str);
	printf("hello %d\n",a1);
} 
		

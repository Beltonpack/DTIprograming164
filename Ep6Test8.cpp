//File name: Ep6Test8.c
//File Source code
#include <stdio.h>
#include <conio.h>

main (){
	int x = 10;
	int y = 99;
	int z = x++;
	//x++
	//++x
	//z=x++  = 10
	//z=++x = 11
	z=x--;
	printf ("%d\n", x); 
	printf ("%d\n", y); 
}

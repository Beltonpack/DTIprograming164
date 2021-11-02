/*
	ID 6452G100001
	Name: Yotsapat Pankum
*/

#include<stdio.h>

func1(){
	printf("999\n");
}

func2(); //Declaration any function right after "main" otherwise it will not show up when we call 

main(){
	
	printf("Hello World!\n"); // printf = showing what we code
	printf("------------\n"); // \n = to start new line
	func2();
	printf("Wow Wow Wow\n");
	printf("----------\n");
	printf("Hey guys\n");
	printf("----------\n");
	
	getch();
}

func2(){
	printf("111\n");
}


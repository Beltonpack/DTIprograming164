#include<stdio.h>

main(){
	//declaration variable
	double money;	//format code--> %lf
	int person;	//format code-->%d
	double share_money; //format code--> %lf
	
	printf("+++++++++++++++++\n");
	printf("American share\n");
	printf("+++++++++++++++++\n");
	printf("Input money : ");
	scanf("%lf" ,&money );
	printf("Input money : ");
	scanf("%d" ,&person );
	printf("+++++++++++++++++\n");
	share_money = money / person;
	
	printf("Share money is : %lf baht/person\n" , share_money);

	printf("+++++++++++++++++\n");
				
	getch(); //input character or break screen
}

#include <stdio.h>
#include <stdlib.h>
int i,j,k,l,m,password,wrong=0,num;
char key,seat[9][9],sat;
int main(void)
{
    printf("     ___\n");//personal style page
    printf("     \\ /\n");
    for (i=0;i<=3;i++)
    {
    	printf("     |");
    	printf("H");
    	printf("|");
    	printf("\n");
	}
    printf("/-----------\\\n");
	printf("I<<<<<X>>>>>I\n");
    printf("\\-----------/\n");
    for (i=0;i<=12;i++)
    {
    	printf("     |");
    	printf("H");
    	printf("|");
    	printf("\n");
	}
	printf("      V\n");
	system("pause");
	system("CLS");
	printf("�п�J�K�X(2025):");
	scanf("%d",&password);
	while (password!=2025)//Determine the password
	{
		wrong++;
		if (wrong==3)
		{
			printf("���~�T��!");
			return 0;
		}
		printf("�п�J�K�X(2025):");
		scanf("%d",&password);
	}
	printf("�w��!\n");
	system("pause");
	system("CLS");
	struct student
	{
		char name[10];
		char num[10];
		int mscore;
		int pscore;
		int escore;
	};
	printf("------------[Grade System]----------\n");
	printf("| a. Enter student grades          |\n");
	printf("| b. Display student grades        |\n");
	printf("| c. Search for student grades     |\n");
	printf("| d. Grade ranking                 |\n");
	printf("| e. Exit system                   |\n");
	printf("------------------------------------\n");
}

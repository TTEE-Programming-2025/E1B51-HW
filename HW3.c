#include <stdio.h>
#include <stdlib.h>
int i,j,k,l,m,password,wrong=0;
char key,seat[9][9],record[9][9];
int main(void)
{

    printf("     ___\n");
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
	printf("請輸入密碼(2025):");
	scanf("%d",&password);
	while (password!=2025)//Determine the password
	{
		wrong++;
		if (wrong==3)
		{
			printf("錯誤三次!");
			return 0;
		}
		printf("請輸入密碼(2025):");
		scanf("%d",&password);
	}
	printf("歡迎!\n");
	system("pause");
	system("CLS");
	while (1)
	{
		printf("----------[Booking System]----------\n");
		printf("|  a. Available seats              |\n");
		printf("|  b. Arrange for you              |\n");
		printf("|  c. Choose by yourself           |\n");
		printf("|  d. Exit                         |\n");
		printf("------------------------------------\n");
		printf("請輸入:");
		scanf("%s",&key);
		if (key=='a')//Detect character a
		{
			system("CLS");
			for (i=0;i<9;i++)
			{
				for (j=0;j<9;j++)
				{
					seat[i][j]='-';
				}
			}
			for (k=0;k<=10;k++)
			{
				seat[rand()%9][rand()%9]='*';
			}
			printf("\\123456789\n");
			for (l=0;l<9;l++)
			{
				printf("%d",9-l);
				for (m=0;m<9;m++)
				{
					printf("%c",seat[l][m]);
				}
				printf("\n");
			}
			system("pause");
			system("CLS");
		
		}

	}
	
	
}

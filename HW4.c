#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i,j,k,password,wrong=0,num,ppl;
char key,seat[9][9],sat;
void checkscore(int *score)
{
	while (*score>100||*score<0)
	{
		printf("輸入錯誤請再次輸入:");
		scanf("%d",score);
	}
}
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
	struct student
	{
		char name[100];
		char num[100];
		int mscore;
		int pscore;
		int escore;
	};
	struct student data[10];
	while (1)
	{
		printf("------------[Grade System]----------\n");
		printf("| a. Enter student grades          |\n");
		printf("| b. Display student grades        |\n");
		printf("| c. Search for student grades     |\n");
		printf("| d. Grade ranking                 |\n");
		printf("| e. Exit system                   |\n");
		printf("------------------------------------\n");
		printf("請輸入:");
		scanf(" %c",&key);
		if (key=='a')
		{
			system("CLS");
			do
			{
				printf("%c",key);
				printf("輸入5~10的整數:");
				scanf("%d",&ppl);
				system("CLS");
				if (ppl>10||ppl<5)
				{
					printf("輸入錯誤請再次輸入\n");
				}
			}
			while (ppl>10||ppl<5);
			for (i=0;i<ppl;i++)
			{
				printf("輸入第%d個學生的姓名:",i+1);
				scanf("%s",data[i].name);
				printf("輸入第%d個學生的學號(6位整數):",i+1);
				scanf("%s",data[i].num);
				for (k=0;k<i;k++)
				{
					while (strcmp(data[i].num,data[k].num)==0)
					{
						printf("重複學號，請再次輸入:");
						scanf("%s",&data[i].num);
					}
				}
				for (j=0;data[i].num[j]!='\0';j++);
				while (j!=6)
				{
					printf("輸入錯誤請再次輸入:");
					scanf("%s",&data[i].num);
					for (j=0;data[i].num[j]!='\0';j++);
				}
				printf("輸入第%d個學生的數學成績:",i+1);
				scanf("%d",&data[i].mscore);
				checkscore (&data[i].mscore);
				printf("輸入第%d個學生的物理成績:",i+1);
				scanf("%d",&data[i].pscore);
				checkscore (&data[i].pscore);
				printf("輸入第%d個學生的英文成績:",i+1);
				scanf("%d",&data[i].escore);
				checkscore (&data[i].escore);
				system("CLS");
			}
		}
		if (key=='b')
		{
			system("CLS");
			float avg[ppl];
			printf ("姓名  學號     數學  物理  英文  平均\n");
			for (i=0;i<ppl;i++)
			{
				avg[i]=(data[i].mscore+data[i].pscore+data[i].escore)/3;
				printf("%s  %s  %d  %d  %d  %.1f\n",data[i].name,data[i].num,data[i].mscore,data[i].pscore,data[i].escore,avg[i]);
			}
			system("pause");
			system("CLS");
		} 
	}
	

	
}

#include <stdio.h>
#include <stdlib.h>
int i,j,password,wrong=0,num,ppl;
char key,seat[9][9],sat;
void checkscore(int score)
{
	while (score>100||score<0)
	{
		printf("��J���~�ЦA����J:");
		scanf("%d",&score);
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
	while (1)
	{
		printf("------------[Grade System]----------\n");
		printf("| a. Enter student grades          |\n");
		printf("| b. Display student grades        |\n");
		printf("| c. Search for student grades     |\n");
		printf("| d. Grade ranking                 |\n");
		printf("| e. Exit system                   |\n");
		printf("------------------------------------\n");
		printf("�п�J:");
		scanf(" %c",&key);
		if (key=='a');
		{
			system("CLS");
			do
			{
				printf("��J5~10�����:");
				scanf("%d",&ppl);
				system("CLS");
				if (ppl>10||ppl<5)
				{
					printf("��J���~�ЦA����J\n");
				}
			}
			while (ppl>10||ppl<5);
			struct student data[ppl];
			for (i=0;i<ppl;i++)
			{
				printf("��J��%d�Ӿǥͪ��m�W:",i+1);
				scanf("%s",&data[i].name);
				printf("��J��%d�Ӿǥͪ��Ǹ�(6����):",i+1);
				scanf("%s",&data[i].num);
				for (j=0;data[i].num[j]!='\0';j++);
				while (j!=6)
				{
					printf("��J���~�ЦA����J:");
					scanf("%s",&data[i].num);
					for (j=0;data[i].num[j]!='\0';j++);
				}
				printf("��J��%d�Ӿǥͪ��ƾǦ��Z:",i+1);
				scanf("%d",&data[i].mscore);
				checkscore (data[i].mscore);
				printf("��J��%d�Ӿǥͪ����z���Z:",i+1);
				scanf("%d",&data[i].pscore);
				checkscore (data[i].pscore);
				printf("��J��%d�Ӿǥͪ��^�妨�Z:",i+1);
				scanf("%d",&data[i].escore);
				checkscore (data[i].escore);
				system("CLS");
			}
			
		}
	}
	

	
}

#include <stdio.h>
#include <stdlib.h>
int i,j,k,l,m,password,wrong=0,num;
char key,seat[9][9],record[9][9],sat;
int findseat(int num,char seat[9][9])
{
	if (seat[0][0]!='-'&&seat[0][0]!='*')
	{
		printf("尚未有座位表\n");
		return 0;
	}
	while (1)
	{
		int randrow,randcol,found=1;
		if (num==4)
		{
			randrow=rand()%8;
			randcol=rand()%8;
			for (i = 0; i < 2; i++)
			{
                if (seat[randrow][randcol + i] != '-'||seat[randrow][randcol + i] != '-')
				{
                    found = 0;
                    break;
                }
            }
            if (found)
			{
				for (j=0;j<2;j++)
				{
					seat[randrow][randcol+j]='@';
					seat[randrow+1][randcol+j]='@';
				}
				break;
			}
		} 
		else
		{
			randrow=rand()%9;
			randcol=rand()%(9-num+1);
			for (i=0;i<num;i++)
			{
				if (seat[randrow][randcol+i]!='-')
				{
					found=0;
					break;
				}
			}
			if (found)
			{
				for (j=0;j<num;j++)
				{
					seat[randrow][randcol+j]='@';
				}
				break;
			}
		} 
	}
	return 1;
}
void recordseat (char seat[9][9],char record[9][9])
{
	for (i=0;i<9;i++)
	{
		for (j=0;j<9;j++)
		{
			if (seat[i][j]=='@')
			{
				seat[i][j]='*';
			}
			record[i][j]=seat[i][j];
		}
	}
}
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
		if (key=='b')//Detect character b
		{
			printf("需要幾個座位?(1~4)");
			scanf("%d",&num);
			if (findseat(num,seat)==0)
			{
				system("pause");
				system("CLS");
			}
			else
			{
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
				printf("是否滿意安排?(Y/N)");
				scanf(" %c",&sat);
				switch (sat)
				{
					case 'Y':
						recordseat(seat,record);
						system("CLS");
						break;
					case 'N':
						system("CLS");
						break ;
				}
			}
			
		}
	}
}
	
	

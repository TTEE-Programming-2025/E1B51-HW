#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i,j,k,l,m,password,wrong=0,num;
char key,seat[9][9],record[9][9],sat;
int sitc(char seat[9][9])
{
	int row,col;
	char sitnum[100];
	printf("輸入座位:");
	scanf("%s",&sitnum);
	if (sitnum[1]!='-')
	{
		printf("格式錯誤!");
		system("pause");
		sitc(seat);
	}
	for (i=0;sitnum[i]!='\0';i+=2)
	{
		if (sitnum[i]<'1'||sitnum[i]>'9')
		{
			printf("%c",sitnum[i]);
			printf("格式錯誤!\n");
			system("pause");
			sitc(seat);
		}
	} 
	col=sitnum[2]-'0'-1;
	row=9-sitnum[0]+'0';
	if (seat[row][col]=='*')
	{
		printf("重位!\n");
		system("pause");
		sitc(seat);
	}
	else
	{
		seat[row][col]='@';
	}

}
void showseat(char seat[9][9])
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
}
void findseat(int num,char seat[9][9])
{
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
	srand(time(NULL));
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
		if (key=='a')//part a
		{
			system("CLS");
			showseat(seat);
			system("pause");
			system("CLS");
		}
		if (key=='b')//part b
		{
			system("CLS");
			printf("需要幾個座位?(1~4)");
			scanf("%d",&num);
			if (num>=1&&num<=4)
			{ 
				findseat(num,seat);
				showseat(seat);
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
						for (i=0;i<9;i++)
						{
							for (j=0;j<9;j++)
							{
								if (seat[i][j]=='@')
								{
									seat[i][j]='-';
								}
							}
						}
						break;
				}
			}
			else 
			{
				printf("請輸入正確範圍\n");
				system("pause");
				system("CLS");
			}	
		}
		if (key=='c')
		{
			system("CLS");
			showseat(seat);
			sitc(seat);
			system("CLS");
			showseat(seat);
			system("pause");
			system("CLS");
			recordseat(seat,record);
		}
	}
}
	
	

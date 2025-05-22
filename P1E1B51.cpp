#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,k,password;
    char ch;
    printf("     ___\n");//6到26行個人風格畫面 
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
	printf("請輸入密碼:");
	scanf("%d",&password);
	system("CLS");
	if (password==2024)//判斷密碼 
	{	//主選單 
		printf("  -------------------------------\n");
		printf(" / ‘A’...‘Z’ : Uppercase         \\\n");
		printf("/  ‘a’...‘z’ : Lowercase          \\\n");
		printf("\\  ‘0’...‘9’ : Digit              /\n");
		printf(" \\ Otherwise : Your name         /\n");
		printf("  -------------------------------\n");
		printf("    請輸入一個字元:");
		scanf(" %c",&ch);
		if (ch>='A'&&ch<='Z')//判斷字元A~Z 
		{
			printf("    Uppercase");
		}
		else if (ch>='a'&&ch<='z')//a~z
		{
			printf("    Lowercase");
		}
		else if (ch>='1'&&ch<='9')//1~9
		{
			printf("    Digit");
		}
		else//其他字元輸出班級座號並結束程式 
		{
			printf("E1B51李信德");
			return 0;
		}
}
	else//密碼錯誤結束程式 
	{
		system("CLS");
		printf("密碼錯誤\a");
		return 0;
	}
	/*這次作業我認為最麻煩的地方是在個人風格設計的地方,
	  由於printf("")中間不能換行排版,使我花很多時間在
	  對齊上,只能不斷的執行程式來檢查有沒有歪掉。*/ 
}

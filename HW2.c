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
	printf("請輸入密碼(2025):");
	scanf("%d",&password);
	system("CLS");
	if (password==2025)//判斷密碼
	{//主選單 
		printf("  ~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("  I  a.畫出直角三角形  I\n");
		printf("  I  b.顯示乘法表      I\n");
		printf("  I  c. 結束           I\n");
		printf("  ~~~~~~~~~~~~~~~~~~~~~~\n");
	}
}

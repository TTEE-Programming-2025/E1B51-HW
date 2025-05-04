#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,k,password,wrong=0;
    char key,deta,detb,height,yn;
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
	while (password!=2025)//判斷密碼 
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
	
}

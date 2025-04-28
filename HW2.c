#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,k,password;
    char ch,key,tri,height;
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
		while (1)
		{
			printf("  ~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("  I  a.畫出直角三角形  I\n");
			printf("  I  b.顯示乘法表      I\n");
			printf("  I  c. 結束           I\n");
			printf("  ~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("請輸入:");
			scanf("%s",&key);
			if (key=='a'||key=='A')
			{
				system("CLS");
				printf("輸入一個‘a’到‘n’的字元");
				scanf("%s",&tri);
				while (tri>'n'||tri<'a')
				{
					printf("輸入錯誤請重新輸入:");
					scanf("%s",&tri);
				}

				int numHeight = tri - 'a' + 1;
  				for(i = 1; i <= numHeight; i++)
				{
      				for(k = 0; k < numHeight - i; k++)
					{
            			printf(" ");
      				}
       				for(j = 0; j < i; j++)
					{
            			printf("%c", 'a' + j);
     				}
       				printf("\n");
				}
				system("pause");
				system("CLS");
			}
		}
	}
	
}

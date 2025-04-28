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
	system("CLS");
	while (1)
		{	//主選單 
			printf("  ~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("  I  a.畫出直角三角形  I\n");
			printf("  I  b.顯示乘法表      I\n");
			printf("  I  c. 結束           I\n");
			printf("  ~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("請輸入:");
			scanf("%s",&key);
			if (key=='a'||key=='A')//偵測字元A、a 
			{
				system("CLS");
				printf("輸入一個‘a’到‘n’的字元:");
				scanf("%s",&deta);
				while (deta>'n'||deta<'a')
				{	//a~n以外重新輸入 
					printf("輸入錯誤請重新輸入:");
					scanf("%s",&deta);
				}

				int numHeight = deta - 'a' + 1;//直角三角形 
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
				system("CLS");//回到主選單 
			}
			if (key=='B'||key=='b')//偵測字元B、b 
			{
				system("CLS");
				printf("輸入一個1~9的整數n:");
				scanf("%d",&detb);
				for (i=1;i<=detb;i++)//乘法表 
				{
					for (j=1;j<=detb;j++)
					{
						printf("%d*%d=%2d ",j,i,i*j);
					}
					printf("\n");
				}
				system("pause");
				system("CLS");//回到主選單 
			}
			if (key=='C'||key=='c')//偵測字元C、c 
			{
				printf("Continue? (y/n)");
				scanf("%s",&yn);
				while (yn!='Y'&&yn!='y'&&yn!='N'&&yn!='n')//判斷大小寫y,n 
				{
					printf("輸入錯誤請重新輸入:");
					scanf("%s",&yn);					
				}
				if (yn=='y'||yn=='Y')//Y回到主選單 
				{
					system("CLS");
					continue; 
				}
				else if (yn=='n'||yn=='N')//n結束 
				{
					return 0;
				}
				
			}
		}
	
}

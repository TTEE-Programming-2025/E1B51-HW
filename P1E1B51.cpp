#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,k,password;
    char ch;
    printf("     ___\n");//6��26��ӤH����e�� 
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
	printf("�п�J�K�X:");
	scanf("%d",&password);
	system("CLS");
	if (password==2024)//�P�_�K�X 
	{	//�D��� 
		printf("  -------------------------------\n");
		printf(" / ��A��...��Z�� : Uppercase         \\\n");
		printf("/  ��a��...��z�� : Lowercase          \\\n");
		printf("\\  ��0��...��9�� : Digit              /\n");
		printf(" \\ Otherwise : Your name         /\n");
		printf("  -------------------------------\n");
		printf("    �п�J�@�Ӧr��:");
		scanf(" %c",&ch);
		if (ch>='A'&&ch<='Z')//�P�_�r��A~Z 
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
		else//��L�r����X�Z�Ůy���õ����{�� 
		{
			printf("E1B51���H�w");
			return 0;
		}
}
	else//�K�X���~�����{�� 
	{
		system("CLS");
		printf("�K�X���~\a");
		return 0;
	}
	/*�o���@�~�ڻ{���̳·Ъ��a��O�b�ӤH����]�p���a��,
	  �ѩ�printf("")�������ഫ��ƪ�,�ϧڪ�ܦh�ɶ��b
	  ����W,�u�ण�_������{�����ˬd���S���n���C*/ 
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
int i,j,password,wrong=0;
struct student {
    char name[100];
    char num[100];
    int mscore;
    int pscore;
    int escore;
    float avg;
};
// d�����Ƨ�
void sortByAverage(struct student data[], int ppl) {
    struct student sorted[10];
    
    //�ƻs��l���
    for (i = 0; i < ppl; i++) {
        sorted[i] = data[i];
    }

    //�Ƨ�
    for (i = 0; i < ppl - 1; i++) {
        for (j = 0; j < ppl - i - 1; j++) {
            if (sorted[j].avg < sorted[j + 1].avg) {
                struct student temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }

    // ��ܱƧǫᦨ�Z
    printf("�W��  �m�W    �Ǹ�   �ƾ�  ���z  �^��  ����\n");
    for (i = 0; i < ppl; i++) {
        printf("%2d    %s  %s  %d  %d  %d  %.1f\n",
               i + 1,
               sorted[i].name,sorted[i].num,
               sorted[i].mscore,sorted[i].pscore,
               sorted[i].escore,sorted[i].avg);
    }

    system("pause");
    system("CLS");
}
// �ˬd���Z�O�_�X�k
void checkScore(int *score) {
    while (*score < 0 || *score > 100) {
        printf("���Z�ݤ��� 0 ~ 100�A�Э��s��J: ");
        scanf("%d", score);
    }
}

// �p��Ҧ��ǥͪ�����
void calculateAverage(struct student data[], int ppl) {
    for (i = 0; i < ppl; i++) {
        data[i].avg = (data[i].mscore + data[i].pscore + data[i].escore) / 3.0;
    }
}

// ��J�ǥ͸��
int enterGrades(struct student data[]) {
    int ppl, i, j, k;
    do {
        printf("��J 5~10 ���ǥͤH��: ");
        scanf("%d", &ppl);
        if (ppl < 5 || ppl > 10)
            printf("��J���~�ЦA����J\n");
    } while (ppl < 5 || ppl > 10);

    for (i = 0; i < ppl; i++) {
        printf("��J�� %d ��ǥͪ��m�W: ", i + 1);
        scanf("%s", data[i].name);

        do {
            printf("��J�� %d ��ǥͪ��Ǹ�(6���): ", i + 1);
            scanf("%s", data[i].num);
            for (j = 0; data[i].num[j] != '\0'; j++);
            if (j != 6) {
                printf("�Ǹ��ݬ�6��A�Э��s��J�C\n");
                continue;
            }

            int duplicate = 0;
            for (k = 0; k < i; k++) {
                if (strcmp(data[i].num, data[k].num) == 0) {
                    printf("�Ǹ����ơA�Э��s��J�C\n");
                    duplicate = 1;
                    break;
                }
            }
            if (!duplicate && j == 6)
                break;
        } while (1);

        printf("��J�ƾǦ��Z: ");
        scanf("%d", &data[i].mscore);
        checkScore(&data[i].mscore);

        printf("��J���z���Z: ");
        scanf("%d", &data[i].pscore);
        checkScore(&data[i].pscore);

        printf("��J�^�妨�Z: ");
        scanf("%d", &data[i].escore);
        checkScore(&data[i].escore);
    }

    calculateAverage(data, ppl);
    return ppl;
}
// ��ܦ��Z
void displayGrades(struct student data[], int ppl) {
    printf("�m�W  �Ǹ�   �ƾ�  ���z  �^��  ����\n");
    for (i = 0; i < ppl; i++) {
        printf("%s  %s  %d  %d  %d  %.1f\n",
               data[i].name, data[i].num,
               data[i].mscore, data[i].pscore,
               data[i].escore, data[i].avg);
    }
}

// �j�M�ǥ�
void searchStudent(struct student data[], int ppl) {
    char searchname[100];
    int found = 0;
    printf("��J�j�M�ǥͩm�W: ");
    scanf("%s", searchname);

    for (i = 0; i < ppl; i++) {
        if (strcmp(searchname, data[i].name) == 0) {
            printf("�m�W  �Ǹ�   �ƾ�  ���z  �^��  ����\n");
            printf("%s  %s  %d  %d  %d  %.1f\n",
                   data[i].name, data[i].num,
                   data[i].mscore, data[i].pscore,
                   data[i].escore, data[i].avg);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("�䤣��Ӿǥ͡C\n");
    }
    system("pause");
    system("CLS");
}


void checkScore(int *score);
void calculateAverage(struct student data[], int ppl);
int enterGrades(struct student data[]);
void displayGrades(struct student data[], int ppl);
void searchStudent(struct student data[], int ppl);

int main() {
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
    struct student data[MAX_STUDENTS];
    char key;
    int ppl = 0;

    while (1) {
        printf("------------[Grade System]----------\n");
        printf("| a. Enter student grades          |\n");
        printf("| b. Display student grades        |\n");
        printf("| c. Search for student grades     |\n");
        printf("| d. Grade ranking                 |\n");
        printf("| e. Exit system                   |\n");
        printf("------------------------------------\n");
        printf("�п�J: ");
        scanf(" %c", &key);

        if (key == 'a') {
            system("CLS");
            ppl = enterGrades(data);
            system("CLS");
        } else if (key == 'b') {
            system("CLS");
            displayGrades(data, ppl);
            system("pause");
            system("CLS");
        } else if (key == 'c') {
            system("CLS");
            searchStudent(data, ppl);
        } else if (key == 'd') {
            system("CLS");
   			sortByAverage(data, ppl);
        }
    }
    return 0;
}

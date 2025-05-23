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
// d部分排序
void sortByAverage(struct student data[], int ppl) {
    struct student sorted[10];
    
    //複製原始資料
    for (i = 0; i < ppl; i++) {
        sorted[i] = data[i];
    }

    //排序
    for (i = 0; i < ppl - 1; i++) {
        for (j = 0; j < ppl - i - 1; j++) {
            if (sorted[j].avg < sorted[j + 1].avg) {
                struct student temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
        }
    }

    // 顯示排序後成績
    printf("名次  姓名    學號   數學  物理  英文  平均\n");
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
// 檢查成績是否合法
void checkScore(int *score) {
    while (*score < 0 || *score > 100) {
        printf("成績需介於 0 ~ 100，請重新輸入: ");
        scanf("%d", score);
    }
}

// 計算所有學生的平均
void calculateAverage(struct student data[], int ppl) {
    for (i = 0; i < ppl; i++) {
        data[i].avg = (data[i].mscore + data[i].pscore + data[i].escore) / 3.0;
    }
}

// 輸入學生資料
int enterGrades(struct student data[]) {
    int ppl, i, j, k;
    do {
        printf("輸入 5~10 的學生人數: ");
        scanf("%d", &ppl);
        if (ppl < 5 || ppl > 10)
            printf("輸入錯誤請再次輸入\n");
    } while (ppl < 5 || ppl > 10);

    for (i = 0; i < ppl; i++) {
        printf("輸入第 %d 位學生的姓名: ", i + 1);
        scanf("%s", data[i].name);

        do {
            printf("輸入第 %d 位學生的學號(6位數): ", i + 1);
            scanf("%s", data[i].num);
            for (j = 0; data[i].num[j] != '\0'; j++);
            if (j != 6) {
                printf("學號需為6位，請重新輸入。\n");
                continue;
            }

            int duplicate = 0;
            for (k = 0; k < i; k++) {
                if (strcmp(data[i].num, data[k].num) == 0) {
                    printf("學號重複，請重新輸入。\n");
                    duplicate = 1;
                    break;
                }
            }
            if (!duplicate && j == 6)
                break;
        } while (1);

        printf("輸入數學成績: ");
        scanf("%d", &data[i].mscore);
        checkScore(&data[i].mscore);

        printf("輸入物理成績: ");
        scanf("%d", &data[i].pscore);
        checkScore(&data[i].pscore);

        printf("輸入英文成績: ");
        scanf("%d", &data[i].escore);
        checkScore(&data[i].escore);
    }

    calculateAverage(data, ppl);
    return ppl;
}
// 顯示成績
void displayGrades(struct student data[], int ppl) {
    printf("姓名  學號   數學  物理  英文  平均\n");
    for (i = 0; i < ppl; i++) {
        printf("%s  %s  %d  %d  %d  %.1f\n",
               data[i].name, data[i].num,
               data[i].mscore, data[i].pscore,
               data[i].escore, data[i].avg);
    }
}

// 搜尋學生
void searchStudent(struct student data[], int ppl) {
    char searchname[100];
    int found = 0;
    printf("輸入搜尋學生姓名: ");
    scanf("%s", searchname);

    for (i = 0; i < ppl; i++) {
        if (strcmp(searchname, data[i].name) == 0) {
            printf("姓名  學號   數學  物理  英文  平均\n");
            printf("%s  %s  %d  %d  %d  %.1f\n",
                   data[i].name, data[i].num,
                   data[i].mscore, data[i].pscore,
                   data[i].escore, data[i].avg);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("找不到該學生。\n");
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
        printf("請輸入: ");
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

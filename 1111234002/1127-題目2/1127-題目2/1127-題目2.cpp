/*題目2:建立一個整數二維陣列score與字元二維陣列names[5][10]，第0列存放學生的學號，
第1、2列存放他們的成績，第3列存放他們平均，字元二維陣列存放學生姓名，
以鍵盤輸入他們的學號成績與姓名，並建立一個副程式sort_score()，
將score陣列、學生姓名字二維陣列以及陣列長度傳給sort_score()，由它排序並計算全班中位數後，
將中位數(整數型態)傳回，並由主程式印出排序後的學號、學生姓名與成績和中位數。*/

#include <stdio.h>
#include <string.h>

// **副程式宣告**
int sort_score(int score[4][5], char names[5][10], int length);

int main() {
    int score[4][5]; // 分數陣列（0: 學號, 1: 成績1, 2: 成績2, 3: 平均分數）
    char names[5][10]; // 姓名陣列（5 個學生，每人最多 10 字元）
    int students = 5; // 固定學生數量

    // **輸入資料**
    printf("請輸入學生的學號、姓名、兩科成績：\n");
    for (int i = 0; i < students; i++) {
        printf("學生 %d：\n", i + 1);
        printf("學號：");
        scanf_s("%d", &score[0][i]); // 學號存入第 0 列
        printf("姓名：");
        scanf_s("%s", names[i],10); // 姓名存入字元陣列 指定大小為10
        printf("成績 1：");
        scanf_s("%d", &score[1][i]); // 第 1 科成績存入第 1 列
        printf("成績 2：");
        scanf_s("%d", &score[2][i]); // 第 2 科成績存入第 2 列
        // **計算平均分數存入第 3 列**
        score[3][i] = (score[1][i] + score[2][i]) / 2;
    }

    // **呼叫副程式進行排序並取得中位數**
    int median = sort_score(score, names, students);

    // **輸出結果**
    printf("\n排序後的學生資料如下：\n");
    printf("學號\t姓名\t成績1\t成績2\t平均分數\n");
    for (int i = 0; i < students; i++) {
        printf("%d\t%s\t%d\t%d\t%d\n",
            score[0][i], names[i], score[1][i], score[2][i], score[3][i]);
    }

    printf("\n全班的中位數為：%d\n", median);

    return 0;
}

// **副程式定義**
int sort_score(int score[4][5], char names[5][10], int length) {
    // 用冒泡排序法根據平均分數排序
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (score[3][j] < score[3][j + 1]) { // 平均分數降序排列
                // **交換分數資料**
                for (int k = 0; k < 4; k++) {
                    int temp = score[k][j];
                    score[k][j] = score[k][j + 1];
                    score[k][j + 1] = temp;
                }
                // **交換姓名資料**
                char temp_name[10];
                strcpy_s(temp_name, names[j]); //strcpy 是 C 標準庫中的一個函數，用來將一個字串（以空字符 \0 結尾的字符陣列）複製到另一個字串。
                strcpy_s(names[j], names[j + 1]);
                strcpy_s(names[j + 1], temp_name);
            }
        }
    }

    // 計算中位數
    if (length % 2 == 1) {
        return score[3][length / 2]; // 如果學生數是奇數，取中間一位的平均
    }
    else {
        return (score[3][length / 2 - 1] + score[3][length / 2]) / 2; // 如果是偶數，取中間兩位平均
    }
}

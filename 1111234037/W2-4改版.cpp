#include <stdio.h>


struct stuData {
    char Name[50];  
    double math;  
    double computer;
};

int main()
{
    FILE* fp; 
    char fname[20] = "students.txt";
    struct stuData stu1, stu2, stu3;

 
    printf("��J�ǥ�1���m�W�G");
    scanf_s("%49s", stu1.Name, sizeof(stu1.Name));
    printf("��J�ǥ�1���ƾǦ��Z�G");
    scanf_s("%lf", &stu1.math);
    printf("��J�ǥ�1���p������Z�G");
    scanf_s("%lf", &stu1.computer);

   
    printf("��J�ǥ�2���m�W�G");
    scanf_s("%49s", stu2.Name,sizeof(stu2.Name));
    printf("��J�ǥ�2���ƾǦ��Z�G");
    scanf_s("%lf", &stu2.math);
    printf("��J�ǥ�2���p������Z�G");
    scanf_s("%lf", &stu2.computer);

  
    printf("��J�ǥ�3���m�W�G");
    scanf_s("%49s", stu3.Name,sizeof(stu3.Name));
    printf("��J�ǥ�3���ƾǦ��Z�G");
    scanf_s("%lf", &stu3.math);
    printf("��J�ǥ�3���p������Z�G");
    scanf_s("%lf", &stu3.computer);

    if (fopen_s(&fp, fname, "w") != 0) {  
        printf("���~: �ɮ׶}�ҿ��~..\n");
        return 1;
    }

    printf("�}�l�g�J�ɮ�%s..\n", fname);
  
    fprintf(fp, "%s,%.2f,%.2f\n", stu1.Name, stu1.math, stu1.computer);
    fprintf(fp, "%s,%.2f,%.2f\n", stu2.Name, stu2.math, stu2.computer);
    fprintf(fp, "%s,%.2f,%.2f\n", stu3.Name, stu3.math, stu3.computer);
    printf("�g�J�ɮ׵���!\n");
    fclose(fp);

    if (fopen_s(&fp, fname, "r") != 0) { 
        printf("���~: �ɮ׶}�ҿ��~..\n");
        return 1;
    }

    printf("�ɮפ��e: \n");
    char line[100];
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    fclose(fp);

    return 0;
}

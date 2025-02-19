//�N�ǥ͵��c��J�d�ҵ{���X���A�קאּ�إ�100���ťվǥ͸��
// Fig. 11.10: fig11_10.c
// Creating a random-access file sequentially
#include <stdio.h>

// studentData structure definition            
typedef struct studentData { //�w�q���c
    int ID; 
    char Name[20];        
    int math, comput;    
    float AVG;               
} Student;

int main(void)
{
    FILE* studentPtr = NULL;  //�Ĥ@�B:�إ��ɮ׫���

    // fopen ���}�ɮסF�p�G�L�k�}���ɮסA�h�h�X�{��
    if ((fopen_s(&studentPtr, "students.dat", "wb")) != 0) {  //�ĤG�B:�}���ɮ�
        puts("File could not be opened.");
    }
    else {
        // �Ы� studentData ���c�A�èϥιw�]�Ȫ�l��
        Student blankStudent = { 0, "",0,0,0.0};

        // ��X 100 ���ťժ��ǥ͸�ƨ��ɮפ�
        for (unsigned int i = 1; i <= 100; ++i) {
            fwrite(&blankStudent, sizeof(Student), 1, studentPtr); //�ĤT�B:�s/���ɮ�
        }

        fclose(studentPtr); //�ĥ|�B:�����ɮ�
    }
}

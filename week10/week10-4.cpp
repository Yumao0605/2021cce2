#include <stdio.h>
#include <vector>
#include <algorithm>
class Student  ///(�j�g)�ǥ� �̭���
{
    public:
    char name[30]; ///�W�r(30�r��)
    int grade; ///����
};
///char anme[100][30], tempName[30];
///int grade[100];
Student student[100];
bool compare( Student a, Student b )
{
    return(a.grade > b.grade);
}
int main()
{
    FILE * fin = fopen("input.txt","r");
    int N;
    fscanf( fin, "%d", &N);

    std::vector<Student> student(20);
    for(int i=0;i<N;i++)
    {
        fscanf( fin, "%s %d", student[i].name, &student[i].grade);
    }

    std::sort(student.begin(), student.end(), compare);

    for(int i=0;i<N;i++)
    {
        printf("%s %d\n", student[i].name, student[i].grade);
    }
}

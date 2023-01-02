#include<stdio.h>
struct student{
    char name[50];
    int roll;
    float marks;
};
void print(char name[], int roll, float marks){
    printf("%s %d %.f",name, roll, marks);
}

int main()
{
    struct student s1= {"nick", 50, 72.5};
    print(s1.name, s1.roll, s1.marks);
}
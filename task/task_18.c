/*Grades are computed using a weighted average. 
Suppose that the written test counts 70%,  lab exams 20% and assignments 10%.*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int Written_test,Lab_exam,Assignments;
    float grade;
    printf("Enter marks scored by the students(out of 100):\n1.Written Test\n2.Lab Exams\n3.Assignments\n");
    scanf("%d%d%d",&Written_test,&Lab_exam,&Assignments);
    grade=Written_test*0.7+Lab_exam*0.2+Assignments*0.1;
    printf("Grade of the Student:%.2f",grade);
}
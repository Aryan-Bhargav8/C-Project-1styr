//C PROJECT
/*Student Management System:
Create a program that manages student data,
including their name, roll number, marks, and grades.*/

#include <stdio.h>//standard input output header file
#include <string.h>//string header file
int main(){
    FILE *fp;
    int roll,i,N;
    float marks;
    char grades,name[30],filename[20];
    printf("Input file name:\n");
    scanf("%s",filename);
    fp=fopen(filename,"w");
    printf("Input no of Student:\n");
    scanf("%d",&N);
    printf("Input Student Details:\n");
    printf("NAME      ROLL       MARKS      GRADES \n");
    for(i=1;i<N;i++){
        fscanf(stdin,"%s %d %f %c\n",name,&roll,&marks,&grades);
        fprintf(fp,"%s %d %.2f %c\n",name,roll,marks,grades);
    }
    fclose(fp);
    fp=fopen(filename,"r");
    printf("NAME      ROLL       MARKS       GRADES \n");
    for(i=0;i<N;i++){
        fscanf(fp,"%s %d %f %c\n",name,&roll,&marks,&grades);
        fprintf(stdout,"%-8s %7d %8.2f %8c\n",name,roll,marks,grades);
    }
    fclose(fp);
    return 0;
}
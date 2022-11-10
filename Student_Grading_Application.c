#include <stdio.h>
float meanMark;
char grade (float s);
int main (){
    int length;
    int sum = 0;
printf("Enter the total number of students:\n");
scanf("%d",&length);
float marks [length];
printf("Start entering their marks");
for (int i=0; i< length; ++i){
    printf("\nStudent %d:\t", i+1);
    scanf("%f", & marks[i]);
}
//To print array of marks
for (int i=0; i<length; ++i) {
    printf("\nStudent %d:\t %.1f", i+1, marks[i]);
    sum+=marks[i]; //Calculation of total marks
}

//Calculation of mean
meanMark= sum/length;
printf("\nThe mean mark of students is %.2f\n", meanMark);

float temp =0;
for (int i; i<length; ++i){
    for (int j= i+1; j<length; ++j){
        if (marks[i]> marks[j]){
            //switch positions
            temp = marks[i];
            marks[i]= marks [j];
            marks [j] = temp;
        }
    }
}
printf("The marks in ascending order is as follows:\n");

for(int n=0; n<length; ++n){
    printf("%.1f\t", marks[n]);
}

//MULTIDIMENSIONAL ARRAYS
float studentResults[7][2]={3,57.45,2,69.29,2,71.32,4,65.05,3,75.67,3,48.65,1,88.21};
printf("\nCREDIT\t|SCORE\t|GRADE\t|\n");
printf("\t|\t|\t|\n");
for (int i=0; i<7; ++i){
    for(int j=0; j<2; ++j){
        printf("%.2f\t|", studentResults[i][j]);
        if(j%2==1){
           printf("%c\t|", grade(studentResults[i][j]));
            printf("\n\t|\t|\t");
        }
    }
    printf("\n");
}
//To calculate CWA:
float weightedsum = 0.0, totalcredits = 0.0;
    for(int i=0; i<7; ++i){
    weightedsum = weightedsum + (studentResults[i][0] * studentResults[i][1]);
    totalcredits += studentResults[i][0];
    }
float cwa = weightedsum/totalcredits;
printf("\ncwa = %.2f\n", cwa);
 return 0;}

 char grade(float s){
            if ((s>=70)&&(s<=100))
                return 'A';

            else if((70>s)&& (s>=60))
                    return'B';

            else if((60>s)&&(s>=50))
                    return 'C';

            else if((50>s)&&(s>=40))
                    return'D';

            else if((40>s)&&(s>=0))
                    return'F';

            else
                return 'I';
     }


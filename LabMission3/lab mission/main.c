#include "header.h"

int main(int argc, char** argv)
{
    // convert student id from string to integer
    int student_id = atoi(argv[1]);

    char student_name[100];
    int student_section;

    // open student info file
    FILE* fp;
    fp = fopen("data//student_info.txt", "r");

    // read student info until it finds the student_id
    // imepment you code here
    // hint: you can use fscanf(fp, "%s %s %s\n", buffer1, buffer2, buffer3)
    // hint: use atoi(str) function to convert string to integer
    
    //  printf("There is no student with the student ID: %d", student_id);

    char buffer1[30];
    char buffer2[30];
    char buffer3[30];
    int temp;
    int idx1 = 0, idx2 = 0; 
    while(100){
        temp = fscanf(fp, "%s %s %s\n", buffer1, buffer2, buffer3);
        // student_id = atoi(buffer1);
         if(atoi(buffer1) == student_id ){
             strcpy(student_name, buffer2);
             student_section = atoi(buffer3);
            //  strncpy(student_section, buffer3, strlen(buffer3));    
         }

         if(atoi(buffer3) == 1){
               idx1++;
               if(student_id == atoi(buffer1)){
                   break;
               }
         }

        else if(atoi(buffer3) == 2){
                idx2++;
                if(student_id == atoi(buffer1)){
                   break;
               }
        }
         if(temp<=0) break;
    }
    // printf("%d, %d", idx1, idx2);
    //  printf("%s\n", buffer1);
    fclose(fp);

    // Print the (Mission 1) result
    printf("Student ID: %d, Name: %s, Section Number: %d\n", 
            student_id, student_name, student_section);

    
    // // open section score
    if (student_section == 1)
    {
        fp = fopen("data//scores_section1.dat", "r");
    }
    else
    {
        fp = fopen("data//scores_section2.dat", "r");
    }
    
    // read scores and copy values to int array
    const int num_sec_students = 50;
    int sec_scores[num_sec_students];
    int id[num_sec_students];

    fread(sec_scores, sizeof(int), 50, fp);
    // for(int i = 0 ; i< 50; i++){
    //     printf("idx = > %d score => %d\n" , i, sec_scores[i]);
    // }
    // implemnt you code here
    // hint: use fread() function to read binary file
    
    fclose(fp);

    // calculate mean and variance
    double sec_mean;
    double sec_var;
    // // impement you code here
     sec_mean = calMean(sec_scores, 50);
     sec_var  = calVariance(sec_scores, 50);

    // Print the (Mission 2) result
    printf("The average score and s.d of Section %d ", student_section);
    printf("are %.2f and %.2f, respectively.\n", sec_mean, sqrt(sec_var));

    // get student's score
    int student_score;
    
    if(student_section == 1){
       student_score = sec_scores[idx1-1];
    }
    else 
     student_score = sec_scores[idx2-1];

    // implement you code here
    // note that the student info and scores 
    // are sorted according to increasing order of student id

    // sort scores
    sortArray(sec_scores, num_sec_students);

    // find student's rank in the section
    int student_rank = findRank(student_score, sec_scores, num_sec_students);

    // Print the (Mission 3) result
    printf("The student's score is %d and the rank is %d in Section %d.\n",
        student_score, student_rank, student_section);

    return 0;
}
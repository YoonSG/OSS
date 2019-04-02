#include <stdio.h>
#include <string.h>

int main(){

int num_students = 0;
const int max_student_num = 100;
const int max_name_length = 30;
char names[max_student_num][max_name_length];

FILE* fp;
// fp = fopen("names.txt", "r");
// char buffer[max_name_length]; // for first name
// char buffer2[max_name_length]; // for last name
// for (int id=0; id<max_student_num; id++){
//     int tempLen = 0;

//     if (fscanf(fp, "%s %s\n", buffer, buffer2) > 0)
//     {
//         tempLen = strlen(buffer)+strlen(buffer2);
//         if ( tempLen >= max_name_length )
//         continue;

//         strncpy(names[id], buffer, strlen(buffer)); // add first name
//         names[id][strlen(buffer)] = ' '; // add space
//         strncpy(&(names[id][strlen(buffer)+1]), buffer2, strlen(buffer2)); // add last name
//         names[id][tempLen+1] = 0x00; // add NULL to the end of string
//         num_students++;
//     }
//     else break;
// }
//     fclose(fp);


//     printf("Total Number of Students: %d\n", num_students);
//     printf("Their Names: \n");
//     for(int id = 0; id< num_students; id++){
//         printf("%s\n", names[id]);
//     }

fp = fopen("names.txt", "a");
fputs("OSS Ace\n", fp);
fclose(fp);
return 0;

}
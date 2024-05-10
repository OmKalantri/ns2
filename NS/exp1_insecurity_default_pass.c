#include <stdio.h>
#include <string.h>

int main()
{
char username[15];
char password[12];
printf("Enter your username : ");
scanf("%s",&username);
printf("\nEnter your password : ");
scanf("%s",&password);
if(strcmp(username,"admin")==0){
if(strcmp(password,"admin")==0){
printf("\nWelcome Login Success!");
}else{
printf("\nWrong password");
}
}else{
printf("\nUser doesn't exist");
}
return 0;
}
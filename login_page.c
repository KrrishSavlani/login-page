#include<stdio.h>
#include<conio.h>

char f_name[10] , m_name[10] , l_name[10]  ;

// lets make the function of taking input for password

void password()

{
  long int password , re_pass ;
  do
    {  
       clrscr();
       
       printf("%s %s %s " , f_name , m_name , l_name);
 
       printf("\nenter 6 digit password : " );
       scanf("%d" , &password);
 
    }while(password < 100000 || password > 999999 );
 
     //re-enter the password
    do
    {
     printf("\nReenter your password :- ");
     scanf("%d",&re_pass);
 
    }while(re_pass =! password);
 
    getch();
}
 




// lets make the function for taking input for name


void name()
{
    int rename;
    clrscr();
    do 
    {
           clrscr();
           printf("first name :- ") ;
           scanf("%s" ,&f_name);

           printf("middle name :-");
           scanf("%s" , &m_name);

           printf("last name :- ");
           scanf("%s",l_name);
    
           clrscr ();
    
          printf("%s %s %s " , f_name ,m_name , l_name );
          printf("\nif there is an any mistake in your name type 1 , else 0 :-");
        
         scanf("%d" ,&rename);
        }while(rename == 1 );
  
 getch();
}

int main() {

 name();
 password();
 clrscr();
 printf("Hello %s , you have successfully completed sign in process" , f_name);
 
 getch();
 return 0;
}

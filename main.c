#include<function.h>

int main(void)
{
    
    char key;


    // Function call
    //calculator_operations();


    
        //printf("\n");
        scanf("%s : ", &key);
        //printf("enter the operation: ");


        //Calc_oprn=getche();

        switch(key)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '?': modulus();
                      break;

            case '!': factorial();
                      break;


            default : system("cls");
                       break;

    printf("\n**********You have entered unavailable option");
   

        }
    return 0;
    }



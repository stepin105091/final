#include<function.h>

int main()
{
    int X=1;
    char Calc_oprn;


    // Function call
    //calculator_operations();


    while(X)
    {
        printf("\n");
        //printf("%s : ", KEY);
        printf("enter the operation: ");


        Calc_oprn=getche();

        switch(Calc_oprn)
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

    printf("\n**********You have entered unavailable option");
   

        }
    }
}


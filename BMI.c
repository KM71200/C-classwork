//Calculate BMI

#include <stdio.h>
int main()
{
    float ht , wt , BMI;
    printf("Enter Height in Metres:");
    scanf("%f",&ht);

    printf("Enter Weight in Kg:");
    scanf("%f",&wt);

    BMI= wt/(ht*ht);


    if (wt>0 && ht>0){

        if (BMI <= 15){
        printf("Stravation");
        }

        else if (BMI>=15.1 && BMI<=17.5){
            printf("Anorexic");
        }

        else if (BMI>=17.6 && BMI<=18.5){
            printf("Underweight");

        }

        else if (BMI>=18.6 && BMI<=24.9){
            printf("Ideal");
        }

        else if (BMI>=25 && BMI<=25.9){
            printf("Overweight");

        }

        else if (BMI>=30 && BMI<=39.9 ){
            printf("Obese");
        }

        else if (BMI>=40){
            printf("Morbidity Obese");
        }

    }   

    else {
        printf("Enter Positive Height and Weight");
    }
    return 0;

}

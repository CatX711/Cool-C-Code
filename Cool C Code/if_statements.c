#include <stdio.h>
#include <string.h>

int main(){

    // i do not currently understand the getchars, however,
    // after consulting the internet, it fixes the program so it
    // accepts the user's name. i still have no clue how it works lmao

    int age;
    long long int card_num;
    long long int phone_num;
    char fullname[25]; 


    printf("\nEnter your age: ");
    scanf("%d", &age);
    getchar(); // consume the newline character from the input buffer

    // if age is greater than or equal to 18
    if(age >= 18){
        printf("\nYou are eligible for receiving a credit card.\n\n");
        printf("Let's start with your credit card number: ");
        scanf("%lld", &card_num);

        printf("\nGreat job! Your credit card number is now %lld!", card_num);
        printf("\n\nWhat is your full name? ");
        getchar(); // consume the newline character left in the input buffer
        fgets(fullname, 25, stdin);
        fullname[strlen(fullname)-1] = '\0';
        printf("\nOkay. Your name is %s", fullname);
        printf("\n\nWhat is your phone number? ");
        scanf("%lld", &phone_num);
        printf("\nAlright! Here is your complete credit card info.");
        printf("\n\n\nCredit Card Information:\n----------------------------\nName: %s\nAge: %d\nPhone Number: %lld\n\nIMPORTANT INFO, DO NOT SHARE WITH ANYONE:\nCredit Card Number: %lld", fullname, age, phone_num, card_num);

    }
    else if(age == 0){
        printf("You can't sign up for a credit card. You were just born!");
    }
    else if(age < 0){
        printf("Stop messing around!");
    }
    else{ // if all above statements are false, run this
        printf("You are too young for a credit card!");
    } 

    return 0;
}

#include <stdio.h>

int main(){

    /* switch = A more efficient alternative to using many "else if" statements
                allows a value to be tested fir equality against many cases.

    */   
    
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);


    switch (grade){
        case 'A': // always use '' for switch cases
            printf("Perfect!\n");
            break; // the reason we use breaks is to exit the switch. if we dont have any breaks, it will run all of the code in all of the cases at the same time.
        case 'B': // multiple cases are essentially "else if" statements
            printf("\nYou did good! Try and shoot for A next time!\n");
            break;
        case 'C':    
            printf("\nYou did okay! Go for B or higher next time!\n");
            break;
        case 'D':
            printf("\nHey, at least it's not an F. I doubt your parents will be happy though!\n");
            break;
        case 'F': 
            printf("\nUh oh, that ain't good.\n"); 
            break;
        case 'H':
            printf("\nHow did you even get this?! H (Horrible)\n doesn't even exist!!!\n");
            break;
        case 'Z':
            printf("\nCome on now, your grade was THAT low?\n");
            break;    
        default: // a switch version of an else statement
            printf("\nHey! That's not a grade >:( \nPlease enter only valid grades.\n\n"); 
            // ! for some reason it only creates a new line when using 2 \n's
            // * update: chatgpt explained it to me lmao. here's the reason
            /*
            
            The reason why the line printf("\nHey! That's not a grade >:( \nPlease enter only valid grades.\n\n"); only creates a new line
            when using two \n's is that the first \n character is a newline character, which moves the 
            cursor to the next line, but does not create a blank line.
            The second \n character creates a second newline character, which moves the cursor 
            to the next line again and creates a blank line.
            So, when you use only one \n, it creates a newline character
            but does not create a blank line, which means that the next line of output will appear
            immediately below the previous one. By using two \n's, you create an additional newline character that creates
            a blank line, giving the appearance of a more clear separation between lines of output.


            Wow, I had no clue
            */
    }


    return 0;
}
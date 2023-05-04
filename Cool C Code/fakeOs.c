#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

// yo, this is pretty cool :D

void do_hello() {
    printf("Hello there!\n");
}

void do_goodbye() {
    printf("\nGoodbye!\n\n");
}

void do_help() {
    printf("\nAvailable commands:\n-----------------------------------------\n");
    printf("hello - say hello\n");
    printf("power down - say goodbye and exit\n");
    printf("help - display this help message\n");
    printf("date - display the current date and time\n\n");
}

void do_date() {
    time_t current_time;
    struct tm* time_info;
    char time_string[80];

    time(&current_time);
    time_info = localtime(&current_time);

    strftime(time_string, sizeof(time_string), "%Y-%m-%d %H:%M:%S", time_info);

    printf("The current date and time is: %s\n\n", time_string);
}

int main() {
    char input[100]; // initialize input to an empty string

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nWelcome to FakeOS!\n");
    printf("Type 'help' for a list of available commands.\n");

    while(true) {
        printf("> ");

        // Read in entire line of input
        fgets(input, sizeof(input), stdin);

        // Remove trailing newline character from input
        input[strcspn(input, "\n")] = 0;

        // Parse command from input string
        if (strcmp(input, "hello") == 0) {
            do_hello();
        }
        else if (strcmp(input, "power down") == 0) {
            do_goodbye();
            break;
        }
        else if (strcmp(input, "help") == 0) {
            do_help();
        }
        else if (strcmp(input, "date") == 0) {
            do_date();
        }
        else {
            printf("Invalid command. Type 'help' for a list of available commands.\n\n");
        }
    }

    return 0;

}


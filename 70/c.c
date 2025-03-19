#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to convert input to lowercase and remove extra spaces
void clean_input(char *str)
{
    int i = 0, j = 0;
    // Convert to lowercase
    while (str[i])
    {
        str[i] = tolower(str[i]);
        i++;
    }
    // Trim leading spaces
    while (str[j] == ' ')
    {
        j++;
    }
    // Shift characters left
    int k = 0;
    while (str[j])
    {
        str[k++] = str[j++];
    }
    str[k] = '\0'; // Null-terminate

    // Trim trailing spaces
    while (k > 0 && str[k - 1] == ' ')
    {
        str[--k] = '\0';
    }
}

int main()
{
    char input[100];          // Buffer for user input
    scanf(" %[^\n]s", input); // Read full line with spaces
    clean_input(input);       // Normalize input (lowercase + trim spaces)

    // Write You're code here
    if ((strcmp(input, "hello") == 0) || (strcmp(input, "hey") == 0) || (strcmp(input, "hi") == 0))
        printf("Hello! How are you today?");
    else if ((strcmp(input, "i'm good") == 0) || (strcmp(input, "i'm fine") == 0) || (strcmp(input, "i'm okay") == 0))
        printf("That's great! What can I do for you?");
    else if ((strcmp(input, "i'm feeling sad") == 0) || (strcmp(input, "i'm upset") == 0) || (strcmp(input, "i'm not okay") == 0))
        printf("I'm here to help! Want to talk about it?");
    else if ((strcmp(input, "what's your name?") == 0) || (strcmp(input, "who are you?") == 0) || (strcmp(input, "tell me your name") == 0))
        printf("I'm ChatBot, your friendly AI assistant!");
    else if ((strcmp(input, "how's the weather?") == 0) || (strcmp(input, "tell me the weather") == 0) || (strcmp(input, "weather update?") == 0))
        printf("I can't check the weather, but I hope it's nice where you are!");
    else if ((strcmp(input, "tell me a joke") == 0) || (strcmp(input, "make me laugh") == 0) || (strcmp(input, "say something funny") == 0))
        printf("Why don’t programmers like nature? It has too many bugs!");
    else if ((strcmp(input, "give me some advice") == 0) || (strcmp(input, "motivate me") == 0) || (strcmp(input, "tell me something inspiring") == 0))
        printf("Always keep learning! Growth happens when you step out of your comfort zone.");
    else if ((strcmp(input, "goodbye") == 0) || (strcmp(input, "bye") == 0) || (strcmp(input, "see you later") == 0))
        printf("Goodbye! Have a great day!");
    else if ((strcmp(input, "bananas are cool") == 0) || (strcmp(input, "i love pizza") == 0) || (strcmp(input, "tell me about space") == 0))
        printf("I'm not sure how to respond to that, but let's talk about something else!");
}

return 0;
}

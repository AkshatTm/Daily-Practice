#include <stdio.h>

int main() {

        int num;
        scanf("%d", &num);

        int largest;
        int smallest;
        int first = 1;

        do{
            if (first){
                largest = num;
                smallest = num;
                first = 0;
            } else {
                if (num > largest){
                    largest = num;
                }
                if (num < smallest){
                    smallest = num;
                }
            }
        }while(num != 1);

        printf("%d %d\n", largest, smallest);

        


















































    // int num;
    // int largest;
    // int smallest;
    // int first = 1;

    // do {
    //     printf("Enter a number: ");
    //     scanf("%d", &num);

    //     if (first) {
    //         largest = num;
    //         smallest = num;
    //         first = 0;
    //     } else {
    //         if (num > largest) {
    //             largest = num;
    //         }
    //         if (num < smallest) {
    //             smallest = num;
    //         }
    //     }
    // } while (num != 1);

    // printf("%d %d\n", largest, smallest);

    return 0;
}
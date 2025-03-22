import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        if (num <= 1) {
            System.out.println(num + " is not a prime number");
        } else {
            int i = 2;
            boolean isPrime = true;

            while (i < num) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
                i++;
            }

            if (isPrime) {
                System.out.println(num + " is a prime number");
            } else {
                System.out.println(num + " is not a prime number");
            }
        }

        sc.close();
    }
}

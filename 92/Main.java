import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number to find square root: ");
        double num1 = sc.nextDouble();
        System.out.println("Square root: " + Math.sqrt(num1));

        System.out.print("Enter a number to find absolute value: ");
        int num2 = sc.nextInt();
        System.out.println("Absolute value: " + Math.abs(num2));

        int random = (int)(Math.random() * 100) + 1;
        System.out.println("Random number between 1 and 100: " + random);

        System.out.print("Enter base: ");
        double base = sc.nextDouble();
        System.out.print("Enter exponent: ");
        double exponent = sc.nextDouble();
        System.out.println("Power: " + Math.pow(base, exponent));

        System.out.print("Enter a decimal number to round: ");
        float decimalNum = sc.nextFloat();
        System.out.println("Rounded value: " + Math.round(decimalNum));
    }
}

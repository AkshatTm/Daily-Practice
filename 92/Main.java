import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Int to double
        System.out.print("Enter an integer: ");
        int intVal = sc.nextInt();
        double doubleVal = (double) intVal;
        System.out.println("Converted to double: " + doubleVal);

        // Double to int
        System.out.print("Enter a double: ");
        double doubleInput = sc.nextDouble();
        int intFromDouble = (int) doubleInput;
        System.out.println("Converted to int: " + intFromDouble);

        // Char to int
        System.out.print("Enter a character: ");
        char ch = sc.next().charAt(0);
        int charToInt = (int) ch;
        System.out.println("Character as int: " + charToInt);

        // Float to int
        System.out.print("Enter a float: ");
        float floatVal = sc.nextFloat();
        int intFromFloat = (int) floatVal;
        System.out.println("Converted float to int: " + intFromFloat);

        // Int to String
        System.out.print("Enter an integer to convert to String: ");
        int num = sc.nextInt();
        String str = Integer.toString(num);
        System.out.println("Integer as String: " + str);
    }
}

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of array: ");
        int size = sc.nextInt();

        int[] arr = new int[size];
        System.out.println("Enter the elements of array:");
        for (int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter the element to count: ");
        int target = sc.nextInt();

        int count = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                count++;
            }
        }

        System.out.println("Element " + target + " appears " + count + " times.");
    }
}

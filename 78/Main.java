public class Main {
    public static void main(String[] args) {
        for (int i = 1; i <= 100; i++) {
            if (i % 7 == 0) {
                System.out.println("First number divisible by 7 between 1 to 100 is: " + i);
                break;
            }
        }
    }
}

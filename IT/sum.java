import java.util.Scanner;

public class sum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // User input
        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        int evenSum = 0;
        int oddSum = 0;

        // Loop from 1 to n
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                evenSum += i; // even number
            } else {
                oddSum += i; // odd number
            }
        }

        // Output
        System.out.println("Sum of even numbers till " + n + " = " + evenSum);
        System.out.println("Sum of odd numbers till " + n + " = " + oddSum);
    }
}

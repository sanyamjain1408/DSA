import java.util.Scanner;

public class insertionsort {
    public static void main(String[] arr){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Size of Array:");
        int n = sc.nextInt();

        int[] a = new int[n]; 

        System.out.println("Enter the Elements of Array:");
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

   
        for (int i = 1; i < n; i++) {
            int key = a[i];
            int j = i - 1;

            
            while (j >= 0 && a[j] > key) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = key;
        }

        System.out.println("Sorted Array:");
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
    }
}

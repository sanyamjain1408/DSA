import java.util.*;

public class bubblesort {
    public static void main(String[] arr) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Size of Array:");
        int n = sc.nextInt();

        int count = 0;

        int[] a = new int[n]; 

        System.out.println("Enter the Elements of Array:");
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i -1; j++){
                if(a[j] > a[j+1]){

                   int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
                count++;
            }
        }
        System.out.println("Sorted Array:");
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }

        System.out.println("\nTotal Comparisons: " + count);     
    }
}

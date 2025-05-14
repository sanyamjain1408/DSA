import java.util.*;

public class linearsearch {



    public static void main(String[]  arr) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Size of Array :");
        int n = sc.nextInt();

        int[] a = new int[n];

        System.out.println("Enter the Elements of Array : ");

        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
        }
        System.out.println("Enter the Element to Search: ");
        int target = sc.nextInt();

        boolean found = false;

        for(int i = 0; i < n; i++){
            if (a[i] == target) {
                System.out.println("Element found at index : " + i);
                found = true;
                break;
            }
        }
        if (!found) {
            System.out.println("Element not found in the array.");
        }
        sc.close();

    }
    
}

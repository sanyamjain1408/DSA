import java.util.*;

public class selectionsort {
    public static void main(String[] arr){
        Scanner sc = new Scanner(System.in);

         System.out.println("Enter Size of Array:");
        int n = sc.nextInt();

        
        

        int[] a = new int[n]; 

        System.out.println("Enter the Elements of Array:");
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        for(int i = 0; i < n-1; i++){
            for(int j = i+1;j <n; j++){
                if(a[i] > a[j]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        System.out.println("Sorted Array:");
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
        sc.close();
    }
}
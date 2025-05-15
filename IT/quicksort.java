import java.util.Scanner;

public class quicksort {
   // Quick Sort function
    static void quickSort(int[] arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high); // pivot index
            quickSort(arr, low, pi - 1);        // left part
            quickSort(arr, pi + 1, high);       // right part
        }
    }

    // Partition function
    static int partition(int[] arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                // swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Final pivot swap
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        return i + 1;
    }

    // Main method
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Size of Array:");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("Enter Elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        quickSort(arr, 0, n - 1);

        System.out.println("Sorted Array:");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
    
}


// 4 5 2 1 9 8 7 3
// 4 5 2 1 9 8 7 3    4
// 4 5 2 1 9 8 7 3    5
// 2 5 4 1 9 8 7 3    4
// 2 1 4 5 9 8 7 3    5
// 2 1 4 5 9 8 7 3
// 2 1 3 4 5 9 8 7
// 1 2 3 4 5 9 8 7
// 1 2 3 4 5 
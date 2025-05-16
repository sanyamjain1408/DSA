

                    //    5 4 9 8 7 13 12 1 3 2 15 6
                    //    0 1 2 3 4 5  6  7 8 9 10 11  
                    //             /  \
                    //            /    \ 
                    //           /      \
                    //  5 4 9 8 7 13   12 1 3 2 15 6
                    //      / \             / \ 
                    //     /   \           /   \
                    //    /     \         /     \
                //   5 4 9   8 7 13    12 1 3   2 15 6
                //     / \     / \        / \      / \
                //  5 4   9  8 7  13   12 1  3   2 15  3
                //  / \      / \        / \      / \
                // 5   4    8  7       12 1     2   15     
            //     \  /     \ /         \ /      \  /
            //      4 5     7 8         1 12     2 15
            //        \     /             \       /
            //       4 5 7 8               1 2 12 15
            //             \               /
            //              \             /
            //             1 2 4 5 7 8 12 15





public class mergesort {
    static void mergesort(int[] arr, int s, int e){
        if (s < e) {
            int mid = s + (e - s) /2;
            mergesort(arr, s, mid);
            mergesort(arr, mid + 1, e);
            merge(arr, s, mid, e );
        }
    }

    public static void merge(int[] arr, int s, int mid, int e){
        int ls = mid - s + 1;
        int rs = e - mid;

        int[] L = new int[ls];
        int[] R = new int[rs];
        

        for(int i = 0; i < ls; i++){
            L[i] = arr[s + i];
        }
        for(int j = 0; j < rs; j++){
            R[j] = arr[mid + 1 + j];
        }

        int i = 0; int j = 0; int k = s;

        while (i<ls && j < rs) {
             if (L[i] <= R[j]) {
                arr[k++] = L[i++];
            } else {
                arr[k++] = R[j++];
            }  
        }
         while (i < ls) {
            arr[k++] = L[i++];
        }
        while (j < rs) {
            arr[k++] = R[j++];
        }
    }


    public static void main(String[] args) {
        int[] arr = {38, 27, 43, 3, 9, 82, 10};
        mergesort(arr, 0, arr.length - 1);

        // Print sorted array
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }

}
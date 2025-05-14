public class recursion1 {
    static void count(int i , int n){
       if (i > n) {
        return;
       }
       System.out.println(i);
       count(i + 1, n);
    }

    public static void main(String[] arr){
        count(1,5);
    }
}

public class recursion {
    static void count(int n){
        if (n == 0) {
            System.out.println("Done");
        } else {
            System.out.println(n);
            count(n-1);
        }
    }
  
    public static void main(String[] arr){
        count(5);
    }
}

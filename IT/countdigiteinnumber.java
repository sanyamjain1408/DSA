public class countdigiteinnumber {
    public static void main(String[] arr) {
        int n = 198765;
        int count = 0;
        int y = n;

        while (n > 0) {
            n= n / 10;
            count++;
        }

        System.out.println("Number of " + y + " digits is : " + count  );
    }
    
}

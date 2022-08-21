import java.util.*;

class DivisionLike {
    public static void main(String[] args) {
        // Taking required inputs from the user
        Scanner sc = new Scanner(System.in);
        System.out.println("How many numbers will you enter?");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter " + n + " integers, one per line:");
        int sum = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            sum = sum + arr[i];
        }
        // Generating the required result
        if (sum == 0) {
            System.out.println("Sum is 0.");
        } else {
            System.out.println("The sum is " + sum + ".");
            System.out.println("The numbers are:");
            for (int i = 0; i < n; i++) {
                System.out.println(arr[i] + ". which is " + (Math.floor((arr[i] * 1000000) / sum))/10000.0 + "% of the sum.");
            }
        }
    }
}
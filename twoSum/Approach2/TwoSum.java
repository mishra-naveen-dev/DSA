import java.util.HashMap;
import java.util.Scanner;

public class TwoSum {

    public static int[] twoSum(int[] nums, int target) {
        int[] arr = new int[2];
        HashMap<Integer, Integer> map = new HashMap<>();
        
        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(target - nums[i])) {
                arr[0] = i;
                arr[1] = map.get(target - nums[i]);
                return arr;
            } else {
                map.put(nums[i], i);
            }
        }
        
        // Return an empty array if no result is found (this should never happen if a solution exists)
        return new int[0];
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number of elements in the array: ");
        int n = sc.nextInt();
        
        int[] nums = new int[n];
        
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }
        
        System.out.print("Enter the target sum: ");
        int target = sc.nextInt();
        
        int[] result = twoSum(nums, target);
        
        if (result.length == 2) {
            System.out.println("Indices of the two numbers: " + result[0] + ", " + result[1]);
        } else {
            System.out.println("No values found that sum to the target.");
        }
        
        sc.close();
    }
}

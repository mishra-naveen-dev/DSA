public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();  // Uncommented this line to create the Solution object
        int[] nums = { 2, 7, 11, 15 };
        int target = 9;
        
        int[] result = solution.twoSum(nums, target);  // Fixed: Calling the twoSum method

        if (result.length == 2) {
            System.out.println("Indices: " + result[0] + ", " + result[1]);
        } else {
            System.out.println("No two sum solution found.");
        }
    }
}

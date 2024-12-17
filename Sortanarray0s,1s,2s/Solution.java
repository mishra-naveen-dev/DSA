// package Sortanarray0s,1s,2s;

class Solution{
    public void  sortColors(int[] nums){
        int low = 0, mid =0;
        int high=nums.length-1;
        int temp=0;
        while(mid<=high){
            if(nums[mid]==0){
                temp=nums[low];
                nums[low]=nums[mid];
                nums[mid]=temp;
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                temp=nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
            }
        }
    }
public static void main(String[] args) {
    Solution s = new Solution();
    int[] nums = {2,0,2,1,1,0};
    s.sortColors(nums);
for(int i=0;i<=nums.length-1;i++){
    System.out.print(nums[i]+" ");
}
    }
}


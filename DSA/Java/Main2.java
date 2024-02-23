// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.


import java.util.Arrays;

public class Main2 {
    public static void moveZeros(int[] nums) {
        // Your implementation here
    }

    public static void main(String[] args) {
        int[] nums1 = {0, 1, 0, 3, 12};
        moveZeros(nums1);
        System.out.println(Arrays.toString(nums1));
        int[] nums2 = {0};
        moveZeros(nums2);
        System.out.println(Arrays.toString(nums2));
    }
}

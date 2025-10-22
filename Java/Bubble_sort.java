package Java;
import java.util.Scanner;

public class Bubble_sort {
    static void BubbleSort(int nums[]) {
        int n = nums.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] nums = new int[n];

        for (int i = 0; i < n; i++)
            nums[i] = in.nextInt();

        BubbleSort(nums);

        for (int num : nums)
            System.out.print(num + " ");

        in.close();
    }
}
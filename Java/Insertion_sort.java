package Java;
import java.util.Scanner;

public class Insertion_sort {
    static void Insertion_Sort(int nums[]) {
        int n = nums.length;
        for (int i = 1; i < n; i++) {
            int val = nums[i];
            int j = i - 1;
            while (j >= 0 && val < nums[j]) {
                nums[j + 1] = nums[j];
                j--;
            }

            nums[j + 1] = val;
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] nums = new int[n];

        for (int i = 0; i < n; i++)
            nums[i] = in.nextInt();

        Insertion_Sort(nums);

        for (int num : nums)
            System.out.print(num + " ");

        in.close();
    }
}


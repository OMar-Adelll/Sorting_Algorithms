package Java;
import java.util.Scanner;

public class Selection_sort {
    static void SelectionSort(int nums[]) {
        int n = nums.length;
        for (int i = 0; i < n - 1; i++) {
            int M = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[M])
                    M = j;
            }
            int temp = nums[M];
            nums[M] = nums[i];
            nums[i] = temp;
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] nums = new int[n];

        for (int i = 0; i < n; i++)
            nums[i] = in.nextInt();

        SelectionSort(nums);

        for (int num : nums)
            System.out.print(num + " ");

        in.close();
    }
}
public class MonotonicIncreasingStack {
    public static int[] monotonicIncreasing(int[] nums) {
        Deque<Integer> stack = new ArrayDeque<>();
        
        for (int num : nums) {
           while (!stack.isEmpty() && stack.peekLast() > num) {
               stack.pollLast();
            }
            stack.offerLast(num);
        }

        int[] result = new int[stack.size()];
        int index = stack.size() - 1;
        while (!stack.isEmpty()) {
            result[index--] = stack.pollLast();
        }

        return result;
    }
}

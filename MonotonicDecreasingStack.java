public class MonotonicDecreasingStack {
    public static List<Integer> monotonicDecreasing(int[] nums) {
        Stack<Integer> stack = new Stack<>();
        List<Integer> result = new ArrayList<>();
        for (int num : nums) {
            while (!stack.isEmpty() && stack.peek() < num) {  
                stack.pop();
            }   
            if (!stack.isEmpty()) {
                result.add(stack.peek());
            } else {
                result.add(-1);
            }
            stack.push(num);
        }
        return result;
    }
}

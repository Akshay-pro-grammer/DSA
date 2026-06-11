public class MergeSort{
  public int[] mergesort(int arr[]) {
        if (arr.length <= 1) {
            return arr;
        }
        int mid = arr.length / 2;
        int[] lefthalf = new int[mid];
        int i = 0;
        for (i = 0; i <mid; i++) {
            lefthalf[i] = arr[i];
        }
        int[] righthalf = new int[arr.length - mid];
        i=mid;
        while (i < arr.length) {
            righthalf[i-mid] = arr[i];
            i++;
        }
        int[] sortedleft = mergesort(lefthalf);
        int[] sortedright = mergesort(righthalf);
        return merge(sortedleft, sortedright);
    }

    public int[] merge(int[] left, int right[]) {
        int result[] = new int[left.length + right.length];
        int k = 0;
        int i = 0, j = 0;
        while (i < left.length && j < right.length) {
            if (left[i] < right[j]) {
                result[k++] = left[i++];
            } else {
                result[k++] = right[j++];
            }
        }
        while (i < left.length) {
            result[k++] = left[i++];
        }
        while (j < right.length) {
            result[k++] = right[j++];
        }
        return result;
    }
}

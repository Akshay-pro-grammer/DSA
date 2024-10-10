class BinarySearch {
    public int binarySearch(int[] arr, int target) {
         int low = 0;
        int high = arr.length - 1;
        int result=-1;
      //if you want to find the first occurence of a target we find the target which is mid
      //the we update the high to mid-1 , that means just check before mid if mid exists
      //similar logic for last occurence
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                result = mid;
                break;
            } else if (arr[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
      return result;
    }
}

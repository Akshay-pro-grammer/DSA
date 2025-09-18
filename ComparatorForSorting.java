//if you want to sort a 2d array, we can use comparator
Arrays.sort(array, new Comparator<int[]>() {
            public int compare(int[] a, int[] b) {
                return Integer.compare(a[0], b[0]);
            }
        });
//but who wants to write this long code?
//we can use short hand lambda expression
//since we know that a and b are params and what to return
Arrays.sort(times, (a, b) -> Integer.compare(a[0], b[0]));

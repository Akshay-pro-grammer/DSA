class LineSweepAlgorithm {
    public int lineSweepAlgorithm(int[][] intervals) {
        
        int events[][]= new int[intervals.length*2][2];
        
        int index=0;
        for(int i[]:intervals){
            events[index][0]=i[0];
            events[index][1]=1;
            index++;
            events[index][0]=i[1]+1;
            events[index][1]=-1;
            index++;
        }
        Arrays.sort(events,(a,b)->a[0] == b[0] ? Integer.compare(a[1], b[1]) : Integer.compare(a[0], b[0]));
        int max=1,prev=0;
        for(int event[]:events){
            prev+=event[1];
            max=Math.max(max,prev);
        }
        return max;
    }
}

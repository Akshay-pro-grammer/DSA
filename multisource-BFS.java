//multisource bfs example , leetcode : 1765 map of highest peak
class Solution {
    public int[][] highestPeak(int[][] isWater) {
        int r=isWater.length;
        int c=isWater[0].length;
        int res[][]=new int[r][c];
        Queue<int[]> q1=new LinkedList<>();
        //finding all the water sources and rest stays unvisited
        for (int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(isWater[i][j]==1){
                    res[i][j]=0;
                    q1.offer(new int[]{i,j});
                }else{
                    res[i][j]=-1;
                }
            }
        }
        //bfs code 
        while(!q1.isEmpty()){
            int arr[]=q1.poll();
            int x=arr[0];
            int y=arr[1];
            int neigh[][]={{x + 1, y}, {x, y + 1}, {x - 1, y}, {x, y - 1}};
            for(int a[]:neigh){
                int inx=a[0];
                int iny=a[1];
                if(inx<0 || iny<0 || inx==r || iny==c || res[inx][iny]!=-1){
                    continue;
                }
                res[inx][iny]=res[x][y]+1;
                q1.offer(new int[]{inx,iny});
            }
        }
        return res;
    }
}

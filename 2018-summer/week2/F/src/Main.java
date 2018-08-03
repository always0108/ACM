import java.util.Scanner;

public class Main {

    public static char a[][] = new char[105][105];
    public static int n,m,result;
    public static int[][] dir={{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}};//表示8个方向

    public static boolean check(int x,int y)//检查是否有油田
    {
        if(x >= 0 && x < m && y >= 0 && y < n && a[x][y] == '@')
            return true;
        return false;
    }

    public static boolean dfs(int x, int y)
    {
        int i,xx,yy;
        if(check(x,y)) {
            a[x][y] = '.';
            for(i = 0;i < 8;i++) {
                xx = x + dir[i][0];
                yy = y + dir[i][1];
                dfs(xx,yy);//依次检查8个方向
            }
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int i,j;
        while(true) {
            m = input.nextInt();
            n = input.nextInt();
            if(m == 0 && n == 0) break;
            result = 0;
            for(i = 0;i < m;i++)
                a[i] = input.next().toCharArray();
            for(i = 0;i < m;i++) {
                for(j = 0;j < n;j++)
                {
                    if(dfs(i,j))//找到油田就可以将结果加1
                        result++;
                }
            }
            System.out.println(result);
        }
    }
}

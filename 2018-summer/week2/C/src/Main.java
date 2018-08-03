import java.util.Scanner;

public class Main {

    public static char chessboard[][];
    public static int visit[];
    public static int n , k , count;

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while (true){
            n = input.nextInt();
            k = input.nextInt();
            if(n == -1 && k == -1) break;
            chessboard = new char[n][n];
            visit = new int[n];
            count = 0;
            for(int i = 0; i < n; i++)
                chessboard[i] = input.next().toCharArray();
            dfs(0,k);
            System.out.println(count);
        }
    }

    public static boolean check(int i, int j){
        if(i >= 0 && i < n && j >= 0 && j < n && visit[j] == 0 && chessboard[i][j] == '#')
            return true;
        return false;
    }

    public static void dfs(int r, int k){
        if(k == 0){
            count++;
            return;
        }
        for(int i = r; i < n ;i++){
            for(int j = 0; j < n; j++){
                if(check(i,j)){
                    visit[j] = 1;
                    dfs(i + 1,k - 1);
                    visit[j] = 0;
                }
            }
        }
    }
}

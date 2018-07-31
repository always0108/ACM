import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {

    public static int N,K;
    public static int[] visit = new int[1000001];
    public static int[] step  = new int[1000001];

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        N = input.nextInt();
        K = input.nextInt();

        if(N > K){
            System.out.println(N - K);
        }else{
            BFS();
        }
    }

    public static boolean check(int x){
        if(x >= 0 && x < 1000001 && visit[x] == 0)
            return true;
        else
            return false;
    }

    public static void BFS(){
        Queue<Integer> queue = new LinkedList<Integer>();
        visit[N] = 1;
        queue.offer(N);
        while(!queue.isEmpty()){
            int pos = queue.poll();
            //边界条件
            if(pos == K){
                System.out.println(step[K]);
                return;
            }
            //遍历3种情况
            int next = 0;
            for(int i = 0;i < 3; i++){
                if(i == 0) next = pos - 1;
                else if(i == 1) next = pos + 1;
                else next = 2 * pos;

                if(check(next)){
                    visit[next] = 1;
                    step[next] = step[pos] + 1;
                    queue.offer(next);
                }
            }
        }
    }
}

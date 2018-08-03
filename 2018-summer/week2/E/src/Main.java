import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {

    public static int s, n, m;
    public static int[][][] visit = new int[101][101][101];

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int s, n, m;
        while (input.hasNext()) {
            s = input.nextInt();
            n = input.nextInt();
            m = input.nextInt();
            if (s == 0 && n == 0 && m == 0) break;
            if(s % 2 == 1)
            {
                System.out.println("NO");
                continue;
            }
            s = s / gcd(s,gcd(n,m));
            if(s % 2 == 1)
                System.out.println("NO");
            else
                System.out.println(s-1);
        }
    }

    public static int gcd(int a, int b) {
        if(a%b == 0)
            return b;
        return gcd(b,a%b);
    }
}
//    public static void bfs(){
//        Queue<One> queue = new LinkedList<One>();
//        queue.offer(new One(s,0,0,0));
//        while(!queue.isEmpty()){
//            One tmp = queue.poll();
//            if((tmp.a == s/2 && tmp.b == s/2) ||
//                    (tmp.a == s/2 && tmp.c == s/2) ||
//                    (tmp.b == s/2 && tmp.c == s/2) ){
//                System.out.println(tmp.step);
//                return;
//            }
//            int aa,bb,cc;
//            //a向b中倒水
//            if(tmp.a != 0){
//                if(tmp.a > n - tmp.b){//倒不完
//                    aa = tmp.a-(n-tmp.b);
//                    bb = n;
//                    cc = tmp.c;
//                }
//                else{//倒完了
//                    aa = 0;
//                    bb = tmp.b+tmp.a;
//                    cc = tmp.c;
//                }
//                if(visit[aa][bb][cc] == 0){
//                    visit[aa][bb][cc] = 1;
//                    queue.offer(new One(aa,bb,cc,tmp.step+1));
//                }
//            }
//            //a向c中倒水
//            if(tmp.a != 0){
//                if(tmp.a > m - tmp.c){
//                    aa = tmp.a-(m-tmp.c);
//                    bb = tmp.b;
//                    cc = m;
//                } else {
//                    aa = 0;
//                    bb = tmp.b;
//                    cc = tmp.c+tmp.a;
//                }
//                if(visit[aa][bb][cc] == 0){
//                    visit[aa][bb][cc] = 1;
//                    queue.offer(new One(aa,bb,cc,tmp.step+1));
//                }
//            }
//            //b向c中倒水
//            if(tmp.b != 0){
//                if(tmp.b > m - tmp.c){
//                    aa = tmp.a;
//                    bb = tmp.b-(m-tmp.c);
//                    cc = m;
//                } else {
//                    aa = tmp.a;
//                    bb = 0;
//                    cc = tmp.c+tmp.b;
//                }
//                if(visit[aa][bb][cc] == 0){
//                    visit[aa][bb][cc] = 1;
//                    queue.offer(new One(aa,bb,cc,tmp.step+1));
//                }
//            }
//            //b向a中倒水
//            if(tmp.b != 0){
//                if(tmp.b > s - tmp.a){
//                    aa = s;
//                    bb = tmp.b-(s - tmp.a);
//                    cc = tmp.c;
//                } else {
//                    aa = tmp.a+tmp.b;
//                    bb = 0;
//                    cc = tmp.c;
//                }
//                if(visit[aa][bb][cc] == 0){
//                    visit[aa][bb][cc] = 1;
//                    queue.offer(new One(aa,bb,cc,tmp.step+1));
//                }
//            }
//            //c向a中倒水
//            if(tmp.c != 0){
//                if(tmp.c > s - tmp.a){
//                    aa = s;
//                    bb = tmp.b;
//                    cc = tmp.c-(s - tmp.a);
//                } else {
//                    aa = tmp.a+tmp.c;
//                    bb = tmp.b;
//                    cc = 0;
//                }
//                if(visit[aa][bb][cc] == 0){
//                    visit[aa][bb][cc] = 1;
//                    queue.offer(new One(aa,bb,cc,tmp.step+1));
//                }
//            }
//            //c向b中倒水
//            if(tmp.c != 0){
//                if(tmp.c > n - tmp.b){
//                    aa = tmp.a;
//                    bb = n;
//                    cc = tmp.c-(n - tmp.b);
//                } else {
//                    aa = tmp.a;
//                    bb = tmp.b+tmp.c;
//                    cc = 0;
//                }
//                if(visit[aa][bb][cc] == 0){
//                    visit[aa][bb][cc] = 1;
//                    queue.offer(new One(aa,bb,cc,tmp.step+1));
//                }
//            }
//        }
//        System.out.println("NO");
//    }
//}
//
//class One{
//    int a,b,c,step;
//    public One(int a,int b,int c,int step){
//        this.a = a;
//        this.b = b;
//        this.c = c;
//        this.step = step;
//    }
//}

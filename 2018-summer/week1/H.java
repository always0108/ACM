/*************************************************************************
	> File Name: H.java
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月24日 星期二 11时39分23秒
 ************************************************************************/

import java.util.Scanner;

//OJ提交类名为Main
//public class Main {
public class H {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int  n = input.nextInt();
        input.nextLine();
        for(int i=0; i<n; i++){
            String str = input.nextLine();
            if(str.matches("^[a-zA-Z_][a-zA-Z0-9_]*$")){
                System.out.println("yes");
            }else {
                System.out.println("no");
            }
        }
    }
}

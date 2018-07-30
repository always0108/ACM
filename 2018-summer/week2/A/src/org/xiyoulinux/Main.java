package org.xiyoulinux;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Stack;

public class Main {

    public static Point [][] points = new Point[5][5];
    public static int[][] dir = {{0,1},{0,-1},{-1,0},{1,0}};

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                points[i][j] = new Point(i,j,input.nextInt());
            }
        }
        BFS();
    }

    public static boolean check(int x,int y){
        //在迷宫范围内，而且可以走
        if(x >= 0 && x < 5 && y >= 0 && y < 5){
            Point point = points[x][y];
            if(point.value == 0 && point.visit == false)
                return true;
            else
                return false;
        }else{
            return false;
        }
    }

    public static void BFS(){
        Queue<Point> queue = new LinkedList<Point>();
        points[0][0].visit = true;
        queue.offer(points[0][0]);
        while (!queue.isEmpty()){
            Point point = queue.poll();
            for(int i = 0; i < 4; i++){
                int x = point.x + dir[i][0];
                int y = point.y + dir[i][1];
                //边界条件
                if(x == 4 && y == 4){
                    points[4][4].prex = point.x;
                    points[4][4].prey = point.y;
                    //寻找路径
                    Stack<Point> path = new Stack<Point>();
                    path.push(points[4][4]);
                    while(true){
                        Point top = path.peek();
                        path.push(points[top.prex][top.prey]);
                        if(top.prex == 0 && top.prey == 0)
                            break;
                    }
                    while(!path.empty()){
                        Point tmp = path.pop();
                        System.out.println("("+tmp.x+", "+tmp.y+")");
                    }
                    return;
                }
                if(check(x,y)){
                    points[x][y].visit = true;
                    points[x][y].prex = point.x;
                    points[x][y].prey = point.y;
                    queue.offer(points[x][y]);
                }
            }
        }
    }
}

class Point{
    int x,y,prex,prey,value;
    boolean visit;

    Point(int x,int y,int value){
        this.x = x;
        this.y = y;
        this.value = value;
        this.visit = false;
    }
}
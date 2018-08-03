import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    final static int MAXN = 200 + 1;
    final static BigInteger ZERO = BigInteger.ZERO;
    final static BigInteger ONE = BigInteger.ONE;
    final static BigInteger TEN = BigInteger.TEN;

    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        Integer n;
        while (input.hasNext()) {
            n = input.nextInt();
            if (n == 0) break;
            BigInteger N = BigInteger.valueOf(n);
            System.out.println(multiple(ONE, N));
        }
    }

    public static BigInteger multiple(BigInteger num, BigInteger N)
    {
        if (num.bitLength() > 100) return null;
        if (num.mod(N).equals(ZERO)) return num;
        BigInteger left = num.multiply(TEN), right = left.add(ONE);
        BigInteger searchleft = multiple(left, N);
        if (searchleft != null) return searchleft;
        else return multiple(right, N);
    }
}





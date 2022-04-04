package TDARacional;

import java.util.Scanner;
import java.lang.Math;

class Main {
  public static void main(String[] args) {
    Scanner re = new Scanner(System.in);

    int t = re.nextInt(), n1, d1, n2, d2, ans1, ans2;
    String op, op1, op2;

    for (int i = 0; i < t; ++i) {
      n1 = re.nextInt();
      op1 = re.next();
      d1 = re.nextInt();
      op = re.next();
      n2 = re.nextInt();
      op2 = re.next();
      d2 = re.nextInt();

      ans2 = d1 * d2;
      if (op.equals("+"))
        ans1 = n1 * d2 + n2 * d1;
      else if (op.equals("-"))
        ans1 = n1 * d2 - n2 * d1;
      else if (op.equals("*"))
        ans1 = n1 * n2;
      else {
        ans1 = n1 * d2;
        ans2 = n2 * d1;
      }

      int mdc = gcd(Math.abs(ans1), Math.abs(ans2));
      System.out.println(ans1 + "/" + ans2 + " = " + (ans1 / mdc) + "/" + (ans2 / mdc));
    }

    re.close();
  }

  static int gcd(int a, int b) {
    int Remainder;

    while (b != 0) {
      Remainder = a % b;
      a = b;
      b = Remainder;
    }

    return a;
  }
}

using System;

class TDARacional
{
  public static void Main(string[] args)
  {
    int t = int.Parse(Console.ReadLine()), n1, d1, n2, d2, ans1, ans2;
    char op1, op, op2;
    for (int i = 0; i < t; ++i)
    {
      string[] tokens = Console.ReadLine().Split();

      ans1 = 0;
      ans2 = 0;
      n1 = int.Parse(tokens[0]);
      op1 = char.Parse(tokens[1]);
      d1 = int.Parse(tokens[2]);
      op = char.Parse(tokens[3]);
      n2 = int.Parse(tokens[4]);
      op2 = char.Parse(tokens[5]);
      d2 = int.Parse(tokens[6]);
      ans2 = d1 * d2;
      if (op == '+') ans1 = n1 * d2 + n2 * d1;
      else if (op == '-') ans1 = n1 * d2 - n2 * d1;
      else if (op == '*') ans1 = n1 * n2;
      else
      {
        ans1 = n1 * d2;
        ans2 = n2 * d1;
      }

      double mdc = gcd(abs(ans1), abs(ans2));
      double a = ans1 / mdc, b = ans2 / mdc;
      Console.WriteLine($"{ans1}/{ans2} = {a}/{b}");
    }
  }

  private static int abs(int x)
  {
    return x > 0 ? x : -x;
  }

  static int gcd(int a, int b)
  {
    int Remainder;

    while (b != 0)
    {
      Remainder = a % b;
      a = b;
      b = Remainder;
    }

    return a;
  }
}

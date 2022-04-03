package ExtremamenteBasico;

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner re = new Scanner(System.in);

    int a = re.nextInt(), b = re.nextInt();

    System.out.println("X = " + (a + b));

    re.close();
  }
}

package AreaDoCirculo;

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    Scanner re = new Scanner(System.in);

    double a = re.nextDouble();

    System.out.printf("A=%.4f\n", a * a * 3.14159);

    re.close();
  }
}

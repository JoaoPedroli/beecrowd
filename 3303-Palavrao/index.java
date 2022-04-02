import java.util.Scanner;

class Main {
  public static void main(String[] agrs) {
    Scanner re = new Scanner(System.in);
    
    String p = re.next();
    System.out.println(p.length() >= 10 ? "palavrao" : "palavrinha");

    re.close();
  }
}

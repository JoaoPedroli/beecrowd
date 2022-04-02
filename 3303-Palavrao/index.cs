using System;

class Palavrao {
  public static void Main(string[] args) {
    string p = Console.ReadLine();
    String re = p.Length < 10 ? "palavrinha" :  "palavrao";
    Console.WriteLine(re);
  }
}

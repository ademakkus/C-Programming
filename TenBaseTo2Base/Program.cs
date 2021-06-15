using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TenBaseTo2Base
{
  class Program
  {
    static void WriteBit(int number)
    {
      if (number == 0)
        return;
     WriteBit(number >> 1);
     
      Console.Write(number & 1);

    }
    static void Main(string[] args)
    {

      Console.Write("Enter a number in base 10 :");
      int number = Convert.ToInt32(Console.ReadLine()); 
      Console.Write("In 10 base {0}",number);
      Console.Write(" and in 2 base :");
      WriteBit(number);    
      Console.WriteLine("\nCommand line entered");
      foreach (string item in args)
      {
        Console.WriteLine(item);
      }
      Console.ReadKey();
    }
  }
}

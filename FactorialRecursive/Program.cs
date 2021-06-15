using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
namespace FactorialRecursive
{
  class Program
  {
    static int Factorial(int number)
    {
      if (number<0)
        return -1;
    else  if (number == 0)
        return 1;
      return number * Factorial(number - 1);
    }
    static void Main(string[] args)
    {
      try
      {
        Console.Write("Enter the number to be factored in:");
        int number = Convert.ToInt32(Console.ReadLine());

        if (Factorial(number) == -1)
          Console.WriteLine("The factorial of the number {0} incalculable", number);
        else
        {
          Console.WriteLine("The factorial of the number {0} you entered:{1}", number, Factorial(number));
        }
      }
      catch (Exception ex)
      {
        Console.WriteLine(ex.Message.ToString());
        
      }
      Console.ReadKey();
    }
  }
}

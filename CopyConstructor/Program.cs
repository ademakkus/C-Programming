using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CopyConstructor
{
  class Program
  {
    static void Main(string[] args)
    {
      Person person = new Person();
      person.Name = "Adem";
      person.Surname = "AKKUŞ";
      person.Departmant = "Software Development";
      person.PrintInfo();

      Person personCopy = new Person(person);

      personCopy.PrintInfo();
      Console.ReadKey();
    }
  }
}

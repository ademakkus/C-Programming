using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CopyConstructor
{
  class Person
  {
    public Person()
    {

    }
    public Person(string name, string surname, string departmant)
    {
      Name = name;
      Surname = surname;
      Departmant = departmant;
    }
    public Person(Person person)
    {
      this.Name = person.Name;
      this.Surname = person.Surname;
      this.Departmant = person.Departmant;
    }
    public string Name { get; set; }
    public string Surname { get; set; }
    public string Departmant { get; set; }
public void PrintInfo()
  {
    Console.WriteLine($"Name:{Name}\nSurname: {Surname} \nDepartmant: {Departmant}");
  }
  }
  
}

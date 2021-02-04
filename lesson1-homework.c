// GeekBrains.CppFaculty.CBasic.Interactive
// Lesson1 homework
// D'yakonov Constantin (github.com/ConstantinoGoo)
// Atom code editor (atom.io)

// 1 Установить среду разработки, написать и запустить программу Hello world!
// 2 Написать в начале файла комментарий с названием, автором и названием среды разработки
// 3 Написать запрос целого числа в консоли и вывести на экран это число, возведённое в квадрат.
// 4 Есть формула (расчёта резисторного делителя) Uo = Ui * (R1 / (R2 + R1)).
// Написать формулы расчёта каждой переменной по отдельности, в формате:
// Ui = ...;
// R1 = ...;
// R2 = ...;

#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("Hello, world!\n");
  int inputNum;
  printf("Please, enter number: ");
  scanf("%d", &inputNum);
  printf("Your number is: %d, square root is: %d\n", inputNum, inputNum*inputNum);

  // Uo = Ui * (R1 / (R2 + R1))
  // Ui = Uo / (R1 / (R2 + R1))
  // R1 = ((R2 + R1) * Uo) / Ui
  // R2 = ((R1 * Ui) / Uo) - R

  printf("Uo = Ui * (R1 / (R2 + R1))\n");
  printf("Ui = Uo / (R1 / (R2 + R1))\n");
  printf("R1 = ((R2 + R1) * Uo) / Ui\n");
  printf("R2 = ((R1 * Ui) / Uo) - R1\n");

  return 0;
}

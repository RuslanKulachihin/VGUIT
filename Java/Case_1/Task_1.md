1. Реализовать программу, получающую на вход в качестве аргумента имя человека и выводящую 
   “Hello” + имя, в противном случае, если параметр не передавался, “ Hello world”.

import java.util.Scanner;
public class HelloWorld {

	public static void main(String[] args) {
               System.out.println("Введите свое имя !!!");
		Scanner length  = new Scanner(System.in);
		String num = length.nextLine();
		System.out.println("Hello " + (args.length > 0 ? "world !!": num +" !!!" ));			
		}
	}
		
2. Написать программу, получающую на вход в качестве аргумента несколько
   параметров. В программе вывести “Вы ввели” + М (количество параметров) + “параметров”. 
   Если параметры не передавались, вывести ”Вы не передавали параметров”.


import java.util.Scanner;
public class HelloWorld {

public static void main(String[] args) {
	System.out.println("Введите параметры !!!");
	Scanner length  = new Scanner(System.in);
	String num = length.nextLine();
	if (args.length < 1) {
		System.out.println("Вы не передавали параметров");
	} 
	else {
	System.out.println("Вы ввели " + args.length + " параметров");
	}
    }
}

3. Передавать в качестве параметров два целочисленных числа. Вывести на экран как сами значения? так и их сумму (“3 + 2 = 5”). 
   Если количество параметров не равно 2, вывести сообщение “Неверное количество параметров”.

public class HelloWorld {
public static void main(String[] args) {
	if (args.length == 2) {
	System.out.println(args[0] + "+" + args[1] + "=" + (Integer.parseInt(args[0]) + Integer.parseInt(args[1])));
	} 
	else {
	System.out.println("Неверное количество параметров");
			}
		}
	}

4. Ввести в качестве параметров имя пользователя и пароль. Проверить в методе main() соответствие введенных значений заранее определенным значениям. 
   В случае полного соответствия вывести сообщение “Вас узнали. Добро пожаловать”, в противном случае вывести сообщение “Логин и пароль не распознаны. 
   Доступ запрещен”.

public class HelloWorld {
public static void main(String[] args) {

	if (args.length == 2) {
		System.out.println(args[0] + "+" + args[1] + "=" + (Integer.parseInt(args[0]) + Integer.parseInt(args[1])));
			} 
	else {
		System.out.println("Логин и пароль не распознаны. Доступ запрещен");
	}
     }
}

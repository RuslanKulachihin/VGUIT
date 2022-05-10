
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



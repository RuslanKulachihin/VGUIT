
    public class Task_4 {
        public static void main(String[] args) {
            if (args.length == 2) {
                System.out.println(args[0] + "+" + args[1] + "=" + (Integer.parseInt(args[0]) + Integer.parseInt(args[1])));
            }
            else {
                System.out.println("Логин и пароль не распознаны. Доступ запрещен");
            }
        }
    }


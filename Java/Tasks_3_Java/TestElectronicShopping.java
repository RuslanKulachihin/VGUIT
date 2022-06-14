/*
Вариант 16
Конструктор!!!
ElectronicShopping:
Свойства:
 - Название магазина
 - Название товара
 - Страна производитель
 - Вид оплаты
 - Сумма покупки
 - Дата продажи
 - ФИО
 */
public class TestElectronicShopping{
    public static void main(String[] args){
        ElectronicShopping electronicShopping = new ElectronicShopping("М.Видео", "Телефон", "Китай", " Наличные", 10000, "11.08.2019","Любимов Игорь Данилович");
        System.out.println(electronicShopping.toString());
    }
}

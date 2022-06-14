/*
Вариант 16
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
package ElectronicShopping;
public class ElectronicShopping {
    private String nazvanie_magazina;
    private String nazvanie_tovara;
    private String strana_proizvoditel;
    private String vid_oplaty;
    private int summa_pokupki;
    private String data_prodazhi;
    private String FIO;

    public ElectronicShopping ( String nazvanie_magazina , String nazvanie_tovara , String strana_proizvoditel , String vid_oplaty , int summa_pokupki ,
                                String data_prodazhi , String FIO ) {
        this.nazvanie_magazina = nazvanie_magazina;
        this.nazvanie_tovara = nazvanie_tovara;
        this.strana_proizvoditel = strana_proizvoditel;
        this.vid_oplaty = vid_oplaty;
        this.summa_pokupki = summa_pokupki;
        this.data_prodazhi = data_prodazhi;
        this.FIO = FIO;
    }

    public String getnazvanie_magazina ( ) {
        return nazvanie_magazina;
    }

    public void setnazvanie_magazina ( String nazvanie_magazina ) {
        this.nazvanie_magazina = nazvanie_magazina;
    }

    public String getnazvanie_tovara ( ) {
        return nazvanie_tovara;
    }

    public void setnazvanie_tovara ( String nazvanie_tovara ) {
        this.nazvanie_tovara = nazvanie_tovara;
    }

    public String getstrana_proizvoditel ( ) {
        return strana_proizvoditel;
    }

    public void setstrana_proizvoditel ( String strana_proizvoditel ) {
        this.strana_proizvoditel = strana_proizvoditel;
    }

    public String getvid_oplaty ( ) {
        return vid_oplaty;
    }

    public void setvid_oplaty ( String vid_oplaty ) {
        this.vid_oplaty = vid_oplaty;
    }

    public int getsumma_pokupki ( ) {
        return summa_pokupki;
    }

    public void setsumma_pokupki ( int summa_pokupki ) {
        this.summa_pokupki = summa_pokupki;
    }

    public String getdata_prodazhi ( ) {
        return data_prodazhi;
    }

    public void setdata_prodazhi ( String data_prodazhi ) {
        this.data_prodazhi = data_prodazhi;
    }

    public String getFIO ( ) {
        return FIO;
    }

    public void setFIO ( String FIO ) {
        this.FIO = FIO;
    }

    public String toString ( ) {
        return "Магазин: " + nazvanie_magazina + "." + " Товар: " + nazvanie_tovara + "." + " Страна производитель: " + strana_proizvoditel + "."
                + "\n Вид оплаты: " + vid_oplaty + "," + " на сумму: " + summa_pokupki + " рублей" + "\n Дата продажи: " + data_prodazhi + "." +
                "\n Покупатель: " + FIO + ".";
    }
}

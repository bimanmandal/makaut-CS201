package com.biman.helloworld.oo.ifscs;

/*
 - implements
 - abstract method
 - final variable
  - no constructor
  - no direct object


 */

interface Payment {
    static int a = 10;
    void pay();


}

class UPIPayment implements Payment {
    @Override
    public void pay() {
        System.out.println("UPI Payment");
    }
}

class CardPayment implements Payment {
    @Override
    public void pay() {
        System.out.println("Card Payment");
    }
}






public class PaymentMain {
    public static void main(String[] args) {


    }
}

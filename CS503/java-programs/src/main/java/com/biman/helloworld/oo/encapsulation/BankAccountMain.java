package com.biman.helloworld.oo.encapsulation;


class BankAccount {
    private double balance;
    public  void deposit(double amount) {
        if (amount > 0)
           balance += amount;
    }
    public double getBalance() {
        return balance;
    }

    public void withdrawal(double amount) {
        balance -= amount;
    }
}

public class BankAccountMain {
    public static void main(String[] args) {

        BankAccount bankAccount = new BankAccount();
        bankAccount.deposit(10);
        System.out.println(bankAccount.getBalance());
        bankAccount.withdrawal(2);
        System.out.println(bankAccount.getBalance());
    }
}

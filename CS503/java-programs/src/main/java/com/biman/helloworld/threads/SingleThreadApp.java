package com.biman.helloworld.threads;

public class SingleThreadApp {
    public static void main(String[] args) {
        NumberThread numberThread = new NumberThread();
        CharacterThread characterThread = new CharacterThread();
        numberThread.start();
        characterThread.start();

        NumberThreadR numberThreadR = new NumberThreadR();
        CharacterThreadR characterThreadR = new CharacterThreadR();
        numberThreadR.run();
        characterThreadR.run();
    }

}

class NumberThread extends Thread {
    @Override
    public void run() {
        for (int i = 1; i <=10; i++) {
            System.out.println("Numbers : " + i);
        }
    }
}

class NumberThreadR implements Runnable {
    @Override
    public void run() {
        for (int i = 1; i <=10; i++) {
            System.out.println("Numbers : " + i);
        }
    }
}

class  CharacterThread extends Thread {
    @Override
    public void run() {
        for (char c = 'A'; c <= 'J'; c++) {
            System.out.println("Letter : " + c);
        }
    }
}

class  CharacterThreadR implements Runnable {
    @Override
    public void run() {
        for (char c = 'A'; c <= 'J'; c++) {
            System.out.println("Letter : " + c);
        }
    }
}

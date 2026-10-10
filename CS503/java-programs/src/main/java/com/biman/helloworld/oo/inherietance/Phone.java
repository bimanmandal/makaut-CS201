package com.biman.helloworld.oo.inherietance;

interface Camera {
    void takePhoto();
}

interface MusicPlayer {
    void playMusic();
}

class Device {
    void turnOn(){
        System.out.println("Device is on");
    }
}

public class Phone implements Camera, MusicPlayer {
    @Override
    public void takePhoto() {

    }

    @Override
    public void playMusic() {

    }
}

// Class can inherit one class but multiple interfaces
class SmartPhone extends Device implements Camera, MusicPlayer {

    @Override
    public void takePhoto() {

    }

    @Override
    public void playMusic() {

    }
}

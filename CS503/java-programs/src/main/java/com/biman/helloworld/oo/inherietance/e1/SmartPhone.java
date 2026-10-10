package com.biman.helloworld.oo.inherietance.e1;



interface Camera {
    void takePhoto();
}

interface MusicPlayer {
    void playMusic();
}

interface Wifi {
    void connectToWifi();
}

interface SmartDevice extends  Camera, MusicPlayer, Wifi {
    void turnOn();
}

public class SmartPhone implements SmartDevice{
    @Override
    public void turnOn() {
        
    }

    @Override
    public void takePhoto() {

    }

    @Override
    public void playMusic() {

    }

    @Override
    public void connectToWifi() {

    }
}

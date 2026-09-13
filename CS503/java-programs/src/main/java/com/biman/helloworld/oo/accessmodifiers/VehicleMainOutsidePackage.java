package com.biman.helloworld.oo.accessmodifiers;

import com.biman.helloworld.oo.accessmodifiers.scenario1.Vehicle;

public class VehicleMainOutsidePackage {
    public static void main(String[] args) {

        Vehicle tataNano = new Vehicle(4, 5, "red");

        System.out.println(tataNano.numberOfWheels);

        TataVehicleOutside tataVehicleOutside = new TataVehicleOutside();
        tataVehicleOutside.numberOfWheels = 4;

    }
}

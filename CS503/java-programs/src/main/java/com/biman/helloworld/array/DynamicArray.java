package com.biman.helloworld.array;

import java.util.Scanner;

public class DynamicArray {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int array_size = sc.nextInt();

        int[] nums = new int[array_size];
        System.out.print("Enter the elements of the array: ");
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

        System.out.print("Enter the element that you want to search: ");
        int search = sc.nextInt();
        for(int i = 0; i < nums.length; i++){
            if(nums[i] == search){
                System.out.println("Element found at index: " + i);
                break;
            }
        }




    }
}

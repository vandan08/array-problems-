//package vandan;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.*;


class Main{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        // System.out.print("Enter Array size : ");
        // int n = sc.nextInt();
        int arr[] = {12,11,32,21,8,21,27,96,76};

        // for (int i = 0; i < arr.length; i++) {
        //     System.out.print("For : arr[" + i + "]:");
        //     arr[i] = sc.nextInt();
        // }


//        int max = 0, min = 0;
        for(int k =0 ; k<arr.length-1;k++){
        for (int i = 0; i < arr.length-1; i++) {
                if (arr[i] > arr[i + 1]) {
                    int temp = arr[i + 1];
                    arr[i + 1] = arr[i];
                    arr[i] = temp;
                }
            }
        }

        for (int j = 0; j < arr.length; j++) {
            System.out.println(arr[j]);
        }


    }
}

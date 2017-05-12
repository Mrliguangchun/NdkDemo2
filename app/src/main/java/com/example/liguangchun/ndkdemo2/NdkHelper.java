package com.example.liguangchun.ndkdemo2;

/**
 * Created by liguangchun on 2017/5/11.
 */

public class NdkHelper {
    public int number=1;
    static {
        System.loadLibrary("JNISample");
    }
    public static native double getStr();
    public native boolean init();
    public native int add(int x , int y);
    public double max(double num1,double num2){
        return num1+num2;
    }

}

package com.lee.asher.ndkstudy;

/**
 * Created by lihong on 2017/10/25.
 */

public class JniTest {

    public static native String getPackname(Object o);

    static {
        System.loadLibrary("JNI_ANDROID_TEST");
    }
}

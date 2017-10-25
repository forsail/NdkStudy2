#include <stdio.h>
#include <jni.h>
#include <stdlib.h>
#include "com_lee_asher_ndkstudy_JniTest.h"

JNIEXPORT jstring JNICALL Java_com_lee_asher_ndkstudy_JniTest_getPackname
  (JNIEnv *env, jclass clazz, jobject obj){
    jclass native_class=env->GetObjectClass(obj);
    jmethodID mId=env->GetMethodID(native_class,"getPackageName","()Ljava/lang/String;");
    jstring packName=static_cast<jstring>(env->CallObjectMethod(obj,mId));

    return packName;

  }

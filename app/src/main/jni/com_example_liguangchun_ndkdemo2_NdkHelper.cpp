//
// Created by liguangchun on 2017/5/12.
//

#include "com_example_liguangchun_ndkdemo2_NdkHelper.h"
jclass TestProvider;
jobject mTestProvider;
jmethodID getTime;
jmethodID sayHello;
JNIEXPORT jint JNICALL Java_com_example_liguangchun_ndkdemo2_NdkHelper_add
        (JNIEnv * env, jobject jobject1, jint jint1, jint jint2){
   // jclass jclass1=env->GetObjectClass( jobject1);//得到class java的class对象
  //  jfieldID  jfieldID1=env->GetFieldID(jclass1,"number","I");
   // jint jint3=env->GetIntField(jobject1, jfieldID1);
   // env->SetIntField(jobject1,jfieldID1,300);
    jclass  jclass1=env->GetObjectClass(jobject1);
    jfieldID jfieldID1=env->GetFieldID(jclass1,"number","I");
    jint  jint3=env->GetIntField(jobject1,jfieldID1);
    env->SetIntField(jobject1,jfieldID1,2222+jint3);

     jmethodID  jmethodID1=env->GetMethodID(jclass1,"max","D");
     jdouble d= env->CallDoubleMethod(jobject1,jmethodID1,2.3,3.3);

     return jint1+jint2;
}
JNIEXPORT jdouble JNICALL Java_com_example_liguangchun_ndkdemo2_NdkHelper_getStr
        (JNIEnv * env, jclass jobject1){
    //jmethodID  jmethodID1=env->GetMethodID(jobject1,"max","(DD)D");
    //jdouble d= env->N
    //默认构造函数，不传参数
    /**
     *
     * 调用方法
     */
    jmethodID construction_id = env->GetMethodID(jobject1,"<init>", "()V");
    jobject jobject2=env->NewObject(jobject1,construction_id);
    jmethodID jmethodID1=env->GetMethodID(jobject1,"max","(DD)D");
    //调用别的类的对象并赋予值
    jclass jclass1=env->FindClass("com/example/liguangchun/ndkdemo2/helper");
    jmethodID jmethodID2=env->GetMethodID(jclass1,"<init>","()V");
    jobject jobject3=env->NewObject(jclass1,jmethodID2);
    jfieldID jfieldID1=env->GetFieldID(jclass1,"number","D");
    env->SetDoubleField(jobject3,jfieldID1,100.3);
    jdouble f= env->GetDoubleField( jobject3,jfieldID1);
    return env->CallDoubleMethod(jobject2,jmethodID1,f,3.3);

}



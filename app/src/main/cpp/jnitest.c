#include <jni.h>
#include <android/log.h>

#define LOG_TAG  "C_LOG"
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGW(...)  __android_log_write(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)

JNIEXPORT jstring JNICALL
Java_com_congwiny_jnitestdemo_MainActivity_jniTestString(JNIEnv *env, jobject instance) {
    char *text = "哈哈哈";
   LOGW("你好你好");
    int i = 9;
    i++;
    LOGD("i==%d",i);
   return (*env)->NewStringUTF(env, text);
}
#include <jni.h>
#include <string>

std::string jsonDemo();

extern "C"
JNIEXPORT jstring JNICALL
Java_org_ndk_1json_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string text = jsonDemo();
    return env->NewStringUTF(text.c_str());
}

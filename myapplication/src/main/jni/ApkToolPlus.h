/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>

#ifndef com_qianfandu_utils_ApkToolPlus_h
#define com_qianfandu_utils_ApkToolPlus_h
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_qianfandu_utils_ApkToolPlus
 * Method:    encrypt
 * Signature: ([BI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_qianfandu_utils_ApkToolPlus_encrypt
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_qianfandu_utils_ApkToolPlus
 * Method:    decrypt
 * Signature: ([BI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_qianfandu_utils_ApkToolPlus_decrypt
  (JNIEnv *, jclass, jbyteArray);

/*
 *
 */
JNIEXPORT jstring JNICALL Java_com_qianfandu_utils_ApkToolPlus_key
        (JNIEnv *env, jclass clazz);

#ifdef __cplusplus
}
#endif
#endif

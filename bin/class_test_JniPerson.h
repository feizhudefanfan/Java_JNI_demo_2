/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class class_test_JniPerson */

#ifndef _Included_class_test_JniPerson
#define _Included_class_test_JniPerson
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     class_test_JniPerson
 * Method:    createNativeObject
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_class_1test_JniPerson_createNativeObject
  (JNIEnv *, jobject);

/*
 * Class:     class_test_JniPerson
 * Method:    nativeInitPerson
 * Signature: (JILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_class_1test_JniPerson_nativeInitPerson
  (JNIEnv *, jobject, jlong, jint, jstring);

/*
 * Class:     class_test_JniPerson
 * Method:    nativeSayInfo
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_class_1test_JniPerson_nativeSayInfo
  (JNIEnv *, jobject, jlong);

/*
 * Class:     class_test_JniPerson
 * Method:    nativeWriteFile
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_class_1test_JniPerson_nativeWriteFile
  (JNIEnv *, jobject, jlong, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
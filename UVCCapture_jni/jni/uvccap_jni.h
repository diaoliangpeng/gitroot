/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class crimsonwoods_android_libs_uvccap_UVCCamera */

#ifndef _Included_crimsonwoods_android_libs_uvccap_UVCCamera
#define _Included_crimsonwoods_android_libs_uvccap_UVCCamera
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     crimsonwoods_android_libs_uvccap_UVCCamera
 * Method:    n_getPixelFormat
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_crimsonwoods_android_libs_uvccap_UVCCamera_n_1getPixelFormat
  (JNIEnv *, jobject, jlong);

/*
 * Class:     crimsonwoods_android_libs_uvccap_UVCCamera
 * Method:    n_getFrameSize
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_crimsonwoods_android_libs_uvccap_UVCCamera_n_1getFrameSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     crimsonwoods_android_libs_uvccap_UVCCamera
 * Method:    n_getWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_crimsonwoods_android_libs_uvccap_UVCCamera_n_1getWidth
  (JNIEnv *, jobject, jlong);

/*
 * Class:     crimsonwoods_android_libs_uvccap_UVCCamera
 * Method:    n_getHeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_crimsonwoods_android_libs_uvccap_UVCCamera_n_1getHeight
  (JNIEnv *, jobject, jlong);

/*
 * Class:     crimsonwoods_android_libs_uvccap_UVCCamera
 * Method:    n_open
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_crimsonwoods_android_libs_uvccap_UVCCamera_n_1open
  (JNIEnv *, jobject, jstring);

/*
 * Class:     crimsonwoods_android_libs_uvccap_UVCCamera
 * Method:    n_init
 * Signature: (JIII)V
 */
JNIEXPORT void JNICALL Java_crimsonwoods_android_libs_uvccap_UVCCamera_n_1init
  (JNIEnv *, jobject, jlong, jint, jint, jint);

/*
 * Class:     crimsonwoods_android_libs_uvccap_UVCCamera
 * Method:    n_close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_crimsonwoods_android_libs_uvccap_UVCCamera_n_1close
  (JNIEnv *, jobject, jlong);

/*
 * Class:     crimsonwoods_android_libs_uvccap_UVCCamera
 * Method:    n_capture
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_crimsonwoods_android_libs_uvccap_UVCCamera_n_1capture
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     crimsonwoods_android_libs_uvccap_UVCCamera
 * Method:    n_start
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_crimsonwoods_android_libs_uvccap_UVCCamera_n_1start
  (JNIEnv *, jobject, jlong);

/*
 * Class:     crimsonwoods_android_libs_uvccap_UVCCamera
 * Method:    n_stop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_crimsonwoods_android_libs_uvccap_UVCCamera_n_1stop
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif

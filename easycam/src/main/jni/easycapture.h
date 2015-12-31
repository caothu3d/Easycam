/*
 * easycam.h
 *
 *  Created on: Nov 6, 2014
 *      Author: Eric
 */

#ifndef EASYCAM_H_
#define EASYCAM_H_

#include <jni.h>
#include "VideoDevice.h"

VideoDevice* vDevice = nullptr;

extern "C" {
    JNIEXPORT jint JNICALL Java_com_arksine_easycam_NativeEasyCapture_startDevice(JNIEnv* jenv, jobject thisObj,
    		jstring deviceName, jint width, jint height, jint devType, jint regionStd, jint numBufs);
    JNIEXPORT jbyteArray JNICALL Java_com_arksine_easycam_NativeEasyCapture_getNextFrame(JNIEnv* jenv, jobject thisObj);
    JNIEXPORT jboolean JNICALL Java_com_arksine_easycam_NativeEasyCapture_isDeviceAttached(JNIEnv* jenv, jobject thisObj);
    JNIEXPORT void JNICALL Java_com_arksine_easycam_NativeEasyCapture_stopDevice(JNIEnv* jenv, jobject thisObj);
    JNIEXPORT jstring JNICALL Java_com_arksine_easycam_NativeEasyCapture_detectDevice(JNIEnv* jenv, jobject thisObj, jstring deviceName);
};


#endif /* EASYCAM_H_ */

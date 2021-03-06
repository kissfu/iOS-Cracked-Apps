//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureConnection, AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, NSObject<OS_dispatch_queue>, NSString;

@interface InsightCamera : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    AVCaptureConnection *_videoConnection;
    AVCaptureConnection *_audioConnection;
    AVCaptureVideoDataOutput *_videoOutput;
    AVCaptureStillImageOutput *_imageOutput;
    CDUnknownBlockType captureStartAsyncCompletion;
    CDUnknownBlockType updateBlcok;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
        unsigned long long _field3;
        unsigned long long _field4;
        unsigned long long _field5;
        char *_field6;
        char *_field7;
        double _field8;
        char *_field9;
        char *_field10;
        double _field11;
    } *pCameraBuf;
    CDStruct_97468aaf *pCameraFrame;
    double lastCameraFrameTimestamp;
    double currentCameraFrameTimestamp;
    int nextBuf;
    struct _opaque_pthread_mutex_t frameLock_pthread_mutex;
    NSObject<OS_dispatch_queue> *updateQueue;
    _Bool _running;
    long long _capturefps;
    long long _devicePosition;
    long long _videoOrientation;
    NSString *_sessionPreset;
}

@property(retain, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
@property(nonatomic) long long capturefps; // @synthesize capturefps=_capturefps;
@property(readonly, nonatomic) _Bool running; // @synthesize running=_running;
- (void).cxx_destruct;
- (void)getTorchMode:(long long *)arg1;
- (void)setTorchMode:(long long)arg1;
- (_Bool)cameraHasTorch;
- (void)getFlashMode:(long long *)arg1;
- (void)setFlashMode:(long long)arg1;
- (_Bool)cameraHasFlash;
- (void)getWhiteBalanceMode:(long long *)arg1 temperature:(float *)arg2 tint:(float *)arg3;
- (CDStruct_869f9c67)normalizedGains:(CDStruct_869f9c67)arg1;
- (void)setWhiteBalanceGains:(CDStruct_869f9c67)arg1;
- (void)setWhiteBalanceWith:(float)arg1 tint:(float)arg2;
- (void)setWhiteBalanceMode:(long long)arg1;
- (void)getExposureMode:(long long *)arg1 duration:(float *)arg2 iso:(float *)arg3 bias:(float *)arg4;
- (void)setExposureWithPointOfInterest:(struct CGPoint)arg1;
- (void)setExposureWith:(float)arg1 iso:(float)arg2 bias:(float)arg3;
- (void)setExposureMode:(long long)arg1;
- (void)getFocusMode:(long long *)arg1;
- (void)setFocusPointOfInterest:(struct CGPoint)arg1;
- (void)setFocusMode:(long long)arg1;
- (void)setAutomaticallyEnablesLowLightBoost;
- (void)getCameraWidth:(int *)arg1 height:(int *)arg2 fovxy:(float [2])arg3;
- (id)activeCamera;
- (CDStruct_97468aaf *)getCameraFrame;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)stop;
- (void)startAsync:(CDUnknownBlockType)arg1 update:(CDUnknownBlockType)arg2;
- (void)setupSessionOutputs:(id *)arg1;
- (void)setupSessionInputs:(id *)arg1;
- (void)setupSession:(id *)arg1;
- (void)showError:(id)arg1;
- (id)initWith:(const char *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


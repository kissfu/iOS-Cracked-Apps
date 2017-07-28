//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class CALayer, CAShapeLayer, NSLayoutConstraint, NSString, RSKImageScrollView, RSKTouchView, UIBezierPath, UIButton, UIColor, UIImage, UILabel, UIRotationGestureRecognizer, UITapGestureRecognizer;

@interface RSKImageCropViewController : UIViewController <UIGestureRecognizerDelegate>
{
    _Bool _avoidEmptySpaceAroundImage;
    _Bool _aspectFitContainerAtStart;
    _Bool _applyMaskToCroppedImage;
    _Bool _rotationEnabled;
    _Bool _originalNavigationControllerNavigationBarHidden;
    _Bool _originalStatusBarHidden;
    _Bool _didSetupConstraints;
    id <RSKImageCropViewControllerDelegate> _delegate;
    id <RSKImageCropViewControllerDataSource> _dataSource;
    UIImage *_originalImage;
    UIColor *_maskLayerColor;
    UIBezierPath *_maskPath;
    unsigned long long _cropMode;
    UIColor *_originalNavigationControllerViewBackgroundColor;
    RSKImageScrollView *_imageScrollView;
    RSKTouchView *_overlayView;
    CAShapeLayer *_maskLayer;
    UILabel *_moveAndScaleLabel;
    UIButton *_cancelButton;
    UIButton *_chooseButton;
    CALayer *_borderLayer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    NSLayoutConstraint *_moveAndScaleLabelTopConstraint;
    NSLayoutConstraint *_cancelButtonBottomConstraint;
    NSLayoutConstraint *_chooseButtonBottomConstraint;
    struct CGRect _maskRect;
}

@property(retain, nonatomic) NSLayoutConstraint *chooseButtonBottomConstraint; // @synthesize chooseButtonBottomConstraint=_chooseButtonBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cancelButtonBottomConstraint; // @synthesize cancelButtonBottomConstraint=_cancelButtonBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *moveAndScaleLabelTopConstraint; // @synthesize moveAndScaleLabelTopConstraint=_moveAndScaleLabelTopConstraint;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) UIRotationGestureRecognizer *rotationGestureRecognizer; // @synthesize rotationGestureRecognizer=_rotationGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) UIButton *chooseButton; // @synthesize chooseButton=_chooseButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *moveAndScaleLabel; // @synthesize moveAndScaleLabel=_moveAndScaleLabel;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) RSKTouchView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) RSKImageScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(nonatomic) _Bool originalStatusBarHidden; // @synthesize originalStatusBarHidden=_originalStatusBarHidden;
@property(nonatomic) _Bool originalNavigationControllerNavigationBarHidden; // @synthesize originalNavigationControllerNavigationBarHidden=_originalNavigationControllerNavigationBarHidden;
@property(retain, nonatomic) UIColor *originalNavigationControllerViewBackgroundColor; // @synthesize originalNavigationControllerViewBackgroundColor=_originalNavigationControllerViewBackgroundColor;
@property(nonatomic, getter=isRotationEnabled) _Bool rotationEnabled; // @synthesize rotationEnabled=_rotationEnabled;
@property(nonatomic) _Bool applyMaskToCroppedImage; // @synthesize applyMaskToCroppedImage=_applyMaskToCroppedImage;
@property(nonatomic) _Bool aspectFitContainerAtStart; // @synthesize aspectFitContainerAtStart=_aspectFitContainerAtStart;
@property(nonatomic) _Bool avoidEmptySpaceAroundImage; // @synthesize avoidEmptySpaceAroundImage=_avoidEmptySpaceAroundImage;
@property(nonatomic) unsigned long long cropMode; // @synthesize cropMode=_cropMode;
@property(retain, nonatomic) UIBezierPath *maskPath; // @synthesize maskPath=_maskPath;
@property(nonatomic) struct CGRect maskRect; // @synthesize maskRect=_maskRect;
@property(retain, nonatomic) UIColor *maskLayerColor; // @synthesize maskLayerColor=_maskLayerColor;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(nonatomic) __weak id <RSKImageCropViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <RSKImageCropViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)cancelCrop;
- (void)cropImage;
- (id)croppedImage:(id)arg1 cropMode:(unsigned long long)arg2 cropRect:(struct CGRect)arg3 rotationAngle:(double)arg4 zoomScale:(double)arg5 maskPath:(id)arg6 applyMaskToCroppedImage:(_Bool)arg7;
- (void)updateMaskPath;
- (void)updateMaskRect;
- (void)layoutOverlayView;
- (void)layoutImageScrollView;
- (void)displayImage;
- (id)intersectionPointsOfLineSegment:(struct RSKLineSegment)arg1 withRect:(struct CGRect)arg2;
- (void)resetZoomScale;
- (void)resetRotation;
- (void)resetFrame;
- (void)resetContentOffset;
- (void)reset:(_Bool)arg1;
- (_Bool)isPortraitInterfaceOrientation;
- (void)handleRotation:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)onChooseButtonTouch:(id)arg1;
- (void)onCancelButtonTouch:(id)arg1;
- (void)setRotationAngle:(double)arg1;
@property(readonly, nonatomic) double zoomScale;
@property(readonly, nonatomic) double rotationAngle;
@property(readonly, nonatomic) struct CGRect cropRect;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (id)initWithImage:(id)arg1 cropMode:(unsigned long long)arg2;
- (id)initWithImage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

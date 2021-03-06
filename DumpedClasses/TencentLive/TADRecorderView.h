//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIButton, UILabel, UILongPressGestureRecognizer;

@interface TADRecorderView : UIView
{
    _Bool _isExpanded;
    _Bool _isAnimating;
    _Bool _isFullScreen;
    _Bool _isInitSoundWave;
    id <TADRecorderViewDelegate> _delegate;
    NSString *_commandText;
    UIView *_bgView;
    UIButton *_recordBtn;
    UILabel *_mainTextLabel;
    UILabel *_subTextLabel;
    UILabel *_resultLabel;
    UIView *_textMaskView;
    UIView *_satelliteView;
    NSArray *_soundWaveSizeList;
    NSArray *_soundAlphaList;
    UIView *_soundWaveContainer;
    double _bgExpandWidth;
    double _bgShortWidth;
    double _bgMaskWidth;
    double _recordBtnSize;
    double _bgSmallExpandWidth;
    double _bgSmallMaskWidth;
    double _lastVolume;
    unsigned long long _recordStatus;
    UILongPressGestureRecognizer *_longPress;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPress; // @synthesize longPress=_longPress;
@property(nonatomic) unsigned long long recordStatus; // @synthesize recordStatus=_recordStatus;
@property(nonatomic) _Bool isInitSoundWave; // @synthesize isInitSoundWave=_isInitSoundWave;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) double lastVolume; // @synthesize lastVolume=_lastVolume;
@property(nonatomic) double bgSmallMaskWidth; // @synthesize bgSmallMaskWidth=_bgSmallMaskWidth;
@property(nonatomic) double bgSmallExpandWidth; // @synthesize bgSmallExpandWidth=_bgSmallExpandWidth;
@property(nonatomic) double recordBtnSize; // @synthesize recordBtnSize=_recordBtnSize;
@property(nonatomic) double bgMaskWidth; // @synthesize bgMaskWidth=_bgMaskWidth;
@property(nonatomic) double bgShortWidth; // @synthesize bgShortWidth=_bgShortWidth;
@property(nonatomic) double bgExpandWidth; // @synthesize bgExpandWidth=_bgExpandWidth;
@property(retain, nonatomic) UIView *soundWaveContainer; // @synthesize soundWaveContainer=_soundWaveContainer;
@property(retain, nonatomic) NSArray *soundAlphaList; // @synthesize soundAlphaList=_soundAlphaList;
@property(retain, nonatomic) NSArray *soundWaveSizeList; // @synthesize soundWaveSizeList=_soundWaveSizeList;
@property(retain, nonatomic) UIView *satelliteView; // @synthesize satelliteView=_satelliteView;
@property(retain, nonatomic) UIView *textMaskView; // @synthesize textMaskView=_textMaskView;
@property(retain, nonatomic) UILabel *resultLabel; // @synthesize resultLabel=_resultLabel;
@property(retain, nonatomic) UILabel *subTextLabel; // @synthesize subTextLabel=_subTextLabel;
@property(retain, nonatomic) UILabel *mainTextLabel; // @synthesize mainTextLabel=_mainTextLabel;
@property(retain, nonatomic) UIButton *recordBtn; // @synthesize recordBtn=_recordBtn;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) NSString *commandText; // @synthesize commandText=_commandText;
@property(nonatomic) __weak id <TADRecorderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) double bgHeight;
@property(nonatomic) double bgWidth;
- (void)removeSoundWave;
- (void)initSoundWave;
- (void)showSoundWaveWithVolume:(double)arg1;
- (void)resumeToNormal;
- (void)analyzeFailed;
- (void)analyzeSuccess;
- (void)addOrbitAnimation;
- (void)analyzeRecord;
- (void)recordBtnLongPressed:(id)arg1;
- (void)recordBtnTouchUp;
- (void)recordBtnTouchBegin;
- (void)showBgViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceExpandBgView;
- (void)showBgView:(_Bool)arg1;
- (void)hideBgView;
- (void)resetStatus;
- (void)changeSize:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithIntroText:(id)arg1 MainText:(id)arg2 TailText:(id)arg3;

@end


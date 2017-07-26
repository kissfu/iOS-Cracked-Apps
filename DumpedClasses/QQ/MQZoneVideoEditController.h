//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQVideoEditorController.h"

#import "MQZoneVideoEditViewDelegate.h"
#import "TBMultimediaEditClipVideoComponentDelegate.h"
#import "TBMultimediaEditViewDelegate.h"

@class MQZoneVideoEditView, NSString, TBStoryMusicModel, UIViewController<MQZoneMoodEditInputCellDelegate>;

@interface MQZoneVideoEditController : QQVideoEditorController <MQZoneVideoEditViewDelegate, TBMultimediaEditViewDelegate, TBMultimediaEditClipVideoComponentDelegate>
{
    MQZoneVideoEditView *_videoEditView;
    _Bool _needPlayMusic;
    TBStoryMusicModel *_storyMusicModel;
    _Bool _isFromLocal;
    UIViewController<MQZoneMoodEditInputCellDelegate> *_inputCellDelegate;
    long long _videoFromType;
    unsigned long long _editSettingMode;
}

@property(nonatomic) unsigned long long editSettingMode; // @synthesize editSettingMode=_editSettingMode;
@property(nonatomic) long long videoFromType; // @synthesize videoFromType=_videoFromType;
@property(nonatomic) _Bool isFromLocal; // @synthesize isFromLocal=_isFromLocal;
@property(nonatomic) __weak UIViewController<MQZoneMoodEditInputCellDelegate> *inputCellDelegate; // @synthesize inputCellDelegate=_inputCellDelegate;
- (void).cxx_destruct;
- (void)videoEditView:(id)arg1 eventWithAction:(long long)arg2 otherAction:(long long)arg3;
- (id)compositionVideoWithStartTime:(double)arg1 stopTime:(double)arg2;
- (void)startVideoPlayWithMusic:(_Bool)arg1 isGifClick:(_Bool)arg2;
- (void)stopVideoPlay;
- (void)originalButtonClick;
- (void)authorityButtonClick;
- (void)storyVideoPreviewDidPlay:(id)arg1;
- (void)play;
- (void)onKeyboardWillHideNotify:(id)arg1;
- (void)onKeyboardWillShowNotify:(id)arg1;
- (void)inputCellCheckTextState:(id)arg1 text:(id)arg2;
- (void)inputCellFinishEdit:(id)arg1 text:(id)arg2;
- (void)inputCellBecomeActive:(id)arg1;
- (void)inputCell:(id)arg1 textDidChange:(id)arg2;
- (_Bool)isGifBtnClick;
- (_Bool)isWaitForWifi;
- (_Bool)isSynQZone;
- (_Bool)isHD;
- (_Bool)isOriginal;
- (double)videoRate;
- (_Bool)showQualityButton;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (id)loadVideoEditView:(id)arg1 sendBtn:(id)arg2;
- (void)updateAuthorityButton:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

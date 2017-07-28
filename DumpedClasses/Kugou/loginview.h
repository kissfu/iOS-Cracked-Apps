//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AVAudioPlayerDelegate.h"
#import "RBDMuteSwitchDelegate.h"

@class AVAudioPlayer, NSOperationQueue, NSString, NSTimer, UIImageView;

@interface loginview : UIViewController <AVAudioPlayerDelegate, RBDMuteSwitchDelegate>
{
    NSOperationQueue *HttpQueue;
    UIImageView *_imageView;
    NSTimer *updateTimer;
    _Bool _isMute;
    AVAudioPlayer *player;
    id <HelloKugouDelegate> _delegate;
    long long _currentType;
}

@property(nonatomic) long long currentType; // @synthesize currentType=_currentType;
@property __weak id <HelloKugouDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) AVAudioPlayer *player; // @synthesize player;
- (void).cxx_destruct;
- (void)dealloc;
- (void)isMuted:(_Bool)arg1;
- (void)stopPlayAudio;
- (void)beginDetection;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)updateBackground;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)playSplashBackgroundSound:(id)arg1;
- (void)playbackgrounbSound:(id)arg1;
- (void)detection;
- (void)playSplashAudioWithAudioPath:(id)arg1;
- (void)playHelloKugou;
- (void)viewDidLoad;
- (id)init;
- (void)playLoginMusic;
- (void)playSplashAudioThreadProc:(id)arg1;
- (void)playLoginMusicThreadProc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

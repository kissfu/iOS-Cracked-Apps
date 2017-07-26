//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSString, TBPSAVButton, TBPSCircularButton;

@interface TBPSPhotoSearchButtomView : UIView
{
    UIView *_allSearchView;
    TBPSAVButton *_btnAllSearch;
    UIView *_albumView;
    TBPSAVButton *_btnAlbum;
    UIView *_circleView;
    _Bool _hideAllSearch;
    NSString *_pssource;
    TBPSCircularButton *_btnCapture;
    NSString *_captureColor;
    id <TBPSPhotoSearchButtomViewDelegate> _delegate;
    NSDictionary *_buttonSetting;
}

@property(retain, nonatomic) NSDictionary *buttonSetting; // @synthesize buttonSetting=_buttonSetting;
@property(nonatomic) id <TBPSPhotoSearchButtomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *captureColor; // @synthesize captureColor=_captureColor;
@property(retain, nonatomic) TBPSAVButton *btnAlbum; // @synthesize btnAlbum=_btnAlbum;
@property(retain, nonatomic) TBPSCircularButton *btnCapture; // @synthesize btnCapture=_btnCapture;
@property(nonatomic) _Bool hideAllSearch; // @synthesize hideAllSearch=_hideAllSearch;
@property(retain, nonatomic) NSString *pssource; // @synthesize pssource=_pssource;
- (void).cxx_destruct;
- (void)scanPhotoLibrary:(id)arg1;
- (void)capture:(id)arg1;
- (void)layoutSubviews;
- (void)clickedAllSearch:(id)arg1;
- (void)showButtonSetting:(id)arg1;
- (void)checkAllSearchSetting;
- (id)initWithFrame:(struct CGRect)arg1;

@end

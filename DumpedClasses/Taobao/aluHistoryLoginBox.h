//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluLoginBox.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, Reachability, UIButton, UIImage, UIImageView, UILabel, aluScrollView;

@interface aluHistoryLoginBox : aluLoginBox <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    double headImagePadding;
    double headImageY;
    double headImageLength;
    double scrollViewPaddingTop;
    double paddingScrollerView;
    int currentNum;
    int currentImageNum;
    int deleteButtonLength;
    float deleteButtonSize;
    _Bool _deleteImageViewIsShowed;
    _Bool _isNetWorkOK;
    aluScrollView *_aluScrollView;
    NSMutableArray *_headImageViewArray;
    NSMutableArray *_headImageArray;
    NSMutableArray *_deleteButtonArray;
    UILabel *_nickLable;
    UIImageView *_currentBigImageView;
    UIButton *_currentDeleteImageButton;
    UIButton *_currentDeleteButton;
    UIImage *_defaultImage;
    UIImage *_deleteImage;
    Reachability *_internetReachability;
    Reachability *_wifiReachability;
    id <IDataStore> _documentDataSotre;
}

+ (id)historyLoginBoxWith:(id)arg1 frame:(struct CGRect)arg2 isSelectHistoryAccountEnabled:(_Bool)arg3 togglePasswordShowEnabled:(_Bool)arg4 customUIDelegate:(id)arg5 historyLoginId:(id)arg6;
@property(retain, nonatomic) id <IDataStore> documentDataSotre; // @synthesize documentDataSotre=_documentDataSotre;
@property(nonatomic) _Bool isNetWorkOK; // @synthesize isNetWorkOK=_isNetWorkOK;
@property(retain, nonatomic) Reachability *wifiReachability; // @synthesize wifiReachability=_wifiReachability;
@property(retain, nonatomic) Reachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property(retain, nonatomic) UIImage *deleteImage; // @synthesize deleteImage=_deleteImage;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) UIButton *currentDeleteButton; // @synthesize currentDeleteButton=_currentDeleteButton;
@property(retain, nonatomic) UIButton *currentDeleteImageButton; // @synthesize currentDeleteImageButton=_currentDeleteImageButton;
@property(retain, nonatomic) UIImageView *currentBigImageView; // @synthesize currentBigImageView=_currentBigImageView;
@property(retain, nonatomic) UILabel *nickLable; // @synthesize nickLable=_nickLable;
@property(retain, nonatomic) NSMutableArray *deleteButtonArray; // @synthesize deleteButtonArray=_deleteButtonArray;
@property(retain, nonatomic) NSMutableArray *headImageArray; // @synthesize headImageArray=_headImageArray;
@property(retain, nonatomic) NSMutableArray *headImageViewArray; // @synthesize headImageViewArray=_headImageViewArray;
@property(retain, nonatomic) aluScrollView *aluScrollView; // @synthesize aluScrollView=_aluScrollView;
@property(nonatomic) _Bool deleteImageViewIsShowed; // @synthesize deleteImageViewIsShowed=_deleteImageViewIsShowed;
- (void).cxx_destruct;
- (id)alu_p_CurrentUser;
- (void)alu_p_setDefaultView;
- (void)aluEarthquakeEnded:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)aluEarthquake:(id)arg1;
- (void)deleteImageViewHideden;
- (void)deleteImageViewShow;
- (void)clearLoginHistoryWithIndex:(id)arg1;
- (void)deleteUser:(id)arg1;
- (void)aluHandleLongPress:(id)arg1;
- (void)onScrollViewStop:(id)arg1 withCurrentOffset:(double)arg2;
- (void)imageLoadWithImageUrl:(id)arg1 headImageNum:(int)arg2 uiImageView:(id)arg3 currentImageViewNum:(long long)arg4;
- (id)getGrayImage:(id)arg1;
- (void)setSmallFrameAndRadius;
- (void)setBigFrameAndRadius:(int)arg1 forImageView:(id)arg2 withHeadImage:(id)arg3;
- (void)onStopInScrollView:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onDragging;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)alu_p_createImageView:(id)arg1;
- (void)headImageClicked:(id)arg1;
- (void)imageTurn:(id)arg1;
- (void)dealloc;
- (void)updateNetWorkStatus;
- (void)refrashImage;
- (void)reachabilityChanged:(id)arg1;
- (void)loadHeadImageLoginBox;
- (id)initWithLoginBoxWithHeadImgFrame:(struct CGRect)arg1 With:(id)arg2 isSelectHistoryAccountEnabled:(_Bool)arg3 togglePasswordShowEnabled:(_Bool)arg4 customUIDelegate:(id)arg5 historyLoginId:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

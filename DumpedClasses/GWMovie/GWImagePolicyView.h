//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWImageView.h"

@class GWImageLoadingProgressView, NSString, UIImageView;
@protocol GWImagePolicyViewDelegate;

@interface GWImagePolicyView : GWImageView
{
    _Bool _isProgressive;
    NSString *_targetUrlStr;
    id <GWImagePolicyViewDelegate> _policyDelegate;
    UIImageView *_tipsImageView;
    unsigned long long _threadId;
    GWImageLoadingProgressView *_percentView;
}

@property(nonatomic) _Bool isProgressive; // @synthesize isProgressive=_isProgressive;
@property(retain, nonatomic) GWImageLoadingProgressView *percentView; // @synthesize percentView=_percentView;
@property unsigned long long threadId; // @synthesize threadId=_threadId;
@property(retain, nonatomic) UIImageView *tipsImageView; // @synthesize tipsImageView=_tipsImageView;
@property(nonatomic) __weak id <GWImagePolicyViewDelegate> policyDelegate; // @synthesize policyDelegate=_policyDelegate;
@property(copy, nonatomic) NSString *targetUrlStr; // @synthesize targetUrlStr=_targetUrlStr;
- (void).cxx_destruct;
- (void)setFitSizeImageWithURLString:(id)arg1 placeholderURLString:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)setFitSizeImageWithURLString:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)setPolicyImageWithURLString:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)setPolicyImageWithURLString:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)setImageWithURLString:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3 policy:(id)arg4;
- (void)setImageWithURLString:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5 policy:(id)arg6;
- (void)setImageWithURLString:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5 policy:(id)arg6 async:(_Bool)arg7;
- (void)didReceiveImage:(id)arg1 error:(id)arg2 cacheType:(long long)arg3 finished:(_Bool)arg4 imageURL:(id)arg5;
- (void)setProgressViewHidden:(_Bool)arg1;
- (void)showTipsViewWithImage:(id)arg1;
- (void)sd_cancelCurrentImageLoad;
- (void)cancelCurrentImageLoad;
- (void)layoutSubviews;
- (_Bool)canShowPercentView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)imageWithType:(id)arg1;
- (void)emptyImage;
- (void)setGceditionWithType:(id)arg1;
@property(nonatomic) double imageHeight;

@end

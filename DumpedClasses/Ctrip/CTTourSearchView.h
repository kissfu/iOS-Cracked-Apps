//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface CTTourSearchView : UIView
{
    UIImageView *_searchImageView;
    UIImageView *_locationImageView;
    NSLayoutConstraint *_loupeRightConstraint;
    NSLayoutConstraint *_loupeLeftConstraint;
    NSString *_nowCityName;
    UILabel *_locationNameLabel;
    UILabel *_destinationNameLabel;
    NSLayoutConstraint *_lineCenterXConstraint;
    CDUnknownBlockType _returnLoSenderBlock;
    CDUnknownBlockType _returnDeSenderBlock;
    NSLayoutConstraint *_carveLineWidth;
}

+ (id)nib;
@property(nonatomic) __weak NSLayoutConstraint *carveLineWidth; // @synthesize carveLineWidth=_carveLineWidth;
@property(copy, nonatomic) CDUnknownBlockType returnDeSenderBlock; // @synthesize returnDeSenderBlock=_returnDeSenderBlock;
@property(copy, nonatomic) CDUnknownBlockType returnLoSenderBlock; // @synthesize returnLoSenderBlock=_returnLoSenderBlock;
@property(nonatomic) __weak NSLayoutConstraint *lineCenterXConstraint; // @synthesize lineCenterXConstraint=_lineCenterXConstraint;
@property(nonatomic) __weak UILabel *destinationNameLabel; // @synthesize destinationNameLabel=_destinationNameLabel;
@property(nonatomic) __weak UILabel *locationNameLabel; // @synthesize locationNameLabel=_locationNameLabel;
@property(copy, nonatomic) NSString *nowCityName; // @synthesize nowCityName=_nowCityName;
@property(nonatomic) __weak NSLayoutConstraint *loupeLeftConstraint; // @synthesize loupeLeftConstraint=_loupeLeftConstraint;
@property(nonatomic) __weak NSLayoutConstraint *loupeRightConstraint; // @synthesize loupeRightConstraint=_loupeRightConstraint;
@property(nonatomic) __weak UIImageView *locationImageView; // @synthesize locationImageView=_locationImageView;
@property(nonatomic) __weak UIImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
- (void).cxx_destruct;
- (void)returnLoSender:(CDUnknownBlockType)arg1;
- (void)returnDeSender:(CDUnknownBlockType)arg1;
- (void)destinationButton:(id)arg1;
- (void)locationSender:(id)arg1;
- (void)awakeFromNib;

@end


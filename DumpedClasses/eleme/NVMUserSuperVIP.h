//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface NVMUserSuperVIP : NVMModel
{
    long long _status;
    NSString *_titleText;
    NSString *_vipURL;
    NSString *_iconHash;
    NSString *_subText;
    NSString *_descriptionText;
    NSString *_descriptionHighlight;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *descriptionHighlight; // @synthesize descriptionHighlight=_descriptionHighlight;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *subText; // @synthesize subText=_subText;
@property(copy, nonatomic) NSString *iconHash; // @synthesize iconHash=_iconHash;
@property(copy, nonatomic) NSString *vipURL; // @synthesize vipURL=_vipURL;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)attributedSubTitle;
- (_Bool)showSuperVipIcon;
- (_Bool)showSuperVipCell;

@end

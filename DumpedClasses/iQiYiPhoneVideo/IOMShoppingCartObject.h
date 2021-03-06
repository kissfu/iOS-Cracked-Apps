//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface IOMShoppingCartObject : NSObject
{
    _Bool _selectAll;
    _Bool _chooseAll;
    NSString *_uid;
    NSString *_login_status;
    NSString *_goshoppingUrl;
    NSString *_myFavorUrl;
    NSString *_calcApiUrl;
    NSString *_calcUrl;
    NSString *_totalDiscount;
    NSString *_realTotalPrice;
    NSString *_shop_step;
    NSString *_totalSize;
    NSArray *_cart_items;
    NSString *_goodsIdentifier;
}

+ (void)resetAllDelete;
+ (void)resetAllEditMode;
@property(copy, nonatomic) NSString *goodsIdentifier; // @synthesize goodsIdentifier=_goodsIdentifier;
@property(retain, nonatomic) NSArray *cart_items; // @synthesize cart_items=_cart_items;
@property(nonatomic) _Bool chooseAll; // @synthesize chooseAll=_chooseAll;
@property(nonatomic) _Bool selectAll; // @synthesize selectAll=_selectAll;
@property(copy, nonatomic) NSString *totalSize; // @synthesize totalSize=_totalSize;
@property(copy, nonatomic) NSString *shop_step; // @synthesize shop_step=_shop_step;
@property(copy, nonatomic) NSString *realTotalPrice; // @synthesize realTotalPrice=_realTotalPrice;
@property(copy, nonatomic) NSString *totalDiscount; // @synthesize totalDiscount=_totalDiscount;
@property(copy, nonatomic) NSString *calcUrl; // @synthesize calcUrl=_calcUrl;
@property(copy, nonatomic) NSString *calcApiUrl; // @synthesize calcApiUrl=_calcApiUrl;
@property(copy, nonatomic) NSString *myFavorUrl; // @synthesize myFavorUrl=_myFavorUrl;
@property(copy, nonatomic) NSString *goshoppingUrl; // @synthesize goshoppingUrl=_goshoppingUrl;
@property(copy, nonatomic) NSString *login_status; // @synthesize login_status=_login_status;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
@property(nonatomic) long long totalDeleteSize;
@property(nonatomic) _Bool isWillDeleteAll;
@property(readonly, nonatomic) unsigned long long shopType;
- (void)parseDataDict:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol JSApiScanLicenceViewControllerDelegate <NSObject>
- (void)didFindCalibrateCardImage:(UIImage *)arg1 cardType:(unsigned long long)arg2;
- (void)didFindBankCardNumber:(NSString *)arg1 cardImage:(UIImage *)arg2;
- (void)onReturnBtnClick;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, TBSNSFollowShopCommendCellCollectButton, TBSNSFollowShopRecommendShop;

@protocol TBSNSFollowShopCommendCellDelegate <NSObject>
- (void)followShopCommendCellDidClickCanvasForRecommendShop:(TBSNSFollowShopRecommendShop *)arg1;
- (void)followShopCommendCellDidClickCollectButton:(TBSNSFollowShopCommendCellCollectButton *)arg1 forRecommendShop:(TBSNSFollowShopRecommendShop *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

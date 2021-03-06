//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RDVTabBarController, TabDataItem, UIViewController;

@protocol RDVTabBarControllerDelegate <NSObject>

@optional
- (void)tabBarController:(RDVTabBarController *)arg1 menuLongPress:(id)arg2;
- (void)tabBarController:(RDVTabBarController *)arg1 menuAction:(id)arg2;
- (void)tabBarController:(RDVTabBarController *)arg1 didSelectTabDataItem:(TabDataItem *)arg2;
- (_Bool)tabBarController:(RDVTabBarController *)arg1 shouldTabDataItem:(TabDataItem *)arg2;
- (void)tabBarController:(RDVTabBarController *)arg1 didSelectViewController:(UIViewController *)arg2;
- (_Bool)tabBarController:(RDVTabBarController *)arg1 shouldSelectViewController:(UIViewController *)arg2;
@end


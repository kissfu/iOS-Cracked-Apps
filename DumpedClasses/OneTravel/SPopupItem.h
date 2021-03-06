//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface SPopupItem : NSObject
{
    UIColor *_normalColor;
    UIColor *_helightColor;
    UIFont *_txtFont;
    NSString *_txtStr;
    long long _popType;
    NSString *_imageName;
}

@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) long long popType; // @synthesize popType=_popType;
@property(copy, nonatomic) NSString *txtStr; // @synthesize txtStr=_txtStr;
@property(retain, nonatomic) UIFont *txtFont; // @synthesize txtFont=_txtFont;
@property(retain, nonatomic) UIColor *helightColor; // @synthesize helightColor=_helightColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
- (void).cxx_destruct;

@end


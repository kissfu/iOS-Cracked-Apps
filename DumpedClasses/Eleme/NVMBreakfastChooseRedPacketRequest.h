//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NVMBreakfastChooseRedPacketRequest : NSObject
{
    _Bool _freshUser;
    long long _userId;
    double _foodAmount;
    NSString *_phoneNo;
}

@property(nonatomic) _Bool freshUser; // @synthesize freshUser=_freshUser;
@property(retain, nonatomic) NSString *phoneNo; // @synthesize phoneNo=_phoneNo;
@property(nonatomic) double foodAmount; // @synthesize foodAmount=_foodAmount;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface CTHotelCheckDateModel : NSObject <NSCopying>
{
    NSString *_checkinDate;
    NSString *_checkoutDate;
}

@property(copy, nonatomic) NSString *checkoutDate; // @synthesize checkoutDate=_checkoutDate;
@property(copy, nonatomic) NSString *checkinDate; // @synthesize checkinDate=_checkinDate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isTodayCheckInTommorrowCheckout;
- (id)init;

@end

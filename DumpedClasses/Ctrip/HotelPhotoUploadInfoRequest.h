//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class RequestHead;

@interface HotelPhotoUploadInfoRequest : CTBusinessBean
{
    int _serviceVersion;
    int _hotelID;
    int _fromTag;
    int _roomId;
    RequestHead *_head;
}

@property(nonatomic) int roomId; // @synthesize roomId=_roomId;
@property(nonatomic) int fromTag; // @synthesize fromTag=_fromTag;
@property(nonatomic) int hotelID; // @synthesize hotelID=_hotelID;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
@property(retain, nonatomic) RequestHead *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

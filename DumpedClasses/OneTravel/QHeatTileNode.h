//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QHeatTileNodeProtocol.h"

@class NSString;

@interface QHeatTileNode : NSObject <QHeatTileNodeProtocol>
{
    double _value;
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HTTPResponse.h"

@class NSData;

@interface TADAvailabilityTestResponse : NSObject <HTTPResponse>
{
    NSData *_responseData;
}

@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
- (void).cxx_destruct;
- (_Bool)isDone;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (id)init;

@end

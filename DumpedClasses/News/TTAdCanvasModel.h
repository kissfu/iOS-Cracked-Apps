//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>, TTAdCanvasDataModel<Optional>;

@interface TTAdCanvasModel : JSONModel
{
    NSString<Optional> *_message;
    TTAdCanvasDataModel<Optional> *_data;
}

@property(retain, nonatomic) TTAdCanvasDataModel<Optional> *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
- (void).cxx_destruct;

@end

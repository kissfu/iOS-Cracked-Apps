//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XAdAFHTTPRequestOperation, XAdAFHTTPRequestOperationManager;

@interface XAdJsonLoader : NSObject
{
    XAdAFHTTPRequestOperationManager *_requestManager;
    XAdAFHTTPRequestOperation *_requestOperation;
    id <XAdJsonLoaderDelegate> _loaderDelegate;
}

@property(nonatomic) __weak id <XAdJsonLoaderDelegate> loaderDelegate; // @synthesize loaderDelegate=_loaderDelegate;
- (void).cxx_destruct;
- (id)afRequestAdaptor:(id)arg1;
- (void)load:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTSJSEventDelegate.h"

@class NSString;

@interface WASearchResultLogicCallbackWrap : NSObject <FTSJSEventDelegate>
{
    id <WASearchResultLogicCallbackWrapDelegate> _delegate;
}

@property(nonatomic) __weak id <WASearchResultLogicCallbackWrapDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onSearchInputChanged:(id)arg1;
- (void)onReportWeAppSearchRealTime:(id)arg1;
- (void)onOpenWeAppPage:(id)arg1;
- (void)onPreSearch:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

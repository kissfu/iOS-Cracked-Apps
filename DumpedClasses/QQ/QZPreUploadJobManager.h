//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZJobManager.h"

@interface QZPreUploadJobManager : QZJobManager
{
}

+ (id)sharedManager;
- (void)notifyOperationCountChanged;
- (void)notifyOperationFailed:(id)arg1;
- (void)notifyOperationSuccess:(id)arg1;
- (void)restoreJobsIfNeeded;
- (void)onAccountChanged:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMG3Database.h"

@interface _GrowingDataBaseWithMutex : FMG3Database
{
    struct _opaque_pthread_mutex_t _databaseMutex;
}

@property(readonly, nonatomic) struct _opaque_pthread_mutex_t *dbMutex;
- (id)initWithPath:(id)arg1;

@end


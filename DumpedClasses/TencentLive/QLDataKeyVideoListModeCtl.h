//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLDataKeyBaseModelCtl.h"

@class NSString, QLJCEVideoDataList, QLJCEVideoListModel;

@interface QLDataKeyVideoListModeCtl : QLDataKeyBaseModelCtl
{
    QLJCEVideoDataList *_dataList;
    QLJCEVideoListModel *_dataModel;
    NSString *_lastVidReferKey;
}

@property(retain, nonatomic) NSString *lastVidReferKey; // @synthesize lastVidReferKey=_lastVidReferKey;
@property(retain, nonatomic) QLJCEVideoListModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) QLJCEVideoDataList *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendNotificationAfterDataLoad;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)loadDataWithCachePolicy:(int)arg1 more:(_Bool)arg2;
- (void)initDataModel;
- (void)cancelDataModelRequest;
- (void)startLoadModel;
- (void)refreshResponseToDetailController;
- (void)playIndexChanged:(id)arg1;

@end


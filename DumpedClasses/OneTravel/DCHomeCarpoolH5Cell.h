//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "DCHomeTableViewCellProtocol.h"

@class DCHomeCarpoolH5Model, DCHomeDriverWebVC, NSString, UIWebView;

@interface DCHomeCarpoolH5Cell : UITableViewCell <DCHomeTableViewCellProtocol>
{
    DCHomeCarpoolH5Model *curModel;
    DCHomeDriverWebVC *webVC;
    UIWebView *webView;
    _Bool isfrst;
}

+ (double)cellHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
- (id)currentDataModel;
- (void)refreshCellByDataModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class NVMOrderCancelDetail, UIImageView, UILabel;

@interface NVMCancelOrderReasonNoteCell : NVMTableViewCell
{
    NVMOrderCancelDetail *_cancelDetail;
    UILabel *_noteLabel;
    UILabel *_noteDetailLabel;
    UIImageView *_noteImageView;
}

@property(retain, nonatomic) UIImageView *noteImageView; // @synthesize noteImageView=_noteImageView;
@property(retain, nonatomic) UILabel *noteDetailLabel; // @synthesize noteDetailLabel=_noteDetailLabel;
@property(retain, nonatomic) UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) NVMOrderCancelDetail *cancelDetail; // @synthesize cancelDetail=_cancelDetail;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)loadViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

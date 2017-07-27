//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLLiveChatBaseCell.h"

@class QLRichLabel, QLSImageView, UIButton;

@interface QLLiveChatVideoCell : QLLiveChatBaseCell
{
    QLRichLabel *_contentLable;
    QLSImageView *_contentImg;
    UIButton *_playBtn;
}

+ (double)heightOfSubViewWithBaseInfo:(id)arg1 contentLines:(long long)arg2;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) QLSImageView *contentImg; // @synthesize contentImg=_contentImg;
@property(retain, nonatomic) QLRichLabel *contentLable; // @synthesize contentLable=_contentLable;
- (void).cxx_destruct;
- (void)didTapPlayButton:(id)arg1;
- (void)refreshInterfaceUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

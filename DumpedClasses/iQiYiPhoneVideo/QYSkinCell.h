//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class QYSelectSkinButton, UIImageView, UILabel, UIView;
@protocol SkinDownloadDelegate;

@interface QYSkinCell : UITableViewCell
{
    int _cellState;
    QYSelectSkinButton *_useButton;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_contentTitleLabel;
    UILabel *_simpleTitleLabel;
    UIImageView *_memberIcon;
    UIImageView *_selectedIcon;
    id <SkinDownloadDelegate> _delegate;
    UIView *_seperatorView;
}

@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(nonatomic) int cellState; // @synthesize cellState=_cellState;
@property(nonatomic) id <SkinDownloadDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(retain, nonatomic) UIImageView *memberIcon; // @synthesize memberIcon=_memberIcon;
@property(retain, nonatomic) UILabel *simpleTitleLabel; // @synthesize simpleTitleLabel=_simpleTitleLabel;
@property(retain, nonatomic) UILabel *contentTitleLabel; // @synthesize contentTitleLabel=_contentTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) QYSelectSkinButton *useButton; // @synthesize useButton=_useButton;
- (void)downloadSkin;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ButtonState:(int)arg3;
- (void)dealloc;

@end


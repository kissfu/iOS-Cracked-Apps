//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTDashLineView, NSLayoutConstraint, UIImageView, UILabel;

@interface CTInternationalFlightsStudentsCell : UITableViewCell
{
    _Bool _isHiddened;
    id <CTInternationalFlightsStudentsCellDelegate> _delegate;
    CTDashLineView *_lineView;
    UILabel *_labelStudent;
    NSLayoutConstraint *_buttonCloseWidthConstraint;
    UIImageView *_backgroundViewDown;
    UIImageView *_backgroundViewMid;
}

+ (double)setupContentViewInStudebtsCell:(id)arg1 withInfo:(id)arg2;
@property(nonatomic) __weak UIImageView *backgroundViewMid; // @synthesize backgroundViewMid=_backgroundViewMid;
@property(nonatomic) __weak UIImageView *backgroundViewDown; // @synthesize backgroundViewDown=_backgroundViewDown;
@property(nonatomic) _Bool isHiddened; // @synthesize isHiddened=_isHiddened;
@property(nonatomic) __weak NSLayoutConstraint *buttonCloseWidthConstraint; // @synthesize buttonCloseWidthConstraint=_buttonCloseWidthConstraint;
@property(nonatomic) __weak UILabel *labelStudent; // @synthesize labelStudent=_labelStudent;
@property(retain, nonatomic) CTDashLineView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak id <CTInternationalFlightsStudentsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setBackgroundStyleType:(int)arg1;
- (void)buttonCloseClicked:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYABLoadingView, UILabel;
@protocol QYABAddressBookNoteViewDelegate;

@interface QYABAddressBookNoteView : UIView
{
    UIView *noContentView;
    UIView *uploadFailedView;
    UIView *noPrivilegeView;
    UIView *searchNoContentView;
    UIView *loadingView;
    UIView *progressView;
    QYABLoadingView *progressLoadingAnimeView;
    UILabel *progressLabel;
    QYABLoadingView *loadingAnimeView;
    id <QYABAddressBookNoteViewDelegate> _delegate;
}

@property(nonatomic) __weak id <QYABAddressBookNoteViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)hideSearchNoContentView;
- (void)showSearchNoContentView;
- (void)hideNoContentView;
- (void)showNoContentView;
- (void)retryUploadButtonClicked:(id)arg1;
- (void)hideUploadFailedView;
- (void)showUploadFailedView;
- (void)hideUploadViewProgress;
- (void)setUploadViewProgress:(double)arg1;
- (void)settingButtonClicked:(id)arg1;
- (void)hideNoPrivilegeView;
- (void)showNoPrivilegeView;
- (void)hideAllView;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


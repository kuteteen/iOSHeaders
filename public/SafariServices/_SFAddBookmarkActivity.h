//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariServices/_SFActivity.h>

#import "_SFSingleBookmarkNavigationControllerDelegate.h"

@class _SFSingleBookmarkNavigationController;

@interface _SFAddBookmarkActivity : _SFActivity <_SFSingleBookmarkNavigationControllerDelegate>
{
    _SFSingleBookmarkNavigationController *_bookmarkNavigationController;
}

- (void).cxx_destruct;
- (_Bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (id)_embeddedActivityViewController;
- (id)activityViewController;
@property(readonly, nonatomic) _SFSingleBookmarkNavigationController *bookmarkNavigationController;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;

@end


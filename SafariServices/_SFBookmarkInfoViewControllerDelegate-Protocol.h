//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFBookmarkInfoViewController;

@protocol _SFBookmarkInfoViewControllerDelegate <NSObject>

@optional
- (_Bool)bookmarkInfoViewControllerCanSaveBookmarkChanges:(_SFBookmarkInfoViewController *)arg1;
- (_Bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(_SFBookmarkInfoViewController *)arg1;
- (void)bookmarkInfoViewController:(_SFBookmarkInfoViewController *)arg1 didFinishWithResult:(_Bool)arg2;
@end


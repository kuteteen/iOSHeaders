//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSArray, NSString, UIScrollView, _UIButtonBar;

__attribute__((visibility("hidden")))
@interface _UIButtonGroupViewController : UIViewController <UIPopoverPresentationControllerDelegate>
{
    _UIButtonBar *_originalOwner;
    _UIButtonBar *_buttonBar;
    UIScrollView *_scrollView;
    NSArray *_barButtonItemGroups;
}

- (void).cxx_destruct;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)_cleanupForDismissal;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dismissIfNecessary;
- (id)initWithBarButtonItemGroups:(id)arg1 fromButtonBar:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


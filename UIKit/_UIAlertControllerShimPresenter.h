//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIPopoverControllerDelegate-Protocol.h>

@class NSString, UIAlertController, UIAlertView, UIPopoverController, UIViewController, _UIAlertControllerShimPresenterWindow;
@protocol UIPopoverControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShimPresenter : NSObject <UIPopoverControllerDelegate>
{
    UIPopoverController *_popoverController;
    id <UIPopoverControllerDelegate> _popoverDelegate;
    UIViewController *_inPopoverViewController;
    _UIAlertControllerShimPresenterWindow *_window;
    UIAlertController *_alertController;
    UIAlertView *_legacyAlert;
}

+ (id)_topmostAlertWindow;
+ (void)_removePresenter:(id)arg1;
+ (void)_addPresenter:(id)arg1;
+ (id)_currentFullScreenAlertPresenters;
+ (void)_cancelPendingTouchesIfAppropriate;
+ (_Bool)_shouldPresentActionSheetsFullscreen;
@property(nonatomic) UIAlertView *legacyAlert; // @synthesize legacyAlert=_legacyAlert;
@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) _UIAlertControllerShimPresenterWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_createWindowIfNecessary;
- (void)_tearDownInPopoverViewController;
@property(nonatomic) __weak id <UIPopoverControllerDelegate> popoverDelegate;
- (id)_popoverController;
- (void)_dismissAlertControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentAlertControllerFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_presentAlertControllerFromBarButtonItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentAlertControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@protocol WKActionSheetDelegate;

__attribute__((visibility("hidden")))
@interface WKActionSheet : UIAlertController
{
    id <WKActionSheetDelegate> _sheetDelegate;
    unsigned long long _arrowDirections;
    _Bool _isRotating;
    _Bool _readyToPresentAfterRotation;
    long long _currentPresentationStyle;
    struct RetainPtr<UIViewController> _currentPresentingViewController;
    struct RetainPtr<UIViewController> _presentedViewControllerWhileRotating;
    struct RetainPtr<id<UIPopoverPresentationControllerDelegate>> _popoverPresentationControllerDelegateWhileRotating;
}

@property(nonatomic) unsigned long long arrowDirections; // @synthesize arrowDirections=_arrowDirections;
@property(nonatomic) id <WKActionSheetDelegate> sheetDelegate; // @synthesize sheetDelegate=_sheetDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didRotate;
- (void)_didRotateAndLayout;
- (void)updateSheetPosition;
- (void)willRotate;
- (void)doneWithSheet:(_Bool)arg1;
- (_Bool)presentSheetFromRect:(struct CGRect)arg1;
- (struct CGRect)_presentationRectForStyle:(long long)arg1;
- (_Bool)presentSheet:(long long)arg1;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end


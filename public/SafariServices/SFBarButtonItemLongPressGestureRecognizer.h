//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILongPressGestureRecognizer.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface SFBarButtonItemLongPressGestureRecognizer : UILongPressGestureRecognizer <UIGestureRecognizerDelegate>
{
    UIBarButtonItem *_barButtonItem;
    id _longPressTarget;
    SEL _longPressAction;
}

+ (id)gestureRecognizerWithLongPressTarget:(id)arg1 action:(SEL)arg2 attachedToBarButtonItem:(id)arg3;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateMinimumPressDurationForContentSizeCategory:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_invokeLongPressAction;
- (void)longPress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


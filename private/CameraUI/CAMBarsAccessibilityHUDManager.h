//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UILongPressGestureRecognizer, UIView;
@protocol CAMBarsAccessibilityHUDManagerDelegate, CAMBarsAccessibilityHUDManagerGestureProvider><CAMAccessibilityHUDItemProvider;

@interface CAMBarsAccessibilityHUDManager : NSObject <UIGestureRecognizerDelegate>
{
    UIView<CAMBarsAccessibilityHUDManagerGestureProvider><CAMAccessibilityHUDItemProvider> *_view;
    id <CAMBarsAccessibilityHUDManagerDelegate> _delegate;
    UILongPressGestureRecognizer *__accessibilityLongPressGestureRecognizer;
}

@property(retain, nonatomic, setter=_setAccessibilityLongPressGestureRecognizer:) UILongPressGestureRecognizer *_accessibilityLongPressGestureRecognizer; // @synthesize _accessibilityLongPressGestureRecognizer=__accessibilityLongPressGestureRecognizer;
@property(nonatomic) __weak id <CAMBarsAccessibilityHUDManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView<CAMBarsAccessibilityHUDManagerGestureProvider><CAMAccessibilityHUDItemProvider> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)preferredContentSizeChanged;
- (void)_handleAccessibilityLongPressGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGPoint)locationOfAccessibilityGestureInView:(id)arg1;
- (id)initWithView:(id)arg1 delegate:(id)arg2 cancelsTouchesInView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


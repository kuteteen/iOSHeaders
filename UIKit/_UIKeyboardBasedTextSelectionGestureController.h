//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIKeyboardTextSelectionGestureController.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController
{
    _Bool _delayForceMagnify;
    _Bool _didLongForcePress;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool didLongForcePress; // @synthesize didLongForcePress=_didLongForcePress;
@property(nonatomic) _Bool delayForceMagnify; // @synthesize delayForceMagnify=_delayForceMagnify;
- (_Bool)allowOneFingerDeepPress;
- (_Bool)oneFingerForcePressShouldCancelTouchesInView;
- (_Bool)oneFingerForcePressShouldFailWithoutForce;
- (double)oneFingerForcePressMinimumDuration;
- (void)_cleanupDeadGesturesIfNecessary;
- (Class)gestureCluster;

@end


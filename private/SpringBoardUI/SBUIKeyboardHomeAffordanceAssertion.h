//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIWindow;

@interface SBUIKeyboardHomeAffordanceAssertion : NSObject
{
    double _additionalEdgeMargin;
    UIWindow *_sourceWindow;
}

+ (id)assertionForGestureWindow:(id)arg1;
@property(nonatomic) __weak UIWindow *sourceWindow; // @synthesize sourceWindow=_sourceWindow;
@property(nonatomic) double additionalEdgeMargin; // @synthesize additionalEdgeMargin=_additionalEdgeMargin;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithGestureWindow:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSSecureCoding-Protocol.h>

@protocol UIInputViewSetPlacementDelegate;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacement : NSObject <NSSecureCoding>
{
    _Bool _dirty;
    id <UIInputViewSetPlacementDelegate> delegate;
    double _extendedHeight;
}

+ (id)placement;
+ (id)encodablePlacementsForXPC;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) double extendedHeight; // @synthesize extendedHeight=_extendedHeight;
@property(nonatomic) id <UIInputViewSetPlacementDelegate> delegate; // @synthesize delegate;
- (void)checkSizeForOwner:(id)arg1;
- (id)applicatorInfoForOwner:(id)arg1;
- (Class)applicatorClassForKeyboard:(_Bool)arg1;
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;
- (_Bool)accessoryViewWillAppear;
- (_Bool)inputViewWillAppear;
- (unsigned long long)notificationsForTransitionToPlacement:(id)arg1;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
@property(readonly, nonatomic) _Bool isInteractive;
@property(readonly, nonatomic) _Bool showsKeyboard;
@property(readonly, nonatomic) _Bool showsInputViews;
@property(readonly, nonatomic) _Bool isUndocked;
- (_Bool)isEqual:(id)arg1;
- (double)alpha;
- (void)setDirty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


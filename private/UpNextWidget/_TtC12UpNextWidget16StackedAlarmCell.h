//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSURL;

@interface _TtC12UpNextWidget16StackedAlarmCell : UIView
{
    // Error parsing type: , name: clockAppSectionURL
    // Error parsing type: , name: bellImageView
    // Error parsing type: , name: timeLabel
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: rowSeparator
    // Error parsing type: , name: containingVisualEffectView
    // Error parsing type: , name: showRowSeparator
    // Error parsing type: , name: persistentConstraints
}

+ (id)constraintsForBindingFrame:(id)arg1 toFrameOfView:(id)arg2;
+ (_Bool)requiresConstraintBasedLayout;
- (CDUnknownBlockType).cxx_destruct;
- (void)updateConstraints;
- (void)updateWithAlarm:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool showRowSeparator; // @synthesize showRowSeparator;
@property(nonatomic, copy) NSURL *clockAppSectionURL; // @synthesize clockAppSectionURL;

@end

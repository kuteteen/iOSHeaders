//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIStatusBar;

@interface CCUIStatusBar : UIView
{
    UIStatusBar *_compactTrailingStatusBar;
    UIStatusBar *_extendedLeadingStatusBar;
    UIStatusBar *_extendedTrailingStatusBar;
    unsigned long long _leadingState;
    unsigned long long _trailingState;
    struct UIEdgeInsets _compactEdgeInsets;
    struct UIEdgeInsets _expandedEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets expandedEdgeInsets; // @synthesize expandedEdgeInsets=_expandedEdgeInsets;
@property(nonatomic) struct UIEdgeInsets compactEdgeInsets; // @synthesize compactEdgeInsets=_compactEdgeInsets;
@property(nonatomic) unsigned long long trailingState; // @synthesize trailingState=_trailingState;
@property(nonatomic) unsigned long long leadingState; // @synthesize leadingState=_leadingState;
- (void).cxx_destruct;
- (void)controlCenterApplyPrimaryContentShadow;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) double expandedTrailingAlpha; // @dynamic expandedTrailingAlpha;
@property(nonatomic) double compactTrailingAlpha; // @dynamic compactTrailingAlpha;
@property(nonatomic) double leadingAlpha; // @dynamic leadingAlpha;
@property(nonatomic) long long compactStyle; // @dynamic compactStyle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CNActionViewDelegate.h"

@class NSArray, NSMutableDictionary, NSObject<CNActionsViewProtocol>, NSString, NUIContainerStackView, UIFont;

@interface CNActionsView : UIView <CNActionViewDelegate>
{
    NSObject<CNActionsViewProtocol> *_actionsDelegate;
    NSArray *_sortedActionTypes;
    double _spacing;
    long long _style;
    NUIContainerStackView *_stackView;
    NSMutableDictionary *_actionItemsByType;
    NSMutableDictionary *_actionViewsByType;
    UIFont *_titleFont;
}

+ (struct CGSize)intrinsicContentSizeForHorizontalLayoutForActionsViews:(id)arg1 spacing:(double)arg2;
+ (struct CGSize)intrinsicContentSizeForVerticalLayoutForActionsViews:(id)arg1 spacing:(double)arg2;
+ (long long)axisWithTitlesPresent:(_Bool)arg1;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSMutableDictionary *actionViewsByType; // @synthesize actionViewsByType=_actionViewsByType;
@property(retain, nonatomic) NSMutableDictionary *actionItemsByType; // @synthesize actionItemsByType=_actionItemsByType;
@property(retain, nonatomic) NUIContainerStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(copy, nonatomic) NSArray *sortedActionTypes; // @synthesize sortedActionTypes=_sortedActionTypes;
@property(nonatomic) __weak NSObject<CNActionsViewProtocol> *actionsDelegate; // @synthesize actionsDelegate=_actionsDelegate;
- (void).cxx_destruct;
- (void)didPressActionView:(id)arg1 longPress:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)resetActions;
- (void)updateAxis;
- (void)updateActionItem:(id)arg1;
- (void)removeActionItem:(id)arg1;
- (void)addActionItem:(id)arg1;
- (id)actionViewForType:(id)arg1;
- (unsigned long long)insertionIndexForType:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


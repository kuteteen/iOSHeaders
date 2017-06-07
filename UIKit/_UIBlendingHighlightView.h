//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIInterfaceActionVisualBackgroundDisplaying-Protocol.h>
#import <UIKit/UIInterfaceActionVisualGroupBackgroundDisplaying-Protocol.h>

@class NSMutableArray, NSString;

@interface _UIBlendingHighlightView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>
{
    NSMutableArray *_blendingViews;
    double _cornerRadius;
}

+ (id)_blendingPressedView;
+ (id)_blendingSeparatorView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (void)setPressed:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (id)initWithCompositingBurnColor:(id)arg1 plusDColor:(id)arg2;
- (id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


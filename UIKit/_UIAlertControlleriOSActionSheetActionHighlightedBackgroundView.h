//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIInterfaceActionVisualBackgroundDisplaying-Protocol.h>
#import <UIKit/UIInterfaceActionVisualGroupBackgroundDisplaying-Protocol.h>

@class NSString, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIAlertControlleriOSActionSheetActionHighlightedBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>
{
    UIVisualEffectView *_effectView;
}

@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
- (void).cxx_destruct;
- (void)setPressed:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


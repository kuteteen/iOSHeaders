//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HealthUI/HKGraphRenderer-Protocol.h>

@class NSString;
@protocol HKGraphRenderDelegate;

@interface HKGraphRenderView : UIView <HKGraphRenderer>
{
    id <HKGraphRenderDelegate> renderDelegate;
    struct CGRect _axisRect;
}

@property(nonatomic) struct CGRect axisRect; // @synthesize axisRect=_axisRect;
@property(nonatomic) __weak id <HKGraphRenderDelegate> renderDelegate; // @synthesize renderDelegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsRender;
- (void)drawText:(id)arg1 atPoint:(struct CGPoint)arg2 horizontalAlignment:(long long)arg3 verticalAlignment:(long long)arg4 textColor:(id)arg5 font:(id)arg6 clipToAxis:(_Bool)arg7;
- (void)fillRect:(struct CGRect)arg1 withTexture:(id)arg2;
- (void)drawPath:(id)arg1 strokeColor:(id)arg2 fillColor:(id)arg3 markerImage:(id)arg4 useGradientFill:(_Bool)arg5 clipToAxes:(_Bool)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

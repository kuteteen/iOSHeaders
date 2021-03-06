//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPPageRep.h>

#import "TSDMasterDrawableDelegate.h"

@class CALayer, NSString, TPiOSMarginAdjustRep;

__attribute__((visibility("hidden")))
@interface TPPageRep : TSWPPageRep <TSDMasterDrawableDelegate>
{
    CALayer *_horizontalSeparatorLayer;
    CALayer *_verticalSeparatorLayer;
    TPiOSMarginAdjustRep *_marginAdjustRep;
}

@property(readonly, nonatomic) TPiOSMarginAdjustRep *marginAdjustRep; // @synthesize marginAdjustRep=_marginAdjustRep;
- (void).cxx_destruct;
- (id)bodyReps;
- (_Bool)masksToBounds;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (_Bool)directlyManagesLayerContent;
- (id)layerClass;
- (_Bool)p_pageRequiresHorizontalSeparator;
- (_Bool)childRepIsMasterDrawable:(id)arg1;
- (_Bool)childRepIsOnDocSetupCanvas:(id)arg1;
- (void)willBeRemoved;
- (id)colorBehindBodyTextLayer:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


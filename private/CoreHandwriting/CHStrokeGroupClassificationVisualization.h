//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroupingVisualization.h>

@interface CHStrokeGroupClassificationVisualization : CHStrokeGroupingVisualization
{
}

- (struct CGColor *)_newColorForStroke:(id)arg1 inGroup:(id)arg2;
- (id)_attributedStringFromString:(id)arg1 withColor:(struct CGColor *)arg2 font:(struct __CTFont *)arg3 paragraphStyle:(struct __CTParagraphStyle *)arg4;
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (long long)layeringPriority;

@end


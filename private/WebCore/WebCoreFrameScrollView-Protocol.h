//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol WebCoreFrameScrollView
- (struct CGPoint)scrollOrigin;
- (void)setScrollOrigin:(struct CGPoint)arg1 updatePositionAtAll:(_Bool)arg2 immediately:(_Bool)arg3;
- (void)setScrollBarsSuppressed:(_Bool)arg1 repaintOnUnsuppress:(_Bool)arg2;
- (void)scrollingModes:(int *)arg1 vertical:(int *)arg2;
- (void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(_Bool)arg3;
@end

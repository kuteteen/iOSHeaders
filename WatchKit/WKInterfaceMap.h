//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/WKInterfaceObject.h>

@interface WKInterfaceMap : WKInterfaceObject
{
}

- (void)removeAllAnnotations;
- (void)addAnnotation:(struct CLLocationCoordinate2D)arg1 withPinColor:(long long)arg2;
- (void)addAnnotation:(struct CLLocationCoordinate2D)arg1 withImageNamed:(id)arg2 centerOffset:(struct CGPoint)arg3;
- (void)addAnnotation:(struct CLLocationCoordinate2D)arg1 withImage:(id)arg2 centerOffset:(struct CGPoint)arg3;
- (void)setRegion:(CDStruct_2b0c6e0b)arg1;
- (void)setVisibleMapRect:(CDStruct_90e2a262)arg1;

@end


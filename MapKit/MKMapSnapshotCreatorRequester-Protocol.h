//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKMapSnapshotCreator, NSString, UIImage, UIView;

@protocol MKMapSnapshotCreatorRequester <NSObject>
- (void)mapSnapshotCreator:(MKMapSnapshotCreator *)arg1 didCreateSnapshot:(UIImage *)arg2 attributionString:(NSString *)arg3 context:(id)arg4;

@optional
- (UIView *)mapSnapshotCreator:(MKMapSnapshotCreator *)arg1 viewForContext:(id)arg2;
@end


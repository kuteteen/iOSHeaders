//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, _UIDraggingSession;
@protocol UICoordinateSpace;

@protocol _UIDraggingInfo <NSObject>
@property(readonly, nonatomic) _UIDraggingSession *localDraggingSession;
@property(nonatomic) long long numberOfValidItemsForDrop;
@property(readonly, nonatomic) unsigned long long draggingSourceOperationMask;
- (struct CGPoint)draggingLocationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 acceptableTypeIdentifiers:(NSArray *)arg2 usingBlock:(void (^)(_UIDraggingItem *, long long, _Bool *))arg3;
@end


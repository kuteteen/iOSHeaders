//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SXComponent;

@protocol SXDynamicComponentPlacementProgressiveCondition <NSObject>
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)considerComponent:(SXComponent *)arg1;
- (void)prepareForBlueprintWithComponents:(NSArray *)arg1;
@end


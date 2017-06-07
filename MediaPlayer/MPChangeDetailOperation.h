//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath;

@interface MPChangeDetailOperation : NSObject
{
    long long _type;
    NSIndexPath *_previousIndexPath;
    NSIndexPath *_finalIndexPath;
}

+ (id)replaceOperationWithPreviousIndexPath:(id)arg1 finalIndexPath:(id)arg2;
+ (id)insertOperationWithIndexPath:(id)arg1;
+ (id)deleteOperationWithIndexPath:(id)arg1;
+ (id)operationWithType:(long long)arg1 previousIndexPath:(id)arg2 finalIndexPath:(id)arg3;
+ (id)operationsWithPreviousCount:(long long)arg1 finalCount:(long long)arg2 previousBaseIndexPath:(id)arg3 finalBaseIndexPath:(id)arg4 isEqualBlock:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) NSIndexPath *finalIndexPath; // @synthesize finalIndexPath=_finalIndexPath;
@property(readonly, nonatomic) NSIndexPath *previousIndexPath; // @synthesize previousIndexPath=_previousIndexPath;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)debugDescription;
@property(readonly, nonatomic) NSIndexPath *indexPath;

@end


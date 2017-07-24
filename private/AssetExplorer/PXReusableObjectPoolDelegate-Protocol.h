//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetExplorer/NSObject-Protocol.h>

@class PXReusableObjectPool;
@protocol PXReusableObject;

@protocol PXReusableObjectPoolDelegate <NSObject>

@optional
- (void)reusableObjectPool:(PXReusableObjectPool *)arg1 didEvictReusableObject:(id <PXReusableObject>)arg2;
- (void)reusableObjectPool:(PXReusableObjectPool *)arg1 objectPreparedForReuse:(id <PXReusableObject>)arg2;
- (void)reusableObjectPool:(PXReusableObjectPool *)arg1 objectBecameReusable:(id <PXReusableObject>)arg2;
- (void)reusableObjectPool:(PXReusableObjectPool *)arg1 didCreateReusableObject:(id <PXReusableObject>)arg2;
@end

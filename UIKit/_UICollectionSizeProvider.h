//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UICollectionSizeProviding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionSizeProvider : NSObject <_UICollectionSizeProviding>
{
    NSArray *_sizes;
    long long _fixedSizeCount;
    struct CGSize _fixedSize;
}

@property(nonatomic) long long fixedSizeCount; // @synthesize fixedSizeCount=_fixedSizeCount;
@property(nonatomic) struct CGSize fixedSize; // @synthesize fixedSize=_fixedSize;
@property(retain, nonatomic) NSArray *sizes; // @synthesize sizes=_sizes;
- (void).cxx_destruct;
- (_Bool)_hasFixedSizeCount;
- (struct CGSize)sizeForIndex:(long long)arg1;
- (_Bool)indexIsValid:(long long)arg1;
- (long long)count;
- (id)initWithSizeProvider:(id)arg1 offset:(long long)arg2;
- (id)initWithFixedSize:(struct CGSize)arg1 count:(long long)arg2;
- (id)initWithSizes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


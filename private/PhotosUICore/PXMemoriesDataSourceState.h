//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXMemoriesDataSourceState : NSObject <NSCopying>
{
    PHFetchResult *_memories;
    NSDictionary *_infosByMemory;
}

@property(readonly, nonatomic) NSDictionary *infosByMemory; // @synthesize infosByMemory=_infosByMemory;
@property(readonly, nonatomic) PHFetchResult *memories; // @synthesize memories=_memories;
- (void).cxx_destruct;
- (id)stateUpdatedWithChange:(id)arg1 outMemoriesChangeDetails:(out id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMemories:(id)arg1 infosByMemory:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSObject<OS_dispatch_queue>;

@interface NRDeviceCollectionUpdateBlock : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
    NSNumber *_desiredIndex;
}

@property(retain, nonatomic) NSNumber *desiredIndex; // @synthesize desiredIndex=_desiredIndex;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;

@end


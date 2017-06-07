//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLObjectContainerComponent-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface MDLObjectContainer : NSObject <MDLObjectContainerComponent>
{
    NSMutableArray *_objects;
}

- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly) unsigned long long count;
@property(readonly, retain, nonatomic) NSArray *objects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


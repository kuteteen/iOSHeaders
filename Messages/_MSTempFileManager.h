//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface _MSTempFileManager : NSObject
{
    NSHashTable *_registry;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSHashTable *registry; // @synthesize registry=_registry;
- (void).cxx_destruct;
- (id)writeTemporaryFileWithData:(id)arg1 type:(id)arg2;
- (id)init;

@end


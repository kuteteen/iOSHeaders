//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUHasher : NSObject
{
    unsigned long long _currentHash;
}

@property(nonatomic) unsigned long long currentHash; // @synthesize currentHash=_currentHash;
- (unsigned long long)hashValue;
- (void)addObject:(id)arg1;
- (void)addUnsignedInteger:(unsigned long long)arg1;
- (void)addInteger:(long long)arg1;
- (void)addBool:(_Bool)arg1;
- (void)addUnsignedInt:(unsigned int)arg1;
- (void)addInt:(int)arg1;
- (void)p_appendUnsignedInteger:(unsigned long long)arg1;
- (id)init;

@end

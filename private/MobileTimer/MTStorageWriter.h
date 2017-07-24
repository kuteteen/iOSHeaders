//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCoder.h>

#import <MobileTimer/MTCoder-Protocol.h>

@class NSMutableArray;

@interface MTStorageWriter : NSCoder <MTCoder>
{
    NSMutableArray *_stack;
}

@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
- (void).cxx_destruct;
- (id)encodedDictionary;
- (id)_dictionaryForProtocolObject:(id)arg1;
- (id)_serializingProtocol;
- (void)_encodeProtocolObject:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)_encodeObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (_Bool)mt_isWritingToStorage;
- (_Bool)mt_isReadingFromPersistence;
- (_Bool)mt_isWritingToPersistence;

@end

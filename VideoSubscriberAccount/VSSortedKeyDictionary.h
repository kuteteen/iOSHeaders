//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface VSSortedKeyDictionary : NSDictionary
{
    NSDictionary *_underlyingDictionary;
}

@property(copy, nonatomic) NSDictionary *underlyingDictionary; // @synthesize underlyingDictionary=_underlyingDictionary;
- (void).cxx_destruct;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;

@end


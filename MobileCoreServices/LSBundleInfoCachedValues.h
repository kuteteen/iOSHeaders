//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet;

@interface LSBundleInfoCachedValues : NSObject
{
    NSSet *_keys;
    NSDictionary *_values;
}

- (id)description;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (id)objectForKey:(id)arg1 ofType:(Class)arg2;
- (id)objectForKey:(id)arg1;
- (id)rawValues;
- (void)dealloc;
- (id)_initWithKeys:(id)arg1 forDictionary:(id)arg2;
- (id)init;

@end


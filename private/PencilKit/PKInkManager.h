//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PKInkManager : NSObject
{
    unsigned long long _version;
    NSMutableDictionary *_inks;
}

+ (id)dictionaryForInk:(id)arg1;
+ (void)reloadInks;
+ (id)inkDictionary;
+ (id)defaultInkManagerWithVersion:(unsigned long long)arg1;
+ (id)defaultInkManager;
@property(readonly, nonatomic) NSMutableDictionary *inks; // @synthesize inks=_inks;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)writeDictionary:(id)arg1 forInk:(id)arg2;
- (id)initWithVersion:(unsigned long long)arg1;

@end


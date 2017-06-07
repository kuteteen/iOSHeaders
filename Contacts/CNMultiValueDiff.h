//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNMultiValueDiff : NSObject
{
    NSArray *_updates;
}

+ (id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2;
+ (id)emptyDiff;
@property(readonly, copy, nonatomic) NSArray *updates; // @synthesize updates=_updates;
- (id)description;
- (_Bool)isEmpty;
- (id)multiValueByApplyToMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (void)dealloc;
- (id)initWithUpdates:(id)arg1;
- (_Bool)applyToABPerson:(void *)arg1 propertyDescription:(id)arg2 error:(id *)arg3;

@end


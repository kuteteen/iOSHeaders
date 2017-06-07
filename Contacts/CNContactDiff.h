//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNContactDiff : NSObject
{
    NSArray *_updates;
}

+ (id)diffContact:(id)arg1 to:(id)arg2 error:(id *)arg3;
@property(readonly, copy) NSArray *updates; // @synthesize updates=_updates;
- (void).cxx_destruct;
- (id)description;
- (void)applyToMutableContacts:(id)arg1 withIdentifierMap:(id)arg2;
- (void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2;
- (id)contactByApplyingUpdatesToContact:(id)arg1;
- (id)initWithUpdates:(id)arg1;
- (_Bool)applyToABPerson:(void *)arg1 error:(id *)arg2;

@end


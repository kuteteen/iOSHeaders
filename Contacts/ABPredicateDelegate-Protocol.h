//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class NSDictionary, NSPredicate;

@protocol ABPredicateDelegate <NSObject>
- (_Bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void *)arg2;
- (_Bool)predicateShouldContinue:(NSPredicate *)arg1;

@optional
- (_Bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void *)arg2 metadata:(NSDictionary *)arg3 moreComing:(_Bool)arg4;
- (_Bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void *)arg2 moreComing:(_Bool)arg3;
- (_Bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void *)arg2 metadata:(NSDictionary *)arg3;
@end


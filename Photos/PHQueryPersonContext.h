//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHFetchOptions;

@interface PHQueryPersonContext : NSObject
{
    PHFetchOptions *_fetchOptions;
}

+ (id)subpredicatesForFetchOptions:(id)arg1;
+ (unsigned long long)peopleHomeUnverifiedFaceCountThreshold;
- (void).cxx_destruct;
- (id)personContextOneUpPredicate;
- (id)personContextDetailPredicate;
- (id)personContextAdditionalPredicate;
- (id)personContextPeopleHomePredicate;
- (id)personContextNonePredicates;
- (id)_notHiddenTypePredicate;
- (id)_faceCountPredicateWithMinimum:(unsigned long long)arg1;
- (id)_notVerifiedPredicate;
- (id)_verifiedVisiblePredicate;
- (id)_verifiedPredicate;
- (id)subpredicates;
- (id)initWithFetchOptions:(id)arg1;

@end


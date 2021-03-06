//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_HKAchievementDefinitionLoaderFilter.h"

@class NSSet;

@interface _HDAchievementAssetFilter : NSObject <_HKAchievementDefinitionLoaderFilter>
{
    NSSet *_allEarnedDefinitionIdentifiers;
}

- (void).cxx_destruct;
- (_Bool)_wasAchievementDefinitionEverEarned:(id)arg1;
- (_Bool)_isAchievementDefinitionExpired:(id)arg1;
- (_Bool)areStickersEarnedForAchievementDefinition:(id)arg1;
- (_Bool)areStickersNeededAtAll;
- (_Bool)areStickersNeededForAchievementDefinition:(id)arg1;
- (_Bool)areAssetsNeededForAchievementDefinition:(id)arg1;
- (id)initWithAllEarnedDefinitionIdentifiers:(id)arg1;

@end


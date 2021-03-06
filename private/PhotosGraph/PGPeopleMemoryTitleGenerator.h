//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGPeopleMemoryTitleGenerator : PGTitleGenerator
{
    unsigned long long _type;
    NSSet *_peopleNodes;
}

@property(readonly, nonatomic) NSSet *peopleNodes; // @synthesize peopleNodes=_peopleNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)_useSplitTimeTitlesIfNeeded;
- (id)_timeTitleForPeople;
- (id)_birthdayTitleForPeople;
- (_Bool)_person:(id)arg1 isPresentInAnyMomentOfMoments:(id)arg2;
- (id)_timeTitleForEarlyMoments;
- (id)_titleForEarlyMoments;
- (id)_titleForSocialGroup;
- (id)_titleForPeople;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithMomentNodes:(id)arg1 peopleNodes:(id)arg2 type:(unsigned long long)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCColorGradient, NSArray, NSDictionary;

@interface FCTopStoriesOperationResult : NSObject
{
    NSArray *_mandatoryHeadlines;
    NSArray *_optionalHeadlines;
    NSDictionary *_topStoriesMetadataByArticleID;
    FCColorGradient *_backgroundColorGradient;
}

@property(copy, nonatomic) FCColorGradient *backgroundColorGradient; // @synthesize backgroundColorGradient=_backgroundColorGradient;
@property(copy) NSDictionary *topStoriesMetadataByArticleID; // @synthesize topStoriesMetadataByArticleID=_topStoriesMetadataByArticleID;
@property(copy) NSArray *optionalHeadlines; // @synthesize optionalHeadlines=_optionalHeadlines;
@property(copy) NSArray *mandatoryHeadlines; // @synthesize mandatoryHeadlines=_mandatoryHeadlines;
- (void).cxx_destruct;
- (id)initWithTopStoriesGroupConfig:(id)arg1 mandatoryHeadlines:(id)arg2 optionalHeadlines:(id)arg3 topStoriesMetadataByArticleID:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSArray, NSString;

@interface WBSParsecSportsScoreSummary : WBSParsecModel
{
    NSArray *_images;
    NSString *_subtitle;
    NSArray *_scores;
}

+ (id)schema;
@property(readonly, copy, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end


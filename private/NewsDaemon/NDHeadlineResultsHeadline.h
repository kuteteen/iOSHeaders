//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsDaemon/NSCopying-Protocol.h>
#import <NewsDaemon/NSSecureCoding-Protocol.h>

@class NDHeadlineResultsHeadlineAdElement, NDHeadlineResultsHeadlineAnalyticsElement, NDHeadlineResultsHeadlinePersonalizationMetadata, NSData, NSDate, NSString, NSURL, SFSearchResult;

@interface NDHeadlineResultsHeadline : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _needsSeenStateTracking;
    NSString *_identifier;
    NSString *_title;
    NSString *_shortExcerpt;
    NSDate *_ageDisplayDate;
    NSString *_sourceName;
    NSString *_sourceIdentifier;
    NSString *_sourceNameImageAssetID;
    NSData *_sourceNameImageData;
    NSString *_thumbnailAssetID;
    NSData *_thumbnailData;
    NSURL *_webURL;
    NSURL *_NewsURL;
    NSString *_storyType;
    SFSearchResult *_searchResult;
    NSURL *_videoURL;
    double _videoDuration;
    NDHeadlineResultsHeadlineAnalyticsElement *_analyticsElement;
    NDHeadlineResultsHeadlineAdElement *_adElement;
    NDHeadlineResultsHeadlinePersonalizationMetadata *_personalizationMetadata;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NDHeadlineResultsHeadlinePersonalizationMetadata *personalizationMetadata; // @synthesize personalizationMetadata=_personalizationMetadata;
@property(readonly, copy, nonatomic) NDHeadlineResultsHeadlineAdElement *adElement; // @synthesize adElement=_adElement;
@property(readonly, copy, nonatomic) NDHeadlineResultsHeadlineAnalyticsElement *analyticsElement; // @synthesize analyticsElement=_analyticsElement;
@property(readonly, nonatomic) _Bool needsSeenStateTracking; // @synthesize needsSeenStateTracking=_needsSeenStateTracking;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, copy, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, copy, nonatomic) NSString *storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSURL *NewsURL; // @synthesize NewsURL=_NewsURL;
@property(readonly, copy, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(readonly, copy, nonatomic) NSData *thumbnailData; // @synthesize thumbnailData=_thumbnailData;
@property(readonly, copy, nonatomic) NSString *thumbnailAssetID; // @synthesize thumbnailAssetID=_thumbnailAssetID;
@property(readonly, copy, nonatomic) NSData *sourceNameImageData; // @synthesize sourceNameImageData=_sourceNameImageData;
@property(readonly, copy, nonatomic) NSString *sourceNameImageAssetID; // @synthesize sourceNameImageAssetID=_sourceNameImageAssetID;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(readonly, copy, nonatomic) NSDate *ageDisplayDate; // @synthesize ageDisplayDate=_ageDisplayDate;
@property(readonly, copy, nonatomic) NSString *shortExcerpt; // @synthesize shortExcerpt=_shortExcerpt;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 shortExcerpt:(id)arg3 ageDisplayDate:(id)arg4 sourceName:(id)arg5 sourceIdentifier:(id)arg6 sourceNameImageAssetID:(id)arg7 sourceNameImageData:(id)arg8 thumbnailAssetID:(id)arg9 thumbnailData:(id)arg10 webURL:(id)arg11 newsURL:(id)arg12 storyType:(id)arg13 searchResult:(id)arg14 videoURL:(id)arg15 videoDuration:(double)arg16 needsSeenStateTracking:(_Bool)arg17 analyticsElement:(id)arg18 adElement:(id)arg19 personalizationMetadata:(id)arg20;
- (void)loadThumbnailDataWithFileURL:(id)arg1;
- (void)loadSourceNameImageDataWithFileURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

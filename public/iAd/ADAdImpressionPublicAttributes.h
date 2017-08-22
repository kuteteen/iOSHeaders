//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding>
{
    _Bool _unbranded;
    _Bool _hasAction;
    _Bool _requiresMRAID;
    NSString *_batchResponseIdentifier;
    NSString *_accessibilityLabel;
    double _skipThreshold;
    double _minimumIntervalBetweenPresentations;
    NSArray *_videoAssets;
    NSString *_uniqueIdentifier;
    NSURL *_audioURL;
    NSURL *_staticImageURL;
    NSURL *_logoImageURL;
    NSString *_headlineForLCD;
    NSString *_descriptionForLCD;
    NSArray *_nativeMetadata;
    NSDictionary *_transparencyDetails;
    NSDictionary *_nativeMediaCreativeMetadata;
    NSURL *_contentURL;
    NSString *_contentString;
    long long _maximumPretapRequestCount;
    NSArray *_matchClauses;
    NSArray *_excludeTags;
    long long _adPrivacyMarkPosition;
    struct CGSize _portraitSize;
    struct CGSize _landscapeSize;
    struct CGSize _containerSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long adPrivacyMarkPosition; // @synthesize adPrivacyMarkPosition=_adPrivacyMarkPosition;
@property(retain, nonatomic) NSArray *excludeTags; // @synthesize excludeTags=_excludeTags;
@property(retain, nonatomic) NSArray *matchClauses; // @synthesize matchClauses=_matchClauses;
@property(nonatomic) long long maximumPretapRequestCount; // @synthesize maximumPretapRequestCount=_maximumPretapRequestCount;
@property(nonatomic) _Bool requiresMRAID; // @synthesize requiresMRAID=_requiresMRAID;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(retain, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(retain, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(nonatomic) struct CGSize landscapeSize; // @synthesize landscapeSize=_landscapeSize;
@property(nonatomic) struct CGSize portraitSize; // @synthesize portraitSize=_portraitSize;
@property(retain, nonatomic) NSDictionary *nativeMediaCreativeMetadata; // @synthesize nativeMediaCreativeMetadata=_nativeMediaCreativeMetadata;
@property(retain, nonatomic) NSDictionary *transparencyDetails; // @synthesize transparencyDetails=_transparencyDetails;
@property(retain, nonatomic) NSArray *nativeMetadata; // @synthesize nativeMetadata=_nativeMetadata;
@property(copy, nonatomic) NSString *descriptionForLCD; // @synthesize descriptionForLCD=_descriptionForLCD;
@property(copy, nonatomic) NSString *headlineForLCD; // @synthesize headlineForLCD=_headlineForLCD;
@property(retain, nonatomic) NSURL *logoImageURL; // @synthesize logoImageURL=_logoImageURL;
@property(retain, nonatomic) NSURL *staticImageURL; // @synthesize staticImageURL=_staticImageURL;
@property(retain, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
@property(nonatomic) _Bool hasAction; // @synthesize hasAction=_hasAction;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSArray *videoAssets; // @synthesize videoAssets=_videoAssets;
@property(nonatomic) double minimumIntervalBetweenPresentations; // @synthesize minimumIntervalBetweenPresentations=_minimumIntervalBetweenPresentations;
@property(nonatomic) double skipThreshold; // @synthesize skipThreshold=_skipThreshold;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *batchResponseIdentifier; // @synthesize batchResponseIdentifier=_batchResponseIdentifier;
@property(nonatomic) _Bool unbranded; // @synthesize unbranded=_unbranded;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end


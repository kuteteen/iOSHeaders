//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionOption.h>

@class AVAssetWriterInput, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption
{
    AVAssetWriterInput *_input;
    NSString *_mediaType;
    NSDictionary *_outputSettings;
    struct opaqueCMFormatDescription *_sourceFormatHint;
    NSString *_languageCode;
    NSString *_extendedLanguageTag;
    NSArray *_metadata;
    NSDictionary *_trackReferences;
    _Bool _displaysNonForcedSubtitles;
    _Bool _enabled;
}

+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1;
@property(readonly, nonatomic) _Bool displaysNonForcedSubtitles; // @synthesize displaysNonForcedSubtitles=_displaysNonForcedSubtitles;
@property(readonly, nonatomic) NSDictionary *trackReferences; // @synthesize trackReferences=_trackReferences;
@property(readonly, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSString *extendedLanguageTag; // @synthesize extendedLanguageTag=_extendedLanguageTag;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *sourceFormatHint; // @synthesize sourceFormatHint=_sourceFormatHint;
@property(readonly, nonatomic) NSDictionary *outputSettings; // @synthesize outputSettings=_outputSettings;
@property(readonly, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) AVAssetWriterInput *input; // @synthesize input=_input;
- (id)propertyList;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)locale;
- (_Bool)_isDesignatedDefault;
- (_Bool)isPlayable;
- (_Bool)_isAuxiliaryContent;
- (id)_taggedCharacteristics;
- (id)mediaSubTypes;
- (id)_ancillaryDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_hasEqualValueForKey:(id)arg1 asObject:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;
- (id)initWithAssetWriterInput:(id)arg1;

@end

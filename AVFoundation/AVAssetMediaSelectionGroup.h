//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAsset, AVMediaSelectionOption, NSArray, NSDictionary;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup
{
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_groupMediaCharacteristics;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
    _Bool _isStreamingGroup;
}

- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;
- (id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(_Bool)arg4;
- (id)defaultOption;
- (_Bool)_isStreamingGroup;
- (id)_groupMediaCharacteristics;
- (id)dictionary;
- (id)asset;
- (id)options;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 dictionary:(id)arg2;
- (id)init;

@end


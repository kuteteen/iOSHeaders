//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVMetadataItem.h>

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem
{
    AVChapterMetadataItemInternal *_privChapter;
}

- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (void)_ensureValueLoadedSync;
- (void)_setValueStatus:(long long)arg1 figErrorCode:(int)arg2;
- (long long)_valueStatus;
- (_Bool)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (long long)_chapterIndex;
- (long long)_chapterGroupIndex;
- (id)extraAttributes;
- (void)_takeValueFrom:(id)arg1;
- (id)dataType;
- (id)value;
- (id)startDate;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)time;
- (id)languageCode;
- (id)extendedLanguageTag;
- (id)locale;
- (id)keySpace;
- (id)commonKey;
- (id)key;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_removeFigAssetNotifications;
- (void)_addFigAssetNotifications;
- (id)_initWithAsset:(id)arg1 chapterGroupIndex:(long long)arg2 chapterIndex:(long long)arg3 chapterType:(id)arg4 extendedLanguageTag:(id)arg5 languageCode:(id)arg6 chapterDataType:(id)arg7 time:(CDStruct_1b6d18a9)arg8 duration:(CDStruct_1b6d18a9)arg9;
- (id)init;

@end


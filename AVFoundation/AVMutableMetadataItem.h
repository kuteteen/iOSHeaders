//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVMetadataItem.h>

@class AVMutableMetadataItemInternal, NSDictionary, NSLocale, NSString;
@protocol NSObject><NSCopying;

@interface AVMutableMetadataItem : AVMetadataItem
{
    AVMutableMetadataItemInternal *_mutablePriv;
}

+ (id)keyPathsForValuesAffectingIdentifier;
+ (id)metadataItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *extraAttributes;
@property(copy, nonatomic) NSString *dataType;
@property(copy, nonatomic) id <NSObject><NSCopying> value;
- (void)setStartDate:(id)arg1;
@property(nonatomic) CDStruct_1b6d18a9 duration;
@property(nonatomic) CDStruct_1b6d18a9 time;
@property(copy, nonatomic) NSString *extendedLanguageTag;
@property(copy, nonatomic) NSLocale *locale;
@property(copy, nonatomic) NSString *identifier;
- (void)setKeySpace:(id)arg1;
- (void)setKey:(id)arg1;
- (id)startDate;
- (id)languageCode;
- (id)keySpace;
- (id)key;

@end


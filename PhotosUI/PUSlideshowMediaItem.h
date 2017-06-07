//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaItem, NSString, NSURL, OKProducerPreset;

__attribute__((visibility("hidden")))
@interface PUSlideshowMediaItem : NSObject
{
    MPMediaItem *_mediaItem;
    OKProducerPreset *_preset;
    long long _type;
}

+ (id)mediaItemForType:(long long)arg1 uniqueIdentifier:(id)arg2;
+ (id)mediaItemsForOKThemes;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) NSURL *audioURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWitMediaItem:(id)arg1;
- (id)initWitPreset:(id)arg1;
- (id)init;
- (id)_initWithType:(long long)arg1;

@end


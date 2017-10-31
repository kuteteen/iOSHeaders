//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSString, NSURL;

@interface TLAlertConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isFrozen;
    _Bool _hasCustomRepeatingFlag;
    _Bool _hasCustomAudioVolume;
    _Bool _forPreview;
    _Bool _shouldRepeat;
    _Bool _shouldIgnoreRingerSwitch;
    _Bool _shouldForcePlayingAtUserSelectedAudioVolume;
    float _audioVolume;
    long long _type;
    NSString *_topic;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSURL *_externalToneFileURL;
    unsigned long long _externalToneMediaLibraryItemIdentifier;
    NSDictionary *_externalVibrationPattern;
    NSURL *_externalVibrationPatternFileURL;
    NSString *_audioCategory;
    double _maximumDuration;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldForcePlayingAtUserSelectedAudioVolume; // @synthesize shouldForcePlayingAtUserSelectedAudioVolume=_shouldForcePlayingAtUserSelectedAudioVolume;
@property(nonatomic) _Bool shouldIgnoreRingerSwitch; // @synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch;
@property(nonatomic) _Bool shouldRepeat; // @synthesize shouldRepeat=_shouldRepeat;
@property(nonatomic) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property(nonatomic, getter=isForPreview) _Bool forPreview; // @synthesize forPreview=_forPreview;
@property(nonatomic) float audioVolume; // @synthesize audioVolume=_audioVolume;
@property(copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(copy, nonatomic) NSURL *externalVibrationPatternFileURL; // @synthesize externalVibrationPatternFileURL=_externalVibrationPatternFileURL;
@property(copy, nonatomic) NSDictionary *externalVibrationPattern; // @synthesize externalVibrationPattern=_externalVibrationPattern;
@property(nonatomic) unsigned long long externalToneMediaLibraryItemIdentifier; // @synthesize externalToneMediaLibraryItemIdentifier=_externalToneMediaLibraryItemIdentifier;
@property(copy, nonatomic) NSURL *externalToneFileURL; // @synthesize externalToneFileURL=_externalToneFileURL;
@property(copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool _hasCustomAudioVolume; // @synthesize _hasCustomAudioVolume;
- (void).cxx_destruct;
- (void)_throwForFrozenInstance;
- (void)_freeze;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1;

@end


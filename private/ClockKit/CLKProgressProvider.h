//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMutableDictionary, UIColor;

@interface CLKProgressProvider : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    struct NSNumber *_timerToken;
    _Bool _finalized;
    _Bool _paused;
    UIColor *_tintColor;
    double _backgroundRingAlpha;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property double backgroundRingAlpha; // @synthesize backgroundRingAlpha=_backgroundRingAlpha;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (double)_progressFractionForNow:(id)arg1;
- (void)_validate;
- (_Bool)_needsUpdates;
- (id)JSONObjectRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_update;
- (void)_maybeStartOrStopUpdates;
- (long long)timeTravelUpdateFrequency;
- (void)finalize;
- (void)validate;
- (void)stopUpdatesForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)startUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (double)progressFractionForNow:(id)arg1;
- (void)dealloc;
- (void)_commonInit;
- (id)init;

@end


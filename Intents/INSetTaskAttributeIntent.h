//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSetTaskAttributeIntentExport-Protocol.h>

@class INSpatialEventTrigger, INTask, INTemporalEventTrigger, NSString;

@interface INSetTaskAttributeIntent : INIntent <INSetTaskAttributeIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)setTemporalEventTrigger:(id)arg1;
@property(readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
- (void)setSpatialEventTrigger:(id)arg1;
@property(readonly, copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
- (void)setStatus:(long long)arg1;
@property(readonly, nonatomic) long long status;
- (void)setTargetTask:(id)arg1;
@property(readonly, copy, nonatomic) INTask *targetTask;
- (id)initWithTargetTask:(id)arg1 status:(long long)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


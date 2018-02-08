//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

#import "MPModelRequestDetailedKeepLocalStatusRequesting.h"

@class MPMediaLibrary, MPMediaQuery, NSArray, NSString;

@interface MPModelLibraryRequest : MPModelRequest <MPModelRequestDetailedKeepLocalStatusRequesting>
{
    _Bool _wantsDetailedKeepLocalRequestableResponse;
    MPMediaLibrary *_mediaLibrary;
    NSArray *_allowedItemIdentifiers;
    NSArray *_scopedContainers;
    unsigned long long _filteringOptions;
    MPMediaQuery *_legacyMediaQuery;
    struct _NSRange _contentRange;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) MPMediaQuery *legacyMediaQuery; // @synthesize legacyMediaQuery=_legacyMediaQuery;
@property(nonatomic) _Bool wantsDetailedKeepLocalRequestableResponse; // @synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse;
@property(nonatomic) struct _NSRange contentRange; // @synthesize contentRange=_contentRange;
@property(nonatomic) unsigned long long filteringOptions; // @synthesize filteringOptions=_filteringOptions;
@property(copy, nonatomic) NSArray *scopedContainers; // @synthesize scopedContainers=_scopedContainers;
@property(copy, nonatomic) NSArray *allowedItemIdentifiers; // @synthesize allowedItemIdentifiers=_allowedItemIdentifiers;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void).cxx_destruct;
- (id)sectionTranslationContext;
- (id)itemTranslationContext;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


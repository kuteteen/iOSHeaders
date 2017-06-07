//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPMediaPlaybackItemMetadata, NSString;

@interface MPStreamingDownloadSessionRequest : NSObject
{
    _Bool _prefersHLS;
    _Bool _shouldStartLeaseSession;
    _Bool _shouldUseAccountLessStreaming;
    _Bool _shouldUseStreamingRedownload;
    _Bool _streamingRental;
    MPMediaPlaybackItemMetadata *_playbackItemMetadata;
    unsigned long long _preferredAssetQuality;
    NSString *_assetSourceStoreFrontID;
    long long _equivalencySourceAdamID;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
    NSString *_buyParameters;
    long long _endpointType;
    long long _storeAdamID;
    CDUnknownBlockType _downloadSessionAlternativeConfigurationOptionsBlock;
}

@property(copy, nonatomic) CDUnknownBlockType downloadSessionAlternativeConfigurationOptionsBlock; // @synthesize downloadSessionAlternativeConfigurationOptionsBlock=_downloadSessionAlternativeConfigurationOptionsBlock;
@property(readonly, nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(readonly, nonatomic) long long endpointType; // @synthesize endpointType=_endpointType;
@property(readonly, copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property(copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property(copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property(nonatomic) long long equivalencySourceAdamID; // @synthesize equivalencySourceAdamID=_equivalencySourceAdamID;
@property(copy, nonatomic) NSString *assetSourceStoreFrontID; // @synthesize assetSourceStoreFrontID=_assetSourceStoreFrontID;
@property(nonatomic, getter=isStreamingRental) _Bool streamingRental; // @synthesize streamingRental=_streamingRental;
@property(nonatomic) _Bool shouldUseStreamingRedownload; // @synthesize shouldUseStreamingRedownload=_shouldUseStreamingRedownload;
@property(nonatomic) _Bool shouldUseAccountLessStreaming; // @synthesize shouldUseAccountLessStreaming=_shouldUseAccountLessStreaming;
@property(nonatomic) _Bool shouldStartLeaseSession; // @synthesize shouldStartLeaseSession=_shouldStartLeaseSession;
@property(nonatomic) _Bool prefersHLS; // @synthesize prefersHLS=_prefersHLS;
@property(nonatomic) unsigned long long preferredAssetQuality; // @synthesize preferredAssetQuality=_preferredAssetQuality;
@property(retain, nonatomic) MPMediaPlaybackItemMetadata *playbackItemMetadata; // @synthesize playbackItemMetadata=_playbackItemMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool usesSubscriptionLease;

@end


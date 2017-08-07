//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLPTPConversionSupport-Protocol.h>

@class NSString, PFMediaCapabilities, PHMediaFormatConversionManager;

@interface PLPTPLegacyConversionSupport : NSObject <PLPTPConversionSupport>
{
    PHMediaFormatConversionManager *_mediaFormatConversionManager;
    PFMediaCapabilities *_peerMediaCapabilities;
}

- (void).cxx_destruct;
- (id)conversionResultForAsset:(id)arg1 isVideo:(_Bool)arg2 isRender:(_Bool)arg3;
@property(readonly, nonatomic) _Bool supportsTranscodeChoice;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


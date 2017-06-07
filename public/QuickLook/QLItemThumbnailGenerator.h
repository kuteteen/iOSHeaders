//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/QLItemThumbnailGeneratorProtocol-Protocol.h>

@class NSString, QLExtensionThumbnailGenerator, QLItemDataThumbnailGenerator, QLItemURLThumbnailGenerator;

@interface QLItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocol>
{
    QLExtensionThumbnailGenerator *_extensionGenerator;
    QLItemURLThumbnailGenerator *_urlGenerator;
    QLItemDataThumbnailGenerator *_dataGenerator;
}

+ (_Bool)hasThirdPartyThumbnailGeneratorForItem:(id)arg1;
@property(retain, nonatomic) QLItemDataThumbnailGenerator *dataGenerator; // @synthesize dataGenerator=_dataGenerator;
@property(retain, nonatomic) QLItemURLThumbnailGenerator *urlGenerator; // @synthesize urlGenerator=_urlGenerator;
@property(retain, nonatomic) QLExtensionThumbnailGenerator *extensionGenerator; // @synthesize extensionGenerator=_extensionGenerator;
- (void).cxx_destruct;
- (id)_fetcherClassesForPreviewItem:(id)arg1;
- (id)thumbnailGenerationOperationWithItem:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (void)generateThumbnailForItem:(id)arg1 ofSize:(struct CGSize)arg2 scale:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

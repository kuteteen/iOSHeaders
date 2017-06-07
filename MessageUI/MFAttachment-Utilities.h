//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFAttachment.h>

@class NSString;

@interface MFAttachment (Utilities)
+ (id)attachmentElementHTMLStringWithAttributes:(id)arg1;
- (_Bool)hasCalendarMetadata;
@property(retain, nonatomic) NSString *icsRepresentation;
@property(retain, nonatomic) NSString *meetingStorePersistentID;
@property(retain, nonatomic) NSString *eventID;
- (id)markupStringForDisplayWithData:(id)arg1 displayStyle:(int)arg2 printableWidth:(double)arg3 allowAttachmentElement:(_Bool)arg4;
- (id)markupStringForCompositionWithPrependedBlankLine:(_Bool)arg1 imageScale:(unsigned long long)arg2;
- (id)filenameStrippingZipIfNeededUseApplications:(_Bool)arg1;
- (_Bool)isDisplayableInline;
- (_Bool)isDisplayableInsidePlugin;
- (_Bool)isDisplayableByWebKit;
- (_Bool)isDisplayableImage;
- (unsigned long long)scaledFileSize;
- (unsigned long long)_imageScale;
- (void)enqueueScaleAttachmentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)scaledImageToFit:(unsigned long long)arg1 saveScaledImage:(_Bool)arg2 attachmentContextID:(id)arg3;
- (unsigned long long)scaledFileSizeForScale:(unsigned long long)arg1;
- (id)_imageScalingKeyForImageScale:(unsigned long long)arg1;
- (void)_setImageScale:(unsigned long long)arg1;
- (_Bool)needsColorspaceConversion;
- (unsigned long long)imageScalingFlags;
- (double)constrainedWidth;
- (struct CGSize)markupSizeForImageScale:(unsigned long long)arg1;
@property(nonatomic) struct CGSize imageDimensions;
- (struct CGSize)imageDimensionsWithData:(id)arg1;
- (_Bool)isCameraRollCompatibleVideo;
- (_Bool)isContentOpenable;
- (_Bool)_isContentTypeDisplayableByMobileMail;
- (_Bool)isCalendarFile;
- (_Bool)isRFC822;
- (_Bool)isDisplayableSinglePagePDFFile;
- (_Bool)isPDFFile;
- (_Bool)isMedia;
- (void)decompressContentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)compressContentsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isContentCompressed;
- (_Bool)isRestrictedMIMEType;
- (id)contentType;
- (id)className;
- (id)_contentTypeByStrippingZipIfNeeded:(_Bool)arg1;
@end


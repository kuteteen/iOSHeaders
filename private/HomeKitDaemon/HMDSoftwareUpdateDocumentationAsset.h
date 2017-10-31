//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"
#import "NSSecureCoding.h"
#import "NSURLSessionDownloadDelegate.h"
#import "SZExtractorDelegate.h"

@class HMSoftwareUpdateDocumentation, HMSoftwareUpdateDocumentationMetadata, NSInputStream, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLSession, NSUUID, SZExtractor;

@interface HMDSoftwareUpdateDocumentationAsset : HMFObject <HMFLogging, NSURLSessionDownloadDelegate, SZExtractorDelegate, NSSecureCoding>
{
    _Bool _shouldAutomaticallyCache;
    long long _state;
    NSUUID *_identifier;
    HMSoftwareUpdateDocumentationMetadata *_metadata;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSURLSession *_URLSession;
    SZExtractor *_extrator;
    NSInputStream *_archivedFileStream;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)assetWithURL:(id)arg1;
+ (id)assetDirectoryURL;
@property(retain, nonatomic) NSInputStream *archivedFileStream; // @synthesize archivedFileStream=_archivedFileStream;
@property(retain, nonatomic) SZExtractor *extrator; // @synthesize extrator=_extrator;
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) HMSoftwareUpdateDocumentationMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)setExtractionProgress:(double)arg1;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (void)finishUnarchive;
- (void)cancelUnarchive;
- (void)startUnarchive;
- (void)finishDownload;
- (void)cancelDownload;
- (void)startDownload;
- (_Bool)purgeWithError:(id *)arg1;
- (void)startCaching;
- (_Bool)saveWithError:(id *)arg1;
@property(readonly, copy) HMSoftwareUpdateDocumentation *documentation;
- (id)bundleURL;
- (id)archiveURL;
- (id)metadataURL;
@property(readonly, copy) NSURL *URL;
- (void)setState:(long long)arg1;
@property(readonly) long long state; // @synthesize state=_state;
@property _Bool shouldAutomaticallyCache; // @synthesize shouldAutomaticallyCache=_shouldAutomaticallyCache;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithDocumentationMetadata:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


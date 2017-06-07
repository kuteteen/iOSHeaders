//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSURLDownloadDecoder-Protocol.h>

@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder>
{
    struct z_stream_s _stream;
    unsigned long long _modificationTime;
    NSString *_filename;
    _Bool _streamInitialized;
    _Bool _decodedHeader;
    _Bool _finishedInflating;
    _Bool _pad;
}

+ (id)MIMEType;
+ (_Bool)canDecodeDownloadHeaderData:(id)arg1;
+ (_Bool)decodeDownloadHeader:(id)arg1 headerLength:(int *)arg2 modificationTime:(unsigned long long *)arg3 filename:(id *)arg4;
- (id)filenameWithOriginalFilename:(id)arg1;
- (id)fileAttributes;
- (_Bool)finishDownloadDecoding;
- (_Bool)isFinishedDecoding;
- (_Bool)decodeDownloadData:(id)arg1 dataForkData:(id *)arg2 resourceForkData:(id *)arg3;
- (id)decodeData:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


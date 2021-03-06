//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface QLThumbnail : NSObject
{
    NSURL *_url;
}

+ (id)defaultDescriptors;
+ (id)sharedQueue;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)provideImages:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)imageForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 generateIfNeeded:(_Bool)arg3 contentRect:(struct CGRect *)arg4 error:(id *)arg5;
- (id)thumbnailCreationOperationForUseMode:(unsigned long long)arg1 descriptor:(id)arg2;
- (id)thumbnailCreationOperationForUseMode:(unsigned long long)arg1 descriptor:(id)arg2 generateIfNeeded:(_Bool)arg3;
- (id)initWithURL:(id)arg1;

@end


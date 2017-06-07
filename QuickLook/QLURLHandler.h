//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface QLURLHandler : NSObject <NSSecureCoding>
{
    const char *_sandboxType;
    _Bool _isAccessingSecurityScope;
    NSURL *_fileURL;
    NSString *_fileExtensionToken;
    long long _fileExtensionHandle;
    NSString *_physicalFileExtensionToken;
    long long _physicalFileExtensionHandle;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long physicalFileExtensionHandle; // @synthesize physicalFileExtensionHandle=_physicalFileExtensionHandle;
@property(retain, nonatomic) NSString *physicalFileExtensionToken; // @synthesize physicalFileExtensionToken=_physicalFileExtensionToken;
@property(nonatomic) long long fileExtensionHandle; // @synthesize fileExtensionHandle=_fileExtensionHandle;
@property(retain, nonatomic) NSString *fileExtensionToken; // @synthesize fileExtensionToken=_fileExtensionToken;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (char *)sandboxExtensionIssueFileWithClass:(const char *)arg1 path:(const char *)arg2 flags:(unsigned int)arg3;
- (long long)sandboxExtensionConsume:(const char *)arg1;
- (void)sandboxExtensionRelease:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_issueFileExtensionForURL:(id)arg1;
- (void)_consumeFileExtension;
- (void)_issueFileExtension;
- (void)dealloc;
- (id)initWithURL:(id)arg1 sandboxType:(const char *)arg2;

@end


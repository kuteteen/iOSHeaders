//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

@class NSString;

@interface FPUIActionExtensionContext : NSExtensionContext
{
    NSString *_domainIdentifier;
}

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
@property(copy) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
- (void).cxx_destruct;
- (id)_remoteContext;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequest;

@end


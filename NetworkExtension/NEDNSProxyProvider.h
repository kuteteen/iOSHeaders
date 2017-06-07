//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEProvider.h>

@class NSArray;

@interface NEDNSProxyProvider : NEProvider
{
    NSArray *_systemDNSSettings;
}

@property(retain) NSArray *systemDNSSettings; // @synthesize systemDNSSettings=_systemDNSSettings;
- (void).cxx_destruct;
- (_Bool)handleNewFlow:(id)arg1;
- (void)cancelProxyWithError:(id)arg1;
- (void)stopProxyWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startProxyWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end


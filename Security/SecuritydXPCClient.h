//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface SecuritydXPCClient : NSObject
{
    NSXPCConnection *_connection;
}

+ (void)configureSecuritydXPCProtocol:(id)arg1;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSError, NSString;

@interface SLYahooOAuth2MigrationResponse : NSObject
{
    long long _statusCode;
    NSError *_error;
    NSDictionary *_responseBody;
    NSString *_accessToken;
    NSString *_refreshToken;
    NSDate *_expiryDate;
}

@property(readonly) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly) NSDictionary *responseBody; // @synthesize responseBody=_responseBody;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end


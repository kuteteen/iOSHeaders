//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFMessageHeaders, MailAccount, NSString;

@interface MFListUnsubscribeSuggestion : NSObject
{
    NSString *_address;
    NSString *_subject;
    NSString *_body;
    MailAccount *_account;
    MFMessageHeaders *_headers;
}

@property(readonly, nonatomic) MFMessageHeaders *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) MailAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 account:(id)arg4 headers:(id)arg5;
- (id)init;

@end


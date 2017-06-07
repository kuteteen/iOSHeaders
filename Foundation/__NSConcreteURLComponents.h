//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLComponents.h>

#import <Foundation/NSCopying-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface __NSConcreteURLComponents : NSURLComponents <NSCopying>
{
    int _lock;
    NSString *_urlString;
    struct _URIParseInfo _parseInfo;
    unsigned int _schemeComponentValid:1;
    unsigned int _userComponentValid:1;
    unsigned int _passwordComponentValid:1;
    unsigned int _hostComponentValid:1;
    unsigned int _portComponentValid:1;
    unsigned int _pathComponentValid:1;
    unsigned int _queryComponentValid:1;
    unsigned int _fragmentComponentValid:1;
    NSString *_schemeComponent;
    NSString *_userComponent;
    NSString *_passwordComponent;
    NSString *_hostComponent;
    NSNumber *_portComponent;
    NSString *_pathComponent;
    NSString *_queryComponent;
    NSString *_fragmentComponent;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)setQueryItems:(id)arg1;
- (id)queryItems;
- (struct _NSRange)rangeOfFragment;
- (struct _NSRange)rangeOfQuery;
- (struct _NSRange)rangeOfPath;
- (struct _NSRange)rangeOfPort;
- (struct _NSRange)rangeOfHost;
- (struct _NSRange)rangeOfPassword;
- (struct _NSRange)rangeOfUser;
- (struct _NSRange)rangeOfScheme;
- (_Bool)parseInfoIsValid;
- (void)setPercentEncodedFragment:(id)arg1;
- (id)percentEncodedFragment;
- (void)setPercentEncodedQuery:(id)arg1;
- (id)percentEncodedQuery;
- (void)setPercentEncodedPath:(id)arg1;
- (id)percentEncodedPath;
- (void)setPercentEncodedHost:(id)arg1;
- (id)percentEncodedHost;
- (void)setPercentEncodedPassword:(id)arg1;
- (id)percentEncodedPassword;
- (void)setPercentEncodedUser:(id)arg1;
- (id)percentEncodedUser;
- (void)setFragment:(id)arg1;
- (id)fragment;
- (void)setQuery:(id)arg1;
- (id)query;
- (void)setPath:(id)arg1;
- (id)path;
- (void)setPort:(id)arg1;
- (id)port;
- (void)setHost:(id)arg1;
- (id)host;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setUser:(id)arg1;
- (id)user;
- (void)setScheme:(id)arg1;
- (id)scheme;
- (id)string;
- (id)URLRelativeToURL:(id)arg1;
- (id)URL;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;
- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end


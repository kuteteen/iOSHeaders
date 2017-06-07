//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (UIKitAdditions)
+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3;
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;
+ (id)mapsURLWithQuery:(id)arg1;
- (_Bool)isHTTPOrHTTPSURL;
- (_Bool)isJavaScriptURL;
- (_Bool)isAccountURL;
- (_Bool)isWebcalURL;
- (_Bool)isSpringboardHandledURL;
- (id)searchResultIdentifier;
- (id)searchResultDomain;
- (id)radarWebURL;
- (id)phobosURL;
- (void)_domain:(id *)arg1 subdomain:(id *)arg2;
@end


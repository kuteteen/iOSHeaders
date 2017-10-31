//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest;

@interface ICSetParentalControlRequestOperation : ICRequestOperation
{
    _Bool _allowsExplicitContent;
    _Bool _automatic;
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
}

@property(retain, nonatomic) ICStoreURLRequest *storeURLRequest; // @synthesize storeURLRequest=_storeURLRequest;
@property(retain, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(nonatomic, getter=isAutomatic) _Bool automatic; // @synthesize automatic=_automatic;
@property(nonatomic) _Bool allowsExplicitContent; // @synthesize allowsExplicitContent=_allowsExplicitContent;
- (void).cxx_destruct;
- (void)_getURLFromBagAndSendRequest;
- (void)_buildAndSendRequestForURL:(id)arg1;
- (void)cancel;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 allowsExplicitContent:(_Bool)arg2 isAutomatic:(_Bool)arg3;

@end


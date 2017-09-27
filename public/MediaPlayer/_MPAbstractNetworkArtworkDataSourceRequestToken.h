//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSURLRequest;

@interface _MPAbstractNetworkArtworkDataSourceRequestToken : NSObject <NSCopying>
{
    NSURLRequest *_request;
    struct CGSize _bestSize;
}

@property(readonly, nonatomic) struct CGSize bestSize; // @synthesize bestSize=_bestSize;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 bestSize:(struct CGSize)arg2;

@end


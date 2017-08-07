//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MAAsset : NSObject
{
    NSDictionary *_attributes;
    NSString *_assetType;
    NSString *_assetId;
    long long _state;
}

+ (void)startCatalogDownload:(id)arg1 then:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
@property(readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (_Bool)refreshState;
- (void)cancelDownload:(CDUnknownBlockType)arg1;
- (void)purge:(CDUnknownBlockType)arg1;
- (void)commonAssetDownload:(id)arg1 then:(CDUnknownBlockType)arg2;
- (void)startDownload:(CDUnknownBlockType)arg1;
- (id)createExtractor;
- (id)hashToString:(id)arg1;
- (void)startDownloadWithExtractor:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)logAsset;
- (id)assetProperty:(id)arg1;
- (id)getLocalUrl;
- (id)getLocalFileUrl;
- (void)attachProgressCallBack:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUActivityAssetWrapper : NSObject <NSSecureCoding>
{
    NSString *_assetLocalIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAsset:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@protocol PUPhotoEditResourceLoaderDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditResourceLoadRequest : NSObject <NSCopying>
{
    _Bool _requireLocalResources;
    _Bool _requireAdjustments;
    id <PUPhotoEditResourceLoaderDelegate> _delegate;
    long long _version;
    long long __resolvedVersion;
    struct CGSize _targetSize;
}

@property(nonatomic, setter=_setResolvedVersion:) long long _resolvedVersion; // @synthesize _resolvedVersion=__resolvedVersion;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) __weak id <PUPhotoEditResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool requireAdjustments; // @synthesize requireAdjustments=_requireAdjustments;
@property(nonatomic) _Bool requireLocalResources; // @synthesize requireLocalResources=_requireLocalResources;
- (void).cxx_destruct;
- (id)_videoRequestOptions;
- (id)_imageRequestOptions;
- (id)_adjustmentsRequestOptions;
- (long long)_videoRequestVersion;
- (long long)_imageRequestVersion;
- (void)_assertWorkVersionResolved;
- (_Bool)_isWorkVersionResolved;
- (void)_resolveVersionIfNeededWithAdjustmentsResult:(id)arg1;
- (_Bool)_needsLoadAdjustments;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


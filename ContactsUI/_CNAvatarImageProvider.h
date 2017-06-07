//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsUI/CNAvatarImageProvider-Protocol.h>

@class NSString;
@protocol CNUIPRLikenessProvider;

__attribute__((visibility("hidden")))
@interface _CNAvatarImageProvider : NSObject <CNAvatarImageProvider>
{
    id <CNUIPRLikenessProvider> _likenessProvider;
}

+ (id)roundImage:(id)arg1;
@property(readonly, nonatomic) id <CNUIPRLikenessProvider> likenessProvider; // @synthesize likenessProvider=_likenessProvider;
- (void).cxx_destruct;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)initWithLikenessProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCModifyTagSettingsCommand, NSString;

@protocol FCTagSettingsDelegate <NSObject>
- (void)accessTokenRemovedForTagID:(NSString *)arg1 userInitiated:(_Bool)arg2;
- (void)accessTokenDidChangeForTagID:(NSString *)arg1;
- (void)addModifyTagSettingsCommandToCommandQueue:(FCModifyTagSettingsCommand *)arg1;
@end


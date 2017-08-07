//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol VSIdentityProviderPickerViewControllerDelegate;

@protocol VSIdentityProviderPickerViewController <NSObject>
@property(copy, nonatomic) NSString *resourceTitle;
@property(copy, nonatomic) NSString *requestingAppDisplayName;
@property(nonatomic) unsigned long long additionalProvidersMode;
@property(copy, nonatomic) NSArray *identityProviders;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;
@property(nonatomic) __weak id <VSIdentityProviderPickerViewControllerDelegate> delegate;
- (void)deselectSelectedProviderAnimated:(_Bool)arg1;
@end


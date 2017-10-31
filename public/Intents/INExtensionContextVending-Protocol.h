//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INIntent, NSArray, NSString;

@protocol INExtensionContextVending <NSObject>
- (oneway void)cancelTransactionDueToTimeoutWithIntentIdentifier:(NSString *)arg1 completion:(void (^)(void))arg2;
- (oneway void)completeTransactionWithIntentIdentifier:(NSString *)arg1 completion:(void (^)(void))arg2;
- (oneway void)beginTransactionWithIntentIdentifier:(NSString *)arg1 completion:(void (^)(void))arg2;
- (oneway void)handleIntent:(INIntent *)arg1 withCompletion:(void (^)(INIntentResponse *, NSData *, NSSet *, NSError *))arg2;
- (oneway void)confirmIntent:(INIntent *)arg1 withCompletion:(void (^)(INIntentResponse *, NSData *, NSSet *, NSError *))arg2;
- (oneway void)resolveIntentSlots:(NSArray *)arg1 forIntent:(INIntent *)arg2 completionBlock:(void (^)(_Bool, INIntent *, NSDictionary *))arg3;
- (oneway void)resolveIntentSlot:(NSString *)arg1 forIntent:(INIntent *)arg2 completionBlock:(void (^)(NSData *))arg3;

@optional
- (oneway void)cancelTransactionDueToTimeout;
- (oneway void)completeTransaction;
- (oneway void)handleIntent:(INIntent *)arg1 completionHandler:(void (^)(INIntentResponse *, NSData *, NSError *))arg2;
- (oneway void)handleIntent:(INIntent *)arg1 completion:(void (^)(INIntentResponse *, NSData *))arg2;
- (oneway void)confirmationResponseForIntent:(INIntent *)arg1 completion:(void (^)(INIntentResponse *, NSData *))arg2;
- (oneway void)getApplicationContextWithCompletion:(void (^)(INApplicationContext *))arg1;
- (oneway void)stopSendingUpdatesForIntent:(INIntent *)arg1;
- (oneway void)startSendingUpdatesForIntent:(INIntent *)arg1 toObserver:(id <INIntentResponseObserver>)arg2;
@end


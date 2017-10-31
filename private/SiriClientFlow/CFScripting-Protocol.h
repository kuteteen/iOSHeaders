//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString, SACFAbstractClientCommand, SACFClientFlowScript;

@protocol CFScripting
- (id)initWithConnectionName:(NSString *)arg1;
- (void)removeScripts:(NSArray *)arg1 completion:(void (^)(_Bool))arg2;
- (void)updateScriptCacheForFlowScript:(SACFClientFlowScript *)arg1 completion:(void (^)(_Bool))arg2;
- (void)performCommandExecutionForCommand:(SACFAbstractClientCommand *)arg1 completion:(void (^)(SABaseCommand *))arg2;
- (void)performWarmupAndEvaluateScriptWithScriptHint:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)performWarmupWithCompletion:(void (^)(_Bool))arg1;
@end


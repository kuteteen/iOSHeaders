//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUAssetSupportChecker : NSObject
{
}

+ (void)checkIsSupportedAndPresentAlertForAsset:(id)arg1 type:(long long)arg2 alertControllerPresenter:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)presentAlertForAsset:(id)arg1 type:(long long)arg2 alertControllerPresenter:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 uti:(id)arg3 codecName:(id)arg4 alertControllerPresenter:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)checkIsSupportedAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 knowledgeBaseURL:(id)arg3 alertControllerPresenter:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)_alertTitleAndMessageForAsset:(id)arg1 type:(long long)arg2 title:(id *)arg3 message:(id *)arg4;

@end


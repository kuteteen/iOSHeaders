//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface OBPrivacyCombinedController : UIViewController
{
    _Bool _darkMode;
    _Bool _allowsOpeningSafari;
    _Bool _presentedFromPrivacyPane;
}

+ (void)presentPrivacyCombinedControllerOverController:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;
@property _Bool presentedFromPrivacyPane; // @synthesize presentedFromPrivacyPane=_presentedFromPrivacyPane;
@property _Bool allowsOpeningSafari; // @synthesize allowsOpeningSafari=_allowsOpeningSafari;
@property(nonatomic, getter=isDarkMode) _Bool darkMode; // @synthesize darkMode=_darkMode;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (id)init;

@end


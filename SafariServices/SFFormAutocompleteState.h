//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/WBUFormAutoCompleteState.h>

@class NSDictionary, NSString, SFFormAutoFillFrameHandle, UIView, WBSFormAutoFillMetadataCorrector, WBSFormMetadata, _SFFormAutoFillController;
@protocol _WKFormInputSession;

__attribute__((visibility("hidden")))
@interface SFFormAutocompleteState : WBUFormAutoCompleteState
{
    SFFormAutoFillFrameHandle *_frame;
    WBSFormMetadata *_formMetadata;
    NSDictionary *_textFieldMetadata;
    NSString *_textFieldValue;
    _SFFormAutoFillController *_autoFillController;
    id <_WKFormInputSession> _inputSession;
    UIView *_emptyInputView;
    WBSFormAutoFillMetadataCorrector *_metadataCorrector;
    NSString *_prefixForSuggestions;
}

- (void).cxx_destruct;
- (id)_correctedFormMetadata:(id)arg1;
- (id)frame;
- (id)webView;
- (void)setFormControls:(id)arg1 areAutoFilled:(_Bool)arg2 clearField:(id)arg3;
- (void)fillGeneratedPassword:(id)arg1 inField:(id)arg2;
- (void)annotateForm:(long long)arg1 withValues:(id)arg2;
- (void)autoFillGeneratedPassword:(id)arg1 inForm:(long long)arg2;
- (void)autoFillValues:(id)arg1 setAutoFilled:(_Bool)arg2 andFocusFieldAfterFilling:(_Bool)arg3 fieldToFocus:(id)arg4;
- (void)fetchFormMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)textDidChangeInFrame:(id)arg1 form:(id)arg2 textField:(id)arg3;
- (id)textFieldValue;
- (void)_updateTextFieldValue;
- (void)getTextFieldMetadata:(id *)arg1 formMetadata:(id *)arg2;
- (void)setShowingKeyboardInputView:(_Bool)arg1;
- (void)setPrefixForSuggestions:(id)arg1;
- (id)_suggestionsForAutoFillDisplayData:(id)arg1;
- (void)updateSuggestions;
- (void)setAutoFillButtonTitle:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)initWithFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 inputSession:(id)arg4 autoFillController:(id)arg5;

@end


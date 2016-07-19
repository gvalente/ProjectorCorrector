//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class MSCloudAuthAPI, MSCloudPreferencePane, NSButton, NSDictionary, NSProgressIndicator, NSTextField, NSView;

@interface MSCloudLoginViewController : NSViewController
{
    MSCloudPreferencePane *_preferencePane;
    NSView *_loginView;
    NSTextField *_emailTextField;
    NSTextField *_passwordTextField;
    NSButton *_loginButton;
    NSButton *_registerButton;
    NSProgressIndicator *_loginProgressIndicator;
    NSView *_registerView;
    NSTextField *_registerEmailTextField;
    NSTextField *_registerPasswordTextField;
    NSTextField *_registerConfirmPasswordTextField;
    NSButton *_registerConfirmButton;
    NSButton *_registerNewsLetterButton;
    NSProgressIndicator *_registerProgressIndicator;
    NSView *_verifyView;
    NSTextField *_tokenTextField;
    NSButton *_verifyButton;
    NSButton *_resendButton;
    NSProgressIndicator *_verifyProgressIndicator;
    NSView *_recoverView;
    NSTextField *_recoverEmailTextField;
    NSButton *_recoverButton;
    NSView *_resetView;
    NSTextField *_resetTokenTextField;
    NSTextField *_resetPasswordTextField;
    NSTextField *_resetConformPasswordTextField;
    NSButton *_resetButton;
    NSProgressIndicator *_recoverProgressIndicator;
    NSProgressIndicator *_resetProgressIndicator;
    MSCloudAuthAPI *_cloudAuthAPI;
    NSDictionary *_userData;
}

@property(retain, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) MSCloudAuthAPI *cloudAuthAPI; // @synthesize cloudAuthAPI=_cloudAuthAPI;
@property(nonatomic) __weak NSProgressIndicator *resetProgressIndicator; // @synthesize resetProgressIndicator=_resetProgressIndicator;
@property(nonatomic) __weak NSProgressIndicator *recoverProgressIndicator; // @synthesize recoverProgressIndicator=_recoverProgressIndicator;
@property(nonatomic) __weak NSButton *resetButton; // @synthesize resetButton=_resetButton;
@property(nonatomic) __weak NSTextField *resetConformPasswordTextField; // @synthesize resetConformPasswordTextField=_resetConformPasswordTextField;
@property(nonatomic) __weak NSTextField *resetPasswordTextField; // @synthesize resetPasswordTextField=_resetPasswordTextField;
@property(nonatomic) __weak NSTextField *resetTokenTextField; // @synthesize resetTokenTextField=_resetTokenTextField;
@property(nonatomic) __weak NSView *resetView; // @synthesize resetView=_resetView;
@property(nonatomic) __weak NSButton *recoverButton; // @synthesize recoverButton=_recoverButton;
@property(nonatomic) __weak NSTextField *recoverEmailTextField; // @synthesize recoverEmailTextField=_recoverEmailTextField;
@property(nonatomic) __weak NSView *recoverView; // @synthesize recoverView=_recoverView;
@property(nonatomic) __weak NSProgressIndicator *verifyProgressIndicator; // @synthesize verifyProgressIndicator=_verifyProgressIndicator;
@property(nonatomic) __weak NSButton *resendButton; // @synthesize resendButton=_resendButton;
@property(nonatomic) __weak NSButton *verifyButton; // @synthesize verifyButton=_verifyButton;
@property(nonatomic) __weak NSTextField *tokenTextField; // @synthesize tokenTextField=_tokenTextField;
@property(nonatomic) __weak NSView *verifyView; // @synthesize verifyView=_verifyView;
@property(nonatomic) __weak NSProgressIndicator *registerProgressIndicator; // @synthesize registerProgressIndicator=_registerProgressIndicator;
@property(nonatomic) __weak NSButton *registerNewsLetterButton; // @synthesize registerNewsLetterButton=_registerNewsLetterButton;
@property(nonatomic) __weak NSButton *registerConfirmButton; // @synthesize registerConfirmButton=_registerConfirmButton;
@property(nonatomic) __weak NSTextField *registerConfirmPasswordTextField; // @synthesize registerConfirmPasswordTextField=_registerConfirmPasswordTextField;
@property(nonatomic) __weak NSTextField *registerPasswordTextField; // @synthesize registerPasswordTextField=_registerPasswordTextField;
@property(nonatomic) __weak NSTextField *registerEmailTextField; // @synthesize registerEmailTextField=_registerEmailTextField;
@property(nonatomic) __weak NSView *registerView; // @synthesize registerView=_registerView;
@property(nonatomic) __weak NSProgressIndicator *loginProgressIndicator; // @synthesize loginProgressIndicator=_loginProgressIndicator;
@property(nonatomic) __weak NSButton *registerButton; // @synthesize registerButton=_registerButton;
@property(nonatomic) __weak NSButton *loginButton; // @synthesize loginButton=_loginButton;
@property(nonatomic) __weak NSTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(nonatomic) __weak NSTextField *emailTextField; // @synthesize emailTextField=_emailTextField;
@property(nonatomic) __weak NSView *loginView; // @synthesize loginView=_loginView;
@property(nonatomic) __weak MSCloudPreferencePane *preferencePane; // @synthesize preferencePane=_preferencePane;
- (void).cxx_destruct;
- (void)userDidLogout:(id)arg1;
- (void)userDidLogin;
- (void)showResetView;
- (void)resetAccount:(id)arg1;
- (void)enableResetFields:(BOOL)arg1;
- (void)recoverAccount:(id)arg1;
- (void)cancelRecovery:(id)arg1;
- (void)showRecoverView:(id)arg1;
- (void)enableRecoverFields:(BOOL)arg1;
- (void)resendVerificationToken:(id)arg1;
- (void)verifyAccount:(id)arg1;
- (void)cancelVerification:(id)arg1;
- (void)enableVerificationFields:(BOOL)arg1;
- (void)cancelRegistration:(id)arg1;
- (void)registerNewsletterWithEmail:(id)arg1;
- (void)registerAccountConfirm:(id)arg1;
- (void)registerAccount:(id)arg1;
- (void)enableRegistrationFields:(BOOL)arg1;
- (void)login:(id)arg1;
- (void)enableLoginFields:(BOOL)arg1;
- (void)showLoginView;
- (void)showView:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (id)initWithPreferencePane:(id)arg1;

@end


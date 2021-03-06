/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLMessageParty : NSObject {
    NSString *_address;
    NSString *_ccAcNumber;
    NSString *_icc;
    BOOL _isPhoneNumber;
    NSString *_np;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *ccAcNumber;
@property (nonatomic, readonly) NSString *icc;
@property (nonatomic, readonly) BOOL isPhoneNumber;
@property (nonatomic, readonly) NSString *np;

+ (id)_guessIccForNumber:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithAddress:(id)arg1 addCountryCode:(BOOL)arg2;
- (id)address;
- (id)ccAcNumber;
- (id)description;
- (id)icc;
- (BOOL)isPhoneNumber;
- (id)np;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIClientContext, SKUIITunesPassConfiguration, UIImage;

@interface SKUIRedeemConfiguration : NSObject {
    int _category;
    SKUIClientContext *_clientContext;
    UIImage *_inputImage;
    SKUIITunesPassConfiguration *_itunesPassConfiguration;
    UIImage *_landingImage;
    NSOperationQueue *_operationQueue;
    UIImage *_successImage;
}

@property(readonly) SKUIITunesPassConfiguration * ITunesPassConfiguration;
@property(readonly) UIImage * inputImage;
@property(readonly) UIImage * landingImage;
@property(readonly) NSOperationQueue * operationQueue;
@property(readonly) UIImage * successImage;

- (void).cxx_destruct;
- (id)ITunesPassConfiguration;
- (void)_didLoadWithResponseDictionary:(id)arg1;
- (void)_loadConfigurationWithURLBagDictionary:(id)arg1 completionBlock:(id)arg2;
- (void)_loadDefaultImages;
- (id)_redeemPreflightRequestBodyData;
- (void)_setInputImage:(id)arg1;
- (void)_setLandingImage:(id)arg1;
- (void)_setSuccessImage:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 category:(int)arg2 clientContext:(id)arg3;
- (id)inputImage;
- (id)landingImage;
- (void)loadConfigurationWithCompletionBlock:(id)arg1;
- (id)operationQueue;
- (id)successImage;

@end
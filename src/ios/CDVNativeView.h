//
//  CDVNativeView.h
//
//  Created by Bala Krishna
//
//

#import <Cordova/CDV.h>

@interface CDVNativeView : CDVPlugin

- (void)show:(CDVInvokedUrlCommand*)command;
- (NSString *)getExtraMessageFromPlugin;

@end

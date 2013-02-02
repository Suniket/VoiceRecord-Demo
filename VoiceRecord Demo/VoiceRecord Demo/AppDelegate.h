//
//  AppDelegate.h
//  VoiceRecord Demo
//
//  Created by Suniket Wagh on 02/02/13.
//  Copyright (c) 2013 Suniket Wagh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VoiceRecordViewController.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    VoiceRecordViewController* controller;
}
@property (strong, nonatomic) UIWindow *window;

@end

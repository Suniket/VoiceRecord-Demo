//
//  VoiceRecordViewController.h
//  VoiceRecord Demo
//
//  Created by Suniket Wagh on 02/02/13.
//  Copyright (c) 2013 Suniket Wagh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

@interface VoiceRecordViewController : UIViewController <AVAudioRecorderDelegate>
{

     IBOutlet UIProgressView *progressView;
     IBOutlet UILabel *lblStatusMsg;

    NSMutableDictionary *recordSetting;
	NSMutableDictionary *editedObject;
	NSString *recorderFilePath;
	AVAudioRecorder *recorder;
	
	SystemSoundID soundID;
	NSTimer *timer;

}
- (IBAction)startRecording:(id)sender;
- (IBAction)stopRecording:(id)sender;
- (IBAction)playSound:(id)sender;
- (void) handleTimer;


@end

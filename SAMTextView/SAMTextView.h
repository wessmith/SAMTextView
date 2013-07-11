//
//  SAMTextView.h
//  SAMTextView
//
//  Created by Sam Soffes on 8/18/10.
//  Copyright 2010-2013 Sam Soffes. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 UITextView subclass that adds placeholder support like UITextField has.
 */
@interface SAMTextView : UITextView

/**
 The string that is displayed when there is no other text in the text view.
 
 The default value is `nil`.
 */
@property (nonatomic, strong) NSString *placeholder;

/**
 The color of the placeholder.
 
 The default is `[UIColor lightGrayColor]`.
 */
@property (nonatomic, strong) UIColor *placeholderTextColor UI_APPEARANCE_SELECTOR;

/**
 The font of the placeholder.
 
 The default is `self.font`.
 */
@property (nonatomic, strong) UIFont *placeholderFont UI_APPEARANCE_SELECTOR;

@end

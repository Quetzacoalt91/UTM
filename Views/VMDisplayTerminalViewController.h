//
// Copyright © 2020 osy. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import "UTMVirtualMachine.h"
#import "UTMTerminalIO.h"
#import "UTMTerminal.h"
#import "UTMTerminalDelegate.h"
#import "VMDisplayViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface VMDisplayTerminalViewController : VMDisplayViewController<UTMTerminalDelegate, WKScriptMessageHandler, UIGestureRecognizerDelegate, WKNavigationDelegate>

@property (weak, nonatomic) IBOutlet WKWebView *webView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *webViewTopConstraint;
@property (nonatomic, weak) UTMTerminal* terminal;

@end

NS_ASSUME_NONNULL_END
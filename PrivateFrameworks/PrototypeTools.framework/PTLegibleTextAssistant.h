/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class PTLegibleTextAssistantSettings;

@interface PTLegibleTextAssistant : NSObject {
    struct { 
        float meanRed; 
        float meanGreen; 
        float meanBlue; 
        float meanHue; 
        float meanSaturation; 
        float meanBrightness; 
        float meanAlpha; 
        float standardDeviationBrightness; 
        float standardDeviationSaturation; 
    float _alphaStrength;
    BOOL _effectsDisabled;
    } _imageStatistics;
    float _largestShadowRadius;
    float _radiusStrength;
    PTLegibleTextAssistantSettings *_settings;
}

@property float alphaStrength;
@property BOOL effectsDisabled;
@property struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; } imageStatistics;
@property float largestShadowRadius;
@property float radiusStrength;
@property(retain) PTLegibleTextAssistantSettings * settings;

- (void).cxx_destruct;
- (float)alphaStrength;
- (BOOL)effectsDisabled;
- (id)generateForegroundImageForText:(id)arg1 font:(id)arg2 imageSize:(struct CGSize { float x1; float x2; })arg3;
- (id)generateTextAssistantImageForText:(id)arg1 font:(id)arg2 imageSize:(struct CGSize { float x1; float x2; })arg3;
- (struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; })imageStatistics;
- (id)initWithImageStatistics:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; })arg1;
- (float)largestShadowRadius;
- (id)legibleTextAssistantViewForText:(id)arg1 font:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })legibleTextAssistantViewFrameForText:(id)arg1 font:(id)arg2;
- (float)radiusStrength;
- (void)setAlphaStrength:(float)arg1;
- (void)setEffectsDisabled:(BOOL)arg1;
- (void)setImageStatistics:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; })arg1;
- (void)setLargestShadowRadius:(float)arg1;
- (void)setRadiusStrength:(float)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
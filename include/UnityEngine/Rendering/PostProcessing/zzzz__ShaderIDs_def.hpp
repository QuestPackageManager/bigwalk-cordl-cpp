#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ShaderIDs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderIDs)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class ShaderIDs;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::ShaderIDs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::ShaderIDs*, "UnityEngine.Rendering.PostProcessing", "ShaderIDs");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.ShaderIDs
class CORDL_TYPE ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field AOColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AOColor, put=setStaticF_AOColor)) int32_t  AOColor;

/// @brief Field AOParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AOParams, put=setStaticF_AOParams)) int32_t  AOParams;

/// @brief Field AutoExposureTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AutoExposureTex, put=setStaticF_AutoExposureTex)) int32_t  AutoExposureTex;

/// @brief Field BloomTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BloomTex, put=setStaticF_BloomTex)) int32_t  BloomTex;

/// @brief Field Bloom_Color, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Bloom_Color, put=setStaticF_Bloom_Color)) int32_t  Bloom_Color;

/// @brief Field Bloom_DirtTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Bloom_DirtTex, put=setStaticF_Bloom_DirtTex)) int32_t  Bloom_DirtTex;

/// @brief Field Bloom_DirtTileOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Bloom_DirtTileOffset, put=setStaticF_Bloom_DirtTileOffset)) int32_t  Bloom_DirtTileOffset;

/// @brief Field Bloom_Settings, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Bloom_Settings, put=setStaticF_Bloom_Settings)) int32_t  Bloom_Settings;

/// @brief Field Brightness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Brightness, put=setStaticF_Brightness)) int32_t  Brightness;

/// @brief Field ChannelMixerBlue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ChannelMixerBlue, put=setStaticF_ChannelMixerBlue)) int32_t  ChannelMixerBlue;

/// @brief Field ChannelMixerGreen, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ChannelMixerGreen, put=setStaticF_ChannelMixerGreen)) int32_t  ChannelMixerGreen;

/// @brief Field ChannelMixerRed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ChannelMixerRed, put=setStaticF_ChannelMixerRed)) int32_t  ChannelMixerRed;

/// @brief Field ChromaticAberration_Amount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ChromaticAberration_Amount, put=setStaticF_ChromaticAberration_Amount)) int32_t  ChromaticAberration_Amount;

/// @brief Field ChromaticAberration_SpectralLut, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ChromaticAberration_SpectralLut, put=setStaticF_ChromaticAberration_SpectralLut)) int32_t  ChromaticAberration_SpectralLut;

/// @brief Field CoCTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CoCTex, put=setStaticF_CoCTex)) int32_t  CoCTex;

/// @brief Field ColorBalance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ColorBalance, put=setStaticF_ColorBalance)) int32_t  ColorBalance;

/// @brief Field ColorFilter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ColorFilter, put=setStaticF_ColorFilter)) int32_t  ColorFilter;

/// @brief Field ColorIntensity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ColorIntensity, put=setStaticF_ColorIntensity)) int32_t  ColorIntensity;

/// @brief Field Combined1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Combined1, put=setStaticF_Combined1)) int32_t  Combined1;

/// @brief Field Combined2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Combined2, put=setStaticF_Combined2)) int32_t  Combined2;

/// @brief Field Combined3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Combined3, put=setStaticF_Combined3)) int32_t  Combined3;

/// @brief Field Curves, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Curves, put=setStaticF_Curves)) int32_t  Curves;

/// @brief Field CustomToneCurve, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CustomToneCurve, put=setStaticF_CustomToneCurve)) int32_t  CustomToneCurve;

/// @brief Field DepthCopy, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DepthCopy, put=setStaticF_DepthCopy)) int32_t  DepthCopy;

/// @brief Field DepthOfFieldTemp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DepthOfFieldTemp, put=setStaticF_DepthOfFieldTemp)) int32_t  DepthOfFieldTemp;

/// @brief Field DepthOfFieldTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DepthOfFieldTex, put=setStaticF_DepthOfFieldTex)) int32_t  DepthOfFieldTex;

/// @brief Field DepthSlice, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DepthSlice, put=setStaticF_DepthSlice)) int32_t  DepthSlice;

/// @brief Field Distance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Distance, put=setStaticF_Distance)) int32_t  Distance;

/// @brief Field Distortion_Amount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Distortion_Amount, put=setStaticF_Distortion_Amount)) int32_t  Distortion_Amount;

/// @brief Field Distortion_CenterScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Distortion_CenterScale, put=setStaticF_Distortion_CenterScale)) int32_t  Distortion_CenterScale;

/// @brief Field DitheringTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DitheringTex, put=setStaticF_DitheringTex)) int32_t  DitheringTex;

/// @brief Field Dithering_Coords, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Dithering_Coords, put=setStaticF_Dithering_Coords)) int32_t  Dithering_Coords;

/// @brief Field FinalBlendParameters, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_FinalBlendParameters, put=setStaticF_FinalBlendParameters)) int32_t  FinalBlendParameters;

/// @brief Field FogColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_FogColor, put=setStaticF_FogColor)) int32_t  FogColor;

/// @brief Field FogParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_FogParams, put=setStaticF_FogParams)) int32_t  FogParams;

/// @brief Field From, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_From, put=setStaticF_From)) int32_t  From;

/// @brief Field Gain, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Gain, put=setStaticF_Gain)) int32_t  Gain;

/// @brief Field GrainNoiseParameters, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_GrainNoiseParameters, put=setStaticF_GrainNoiseParameters)) int32_t  GrainNoiseParameters;

/// @brief Field GrainTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_GrainTex, put=setStaticF_GrainTex)) int32_t  GrainTex;

/// @brief Field Grain_Params1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Grain_Params1, put=setStaticF_Grain_Params1)) int32_t  Grain_Params1;

/// @brief Field Grain_Params2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Grain_Params2, put=setStaticF_Grain_Params2)) int32_t  Grain_Params2;

/// @brief Field HalfResFinalCopy, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HalfResFinalCopy, put=setStaticF_HalfResFinalCopy)) int32_t  HalfResFinalCopy;

/// @brief Field HistogramBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HistogramBuffer, put=setStaticF_HistogramBuffer)) int32_t  HistogramBuffer;

/// @brief Field History, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_History, put=setStaticF_History)) int32_t  History;

/// @brief Field HistoryTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HistoryTex, put=setStaticF_HistoryTex)) int32_t  HistoryTex;

/// @brief Field HueSatCon, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HueSatCon, put=setStaticF_HueSatCon)) int32_t  HueSatCon;

/// @brief Field Interp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Interp, put=setStaticF_Interp)) int32_t  Interp;

/// @brief Field InvGamma, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_InvGamma, put=setStaticF_InvGamma)) int32_t  InvGamma;

/// @brief Field InverseViewMatrix, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_InverseViewMatrix, put=setStaticF_InverseViewMatrix)) int32_t  InverseViewMatrix;

/// @brief Field Jitter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Jitter, put=setStaticF_Jitter)) int32_t  Jitter;

/// @brief Field LensCoeff, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LensCoeff, put=setStaticF_LensCoeff)) int32_t  LensCoeff;

/// @brief Field Lift, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lift, put=setStaticF_Lift)) int32_t  Lift;

/// @brief Field LinearDepth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LinearDepth, put=setStaticF_LinearDepth)) int32_t  LinearDepth;

/// @brief Field LoopCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LoopCount, put=setStaticF_LoopCount)) int32_t  LoopCount;

/// @brief Field LowDepth1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LowDepth1, put=setStaticF_LowDepth1)) int32_t  LowDepth1;

/// @brief Field LowDepth2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LowDepth2, put=setStaticF_LowDepth2)) int32_t  LowDepth2;

/// @brief Field LowDepth3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LowDepth3, put=setStaticF_LowDepth3)) int32_t  LowDepth3;

/// @brief Field LowDepth4, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LowDepth4, put=setStaticF_LowDepth4)) int32_t  LowDepth4;

/// @brief Field LumaInAlpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LumaInAlpha, put=setStaticF_LumaInAlpha)) int32_t  LumaInAlpha;

/// @brief Field Lut2D, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lut2D, put=setStaticF_Lut2D)) int32_t  Lut2D;

/// @brief Field Lut2D_Params, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lut2D_Params, put=setStaticF_Lut2D_Params)) int32_t  Lut2D_Params;

/// @brief Field Lut3D, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lut3D, put=setStaticF_Lut3D)) int32_t  Lut3D;

/// @brief Field Lut3D_Params, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Lut3D_Params, put=setStaticF_Lut3D_Params)) int32_t  Lut3D_Params;

/// @brief Field MSVOcclusionTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MSVOcclusionTexture, put=setStaticF_MSVOcclusionTexture)) int32_t  MSVOcclusionTexture;

/// @brief Field MainTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MainTex, put=setStaticF_MainTex)) int32_t  MainTex;

/// @brief Field MaxBlurRadius, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MaxBlurRadius, put=setStaticF_MaxBlurRadius)) int32_t  MaxBlurRadius;

/// @brief Field MaxCoC, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MaxCoC, put=setStaticF_MaxCoC)) int32_t  MaxCoC;

/// @brief Field MidSegmentA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MidSegmentA, put=setStaticF_MidSegmentA)) int32_t  MidSegmentA;

/// @brief Field MidSegmentB, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MidSegmentB, put=setStaticF_MidSegmentB)) int32_t  MidSegmentB;

/// @brief Field NeighborMaxTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_NeighborMaxTex, put=setStaticF_NeighborMaxTex)) int32_t  NeighborMaxTex;

/// @brief Field Noise, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Noise, put=setStaticF_Noise)) int32_t  Noise;

/// @brief Field Occlusion1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Occlusion1, put=setStaticF_Occlusion1)) int32_t  Occlusion1;

/// @brief Field Occlusion2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Occlusion2, put=setStaticF_Occlusion2)) int32_t  Occlusion2;

/// @brief Field Occlusion3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Occlusion3, put=setStaticF_Occlusion3)) int32_t  Occlusion3;

/// @brief Field Occlusion4, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Occlusion4, put=setStaticF_Occlusion4)) int32_t  Occlusion4;

/// @brief Field OcclusionTexture1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OcclusionTexture1, put=setStaticF_OcclusionTexture1)) int32_t  OcclusionTexture1;

/// @brief Field OcclusionTexture2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_OcclusionTexture2, put=setStaticF_OcclusionTexture2)) int32_t  OcclusionTexture2;

/// @brief Field Params, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Params, put=setStaticF_Params)) int32_t  Params;

/// @brief Field Params2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Params2, put=setStaticF_Params2)) int32_t  Params2;

/// @brief Field Phase, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Phase, put=setStaticF_Phase)) int32_t  Phase;

/// @brief Field PosScaleOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PosScaleOffset, put=setStaticF_PosScaleOffset)) int32_t  PosScaleOffset;

/// @brief Field PostExposure, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PostExposure, put=setStaticF_PostExposure)) int32_t  PostExposure;

/// @brief Field RcpAspect, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_RcpAspect, put=setStaticF_RcpAspect)) int32_t  RcpAspect;

/// @brief Field RcpMaxBlurRadius, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_RcpMaxBlurRadius, put=setStaticF_RcpMaxBlurRadius)) int32_t  RcpMaxBlurRadius;

/// @brief Field RcpMaxCoC, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_RcpMaxCoC, put=setStaticF_RcpMaxCoC)) int32_t  RcpMaxCoC;

/// @brief Field RenderViewportScaleFactor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_RenderViewportScaleFactor, put=setStaticF_RenderViewportScaleFactor)) int32_t  RenderViewportScaleFactor;

/// @brief Field Resolve, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Resolve, put=setStaticF_Resolve)) int32_t  Resolve;

/// @brief Field SAOcclusionTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SAOcclusionTexture, put=setStaticF_SAOcclusionTexture)) int32_t  SAOcclusionTexture;

/// @brief Field SMAA_Flip, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SMAA_Flip, put=setStaticF_SMAA_Flip)) int32_t  SMAA_Flip;

/// @brief Field SMAA_Flop, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SMAA_Flop, put=setStaticF_SMAA_Flop)) int32_t  SMAA_Flop;

/// @brief Field SSRResolveTemp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SSRResolveTemp, put=setStaticF_SSRResolveTemp)) int32_t  SSRResolveTemp;

/// @brief Field SampleScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SampleScale, put=setStaticF_SampleScale)) int32_t  SampleScale;

/// @brief Field ScaleOffsetRes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScaleOffsetRes, put=setStaticF_ScaleOffsetRes)) int32_t  ScaleOffsetRes;

/// @brief Field ScreenSpaceProjectionMatrix, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScreenSpaceProjectionMatrix, put=setStaticF_ScreenSpaceProjectionMatrix)) int32_t  ScreenSpaceProjectionMatrix;

/// @brief Field Sharpness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Sharpness, put=setStaticF_Sharpness)) int32_t  Sharpness;

/// @brief Field ShoSegmentA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ShoSegmentA, put=setStaticF_ShoSegmentA)) int32_t  ShoSegmentA;

/// @brief Field ShoSegmentB, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ShoSegmentB, put=setStaticF_ShoSegmentB)) int32_t  ShoSegmentB;

/// @brief Field TaaParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TaaParams, put=setStaticF_TaaParams)) int32_t  TaaParams;

/// @brief Field TargetColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TargetColor, put=setStaticF_TargetColor)) int32_t  TargetColor;

/// @brief Field Test, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Test, put=setStaticF_Test)) int32_t  Test;

/// @brief Field Threshold, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Threshold, put=setStaticF_Threshold)) int32_t  Threshold;

/// @brief Field Tile2RT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Tile2RT, put=setStaticF_Tile2RT)) int32_t  Tile2RT;

/// @brief Field Tile4RT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Tile4RT, put=setStaticF_Tile4RT)) int32_t  Tile4RT;

/// @brief Field Tile8RT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Tile8RT, put=setStaticF_Tile8RT)) int32_t  Tile8RT;

/// @brief Field TileMaxLoop, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TileMaxLoop, put=setStaticF_TileMaxLoop)) int32_t  TileMaxLoop;

/// @brief Field TileMaxOffs, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TileMaxOffs, put=setStaticF_TileMaxOffs)) int32_t  TileMaxOffs;

/// @brief Field TileVRT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TileVRT, put=setStaticF_TileVRT)) int32_t  TileVRT;

/// @brief Field TiledDepth1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TiledDepth1, put=setStaticF_TiledDepth1)) int32_t  TiledDepth1;

/// @brief Field TiledDepth2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TiledDepth2, put=setStaticF_TiledDepth2)) int32_t  TiledDepth2;

/// @brief Field TiledDepth3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TiledDepth3, put=setStaticF_TiledDepth3)) int32_t  TiledDepth3;

/// @brief Field TiledDepth4, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TiledDepth4, put=setStaticF_TiledDepth4)) int32_t  TiledDepth4;

/// @brief Field To, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_To, put=setStaticF_To)) int32_t  To;

/// @brief Field ToeSegmentA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ToeSegmentA, put=setStaticF_ToeSegmentA)) int32_t  ToeSegmentA;

/// @brief Field ToeSegmentB, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ToeSegmentB, put=setStaticF_ToeSegmentB)) int32_t  ToeSegmentB;

/// @brief Field UVScaleOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UVScaleOffset, put=setStaticF_UVScaleOffset)) int32_t  UVScaleOffset;

/// @brief Field UVTransform, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UVTransform, put=setStaticF_UVTransform)) int32_t  UVTransform;

/// @brief Field UserLut2D_Params, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UserLut2D_Params, put=setStaticF_UserLut2D_Params)) int32_t  UserLut2D_Params;

/// @brief Field VectorscopeBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_VectorscopeBuffer, put=setStaticF_VectorscopeBuffer)) int32_t  VectorscopeBuffer;

/// @brief Field VelocityScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_VelocityScale, put=setStaticF_VelocityScale)) int32_t  VelocityScale;

/// @brief Field VelocityTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_VelocityTex, put=setStaticF_VelocityTex)) int32_t  VelocityTex;

/// @brief Field ViewMatrix, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ViewMatrix, put=setStaticF_ViewMatrix)) int32_t  ViewMatrix;

/// @brief Field Vignette_Center, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Vignette_Center, put=setStaticF_Vignette_Center)) int32_t  Vignette_Center;

/// @brief Field Vignette_Color, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Vignette_Color, put=setStaticF_Vignette_Color)) int32_t  Vignette_Color;

/// @brief Field Vignette_Mask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Vignette_Mask, put=setStaticF_Vignette_Mask)) int32_t  Vignette_Mask;

/// @brief Field Vignette_Mode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Vignette_Mode, put=setStaticF_Vignette_Mode)) int32_t  Vignette_Mode;

/// @brief Field Vignette_Opacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Vignette_Opacity, put=setStaticF_Vignette_Opacity)) int32_t  Vignette_Opacity;

/// @brief Field Vignette_Settings, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Vignette_Settings, put=setStaticF_Vignette_Settings)) int32_t  Vignette_Settings;

/// @brief Field WaveformBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WaveformBuffer, put=setStaticF_WaveformBuffer)) int32_t  WaveformBuffer;

/// @brief Field WaveformSource, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_WaveformSource, put=setStaticF_WaveformSource)) int32_t  WaveformSource;

static inline int32_t getStaticF_AOColor() ;

static inline int32_t getStaticF_AOParams() ;

static inline int32_t getStaticF_AutoExposureTex() ;

static inline int32_t getStaticF_BloomTex() ;

static inline int32_t getStaticF_Bloom_Color() ;

static inline int32_t getStaticF_Bloom_DirtTex() ;

static inline int32_t getStaticF_Bloom_DirtTileOffset() ;

static inline int32_t getStaticF_Bloom_Settings() ;

static inline int32_t getStaticF_Brightness() ;

static inline int32_t getStaticF_ChannelMixerBlue() ;

static inline int32_t getStaticF_ChannelMixerGreen() ;

static inline int32_t getStaticF_ChannelMixerRed() ;

static inline int32_t getStaticF_ChromaticAberration_Amount() ;

static inline int32_t getStaticF_ChromaticAberration_SpectralLut() ;

static inline int32_t getStaticF_CoCTex() ;

static inline int32_t getStaticF_ColorBalance() ;

static inline int32_t getStaticF_ColorFilter() ;

static inline int32_t getStaticF_ColorIntensity() ;

static inline int32_t getStaticF_Combined1() ;

static inline int32_t getStaticF_Combined2() ;

static inline int32_t getStaticF_Combined3() ;

static inline int32_t getStaticF_Curves() ;

static inline int32_t getStaticF_CustomToneCurve() ;

static inline int32_t getStaticF_DepthCopy() ;

static inline int32_t getStaticF_DepthOfFieldTemp() ;

static inline int32_t getStaticF_DepthOfFieldTex() ;

static inline int32_t getStaticF_DepthSlice() ;

static inline int32_t getStaticF_Distance() ;

static inline int32_t getStaticF_Distortion_Amount() ;

static inline int32_t getStaticF_Distortion_CenterScale() ;

static inline int32_t getStaticF_DitheringTex() ;

static inline int32_t getStaticF_Dithering_Coords() ;

static inline int32_t getStaticF_FinalBlendParameters() ;

static inline int32_t getStaticF_FogColor() ;

static inline int32_t getStaticF_FogParams() ;

static inline int32_t getStaticF_From() ;

static inline int32_t getStaticF_Gain() ;

static inline int32_t getStaticF_GrainNoiseParameters() ;

static inline int32_t getStaticF_GrainTex() ;

static inline int32_t getStaticF_Grain_Params1() ;

static inline int32_t getStaticF_Grain_Params2() ;

static inline int32_t getStaticF_HalfResFinalCopy() ;

static inline int32_t getStaticF_HistogramBuffer() ;

static inline int32_t getStaticF_History() ;

static inline int32_t getStaticF_HistoryTex() ;

static inline int32_t getStaticF_HueSatCon() ;

static inline int32_t getStaticF_Interp() ;

static inline int32_t getStaticF_InvGamma() ;

static inline int32_t getStaticF_InverseViewMatrix() ;

static inline int32_t getStaticF_Jitter() ;

static inline int32_t getStaticF_LensCoeff() ;

static inline int32_t getStaticF_Lift() ;

static inline int32_t getStaticF_LinearDepth() ;

static inline int32_t getStaticF_LoopCount() ;

static inline int32_t getStaticF_LowDepth1() ;

static inline int32_t getStaticF_LowDepth2() ;

static inline int32_t getStaticF_LowDepth3() ;

static inline int32_t getStaticF_LowDepth4() ;

static inline int32_t getStaticF_LumaInAlpha() ;

static inline int32_t getStaticF_Lut2D() ;

static inline int32_t getStaticF_Lut2D_Params() ;

static inline int32_t getStaticF_Lut3D() ;

static inline int32_t getStaticF_Lut3D_Params() ;

static inline int32_t getStaticF_MSVOcclusionTexture() ;

static inline int32_t getStaticF_MainTex() ;

static inline int32_t getStaticF_MaxBlurRadius() ;

static inline int32_t getStaticF_MaxCoC() ;

static inline int32_t getStaticF_MidSegmentA() ;

static inline int32_t getStaticF_MidSegmentB() ;

static inline int32_t getStaticF_NeighborMaxTex() ;

static inline int32_t getStaticF_Noise() ;

static inline int32_t getStaticF_Occlusion1() ;

static inline int32_t getStaticF_Occlusion2() ;

static inline int32_t getStaticF_Occlusion3() ;

static inline int32_t getStaticF_Occlusion4() ;

static inline int32_t getStaticF_OcclusionTexture1() ;

static inline int32_t getStaticF_OcclusionTexture2() ;

static inline int32_t getStaticF_Params() ;

static inline int32_t getStaticF_Params2() ;

static inline int32_t getStaticF_Phase() ;

static inline int32_t getStaticF_PosScaleOffset() ;

static inline int32_t getStaticF_PostExposure() ;

static inline int32_t getStaticF_RcpAspect() ;

static inline int32_t getStaticF_RcpMaxBlurRadius() ;

static inline int32_t getStaticF_RcpMaxCoC() ;

static inline int32_t getStaticF_RenderViewportScaleFactor() ;

static inline int32_t getStaticF_Resolve() ;

static inline int32_t getStaticF_SAOcclusionTexture() ;

static inline int32_t getStaticF_SMAA_Flip() ;

static inline int32_t getStaticF_SMAA_Flop() ;

static inline int32_t getStaticF_SSRResolveTemp() ;

static inline int32_t getStaticF_SampleScale() ;

static inline int32_t getStaticF_ScaleOffsetRes() ;

static inline int32_t getStaticF_ScreenSpaceProjectionMatrix() ;

static inline int32_t getStaticF_Sharpness() ;

static inline int32_t getStaticF_ShoSegmentA() ;

static inline int32_t getStaticF_ShoSegmentB() ;

static inline int32_t getStaticF_TaaParams() ;

static inline int32_t getStaticF_TargetColor() ;

static inline int32_t getStaticF_Test() ;

static inline int32_t getStaticF_Threshold() ;

static inline int32_t getStaticF_Tile2RT() ;

static inline int32_t getStaticF_Tile4RT() ;

static inline int32_t getStaticF_Tile8RT() ;

static inline int32_t getStaticF_TileMaxLoop() ;

static inline int32_t getStaticF_TileMaxOffs() ;

static inline int32_t getStaticF_TileVRT() ;

static inline int32_t getStaticF_TiledDepth1() ;

static inline int32_t getStaticF_TiledDepth2() ;

static inline int32_t getStaticF_TiledDepth3() ;

static inline int32_t getStaticF_TiledDepth4() ;

static inline int32_t getStaticF_To() ;

static inline int32_t getStaticF_ToeSegmentA() ;

static inline int32_t getStaticF_ToeSegmentB() ;

static inline int32_t getStaticF_UVScaleOffset() ;

static inline int32_t getStaticF_UVTransform() ;

static inline int32_t getStaticF_UserLut2D_Params() ;

static inline int32_t getStaticF_VectorscopeBuffer() ;

static inline int32_t getStaticF_VelocityScale() ;

static inline int32_t getStaticF_VelocityTex() ;

static inline int32_t getStaticF_ViewMatrix() ;

static inline int32_t getStaticF_Vignette_Center() ;

static inline int32_t getStaticF_Vignette_Color() ;

static inline int32_t getStaticF_Vignette_Mask() ;

static inline int32_t getStaticF_Vignette_Mode() ;

static inline int32_t getStaticF_Vignette_Opacity() ;

static inline int32_t getStaticF_Vignette_Settings() ;

static inline int32_t getStaticF_WaveformBuffer() ;

static inline int32_t getStaticF_WaveformSource() ;

static inline void setStaticF_AOColor(int32_t  value) ;

static inline void setStaticF_AOParams(int32_t  value) ;

static inline void setStaticF_AutoExposureTex(int32_t  value) ;

static inline void setStaticF_BloomTex(int32_t  value) ;

static inline void setStaticF_Bloom_Color(int32_t  value) ;

static inline void setStaticF_Bloom_DirtTex(int32_t  value) ;

static inline void setStaticF_Bloom_DirtTileOffset(int32_t  value) ;

static inline void setStaticF_Bloom_Settings(int32_t  value) ;

static inline void setStaticF_Brightness(int32_t  value) ;

static inline void setStaticF_ChannelMixerBlue(int32_t  value) ;

static inline void setStaticF_ChannelMixerGreen(int32_t  value) ;

static inline void setStaticF_ChannelMixerRed(int32_t  value) ;

static inline void setStaticF_ChromaticAberration_Amount(int32_t  value) ;

static inline void setStaticF_ChromaticAberration_SpectralLut(int32_t  value) ;

static inline void setStaticF_CoCTex(int32_t  value) ;

static inline void setStaticF_ColorBalance(int32_t  value) ;

static inline void setStaticF_ColorFilter(int32_t  value) ;

static inline void setStaticF_ColorIntensity(int32_t  value) ;

static inline void setStaticF_Combined1(int32_t  value) ;

static inline void setStaticF_Combined2(int32_t  value) ;

static inline void setStaticF_Combined3(int32_t  value) ;

static inline void setStaticF_Curves(int32_t  value) ;

static inline void setStaticF_CustomToneCurve(int32_t  value) ;

static inline void setStaticF_DepthCopy(int32_t  value) ;

static inline void setStaticF_DepthOfFieldTemp(int32_t  value) ;

static inline void setStaticF_DepthOfFieldTex(int32_t  value) ;

static inline void setStaticF_DepthSlice(int32_t  value) ;

static inline void setStaticF_Distance(int32_t  value) ;

static inline void setStaticF_Distortion_Amount(int32_t  value) ;

static inline void setStaticF_Distortion_CenterScale(int32_t  value) ;

static inline void setStaticF_DitheringTex(int32_t  value) ;

static inline void setStaticF_Dithering_Coords(int32_t  value) ;

static inline void setStaticF_FinalBlendParameters(int32_t  value) ;

static inline void setStaticF_FogColor(int32_t  value) ;

static inline void setStaticF_FogParams(int32_t  value) ;

static inline void setStaticF_From(int32_t  value) ;

static inline void setStaticF_Gain(int32_t  value) ;

static inline void setStaticF_GrainNoiseParameters(int32_t  value) ;

static inline void setStaticF_GrainTex(int32_t  value) ;

static inline void setStaticF_Grain_Params1(int32_t  value) ;

static inline void setStaticF_Grain_Params2(int32_t  value) ;

static inline void setStaticF_HalfResFinalCopy(int32_t  value) ;

static inline void setStaticF_HistogramBuffer(int32_t  value) ;

static inline void setStaticF_History(int32_t  value) ;

static inline void setStaticF_HistoryTex(int32_t  value) ;

static inline void setStaticF_HueSatCon(int32_t  value) ;

static inline void setStaticF_Interp(int32_t  value) ;

static inline void setStaticF_InvGamma(int32_t  value) ;

static inline void setStaticF_InverseViewMatrix(int32_t  value) ;

static inline void setStaticF_Jitter(int32_t  value) ;

static inline void setStaticF_LensCoeff(int32_t  value) ;

static inline void setStaticF_Lift(int32_t  value) ;

static inline void setStaticF_LinearDepth(int32_t  value) ;

static inline void setStaticF_LoopCount(int32_t  value) ;

static inline void setStaticF_LowDepth1(int32_t  value) ;

static inline void setStaticF_LowDepth2(int32_t  value) ;

static inline void setStaticF_LowDepth3(int32_t  value) ;

static inline void setStaticF_LowDepth4(int32_t  value) ;

static inline void setStaticF_LumaInAlpha(int32_t  value) ;

static inline void setStaticF_Lut2D(int32_t  value) ;

static inline void setStaticF_Lut2D_Params(int32_t  value) ;

static inline void setStaticF_Lut3D(int32_t  value) ;

static inline void setStaticF_Lut3D_Params(int32_t  value) ;

static inline void setStaticF_MSVOcclusionTexture(int32_t  value) ;

static inline void setStaticF_MainTex(int32_t  value) ;

static inline void setStaticF_MaxBlurRadius(int32_t  value) ;

static inline void setStaticF_MaxCoC(int32_t  value) ;

static inline void setStaticF_MidSegmentA(int32_t  value) ;

static inline void setStaticF_MidSegmentB(int32_t  value) ;

static inline void setStaticF_NeighborMaxTex(int32_t  value) ;

static inline void setStaticF_Noise(int32_t  value) ;

static inline void setStaticF_Occlusion1(int32_t  value) ;

static inline void setStaticF_Occlusion2(int32_t  value) ;

static inline void setStaticF_Occlusion3(int32_t  value) ;

static inline void setStaticF_Occlusion4(int32_t  value) ;

static inline void setStaticF_OcclusionTexture1(int32_t  value) ;

static inline void setStaticF_OcclusionTexture2(int32_t  value) ;

static inline void setStaticF_Params(int32_t  value) ;

static inline void setStaticF_Params2(int32_t  value) ;

static inline void setStaticF_Phase(int32_t  value) ;

static inline void setStaticF_PosScaleOffset(int32_t  value) ;

static inline void setStaticF_PostExposure(int32_t  value) ;

static inline void setStaticF_RcpAspect(int32_t  value) ;

static inline void setStaticF_RcpMaxBlurRadius(int32_t  value) ;

static inline void setStaticF_RcpMaxCoC(int32_t  value) ;

static inline void setStaticF_RenderViewportScaleFactor(int32_t  value) ;

static inline void setStaticF_Resolve(int32_t  value) ;

static inline void setStaticF_SAOcclusionTexture(int32_t  value) ;

static inline void setStaticF_SMAA_Flip(int32_t  value) ;

static inline void setStaticF_SMAA_Flop(int32_t  value) ;

static inline void setStaticF_SSRResolveTemp(int32_t  value) ;

static inline void setStaticF_SampleScale(int32_t  value) ;

static inline void setStaticF_ScaleOffsetRes(int32_t  value) ;

static inline void setStaticF_ScreenSpaceProjectionMatrix(int32_t  value) ;

static inline void setStaticF_Sharpness(int32_t  value) ;

static inline void setStaticF_ShoSegmentA(int32_t  value) ;

static inline void setStaticF_ShoSegmentB(int32_t  value) ;

static inline void setStaticF_TaaParams(int32_t  value) ;

static inline void setStaticF_TargetColor(int32_t  value) ;

static inline void setStaticF_Test(int32_t  value) ;

static inline void setStaticF_Threshold(int32_t  value) ;

static inline void setStaticF_Tile2RT(int32_t  value) ;

static inline void setStaticF_Tile4RT(int32_t  value) ;

static inline void setStaticF_Tile8RT(int32_t  value) ;

static inline void setStaticF_TileMaxLoop(int32_t  value) ;

static inline void setStaticF_TileMaxOffs(int32_t  value) ;

static inline void setStaticF_TileVRT(int32_t  value) ;

static inline void setStaticF_TiledDepth1(int32_t  value) ;

static inline void setStaticF_TiledDepth2(int32_t  value) ;

static inline void setStaticF_TiledDepth3(int32_t  value) ;

static inline void setStaticF_TiledDepth4(int32_t  value) ;

static inline void setStaticF_To(int32_t  value) ;

static inline void setStaticF_ToeSegmentA(int32_t  value) ;

static inline void setStaticF_ToeSegmentB(int32_t  value) ;

static inline void setStaticF_UVScaleOffset(int32_t  value) ;

static inline void setStaticF_UVTransform(int32_t  value) ;

static inline void setStaticF_UserLut2D_Params(int32_t  value) ;

static inline void setStaticF_VectorscopeBuffer(int32_t  value) ;

static inline void setStaticF_VelocityScale(int32_t  value) ;

static inline void setStaticF_VelocityTex(int32_t  value) ;

static inline void setStaticF_ViewMatrix(int32_t  value) ;

static inline void setStaticF_Vignette_Center(int32_t  value) ;

static inline void setStaticF_Vignette_Color(int32_t  value) ;

static inline void setStaticF_Vignette_Mask(int32_t  value) ;

static inline void setStaticF_Vignette_Mode(int32_t  value) ;

static inline void setStaticF_Vignette_Opacity(int32_t  value) ;

static inline void setStaticF_Vignette_Settings(int32_t  value) ;

static inline void setStaticF_WaveformBuffer(int32_t  value) ;

static inline void setStaticF_WaveformSource(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderIDs(ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderIDs(ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18664};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing

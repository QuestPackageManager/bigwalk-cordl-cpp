#pragma once
// IWYU pragma private; include "GlobalNamespace/SettingsWardrobe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsWardrobe)
namespace GlobalNamespace {
class DeviceHanger;
}
namespace GlobalNamespace {
class ISettingsHanger;
}
namespace GlobalNamespace {
class ResolutionHanger;
}
namespace GlobalNamespace {
class SettingsHanger;
}
namespace GlobalNamespace {
struct SettingsType;
}
namespace GlobalNamespace {
class SettingsWardrobe___c__DisplayClass26_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SettingsWardrobe;
}
namespace GlobalNamespace {
class SettingsWardrobe___c__DisplayClass26_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SettingsWardrobe*);
MARK_REF_T(::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsWardrobe*, "", "SettingsWardrobe");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0*, "", "SettingsWardrobe/<>c__DisplayClass26_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SettingsWardrobe/<>c__DisplayClass26_0
class CORDL_TYPE SettingsWardrobe___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field normalizedVolume, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalizedVolume, put=__cordl_internal_set_normalizedVolume)) float_t  normalizedVolume;

static inline ::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0* New_ctor() ;

/// @brief Method <ApplyVolume>b__0, addr 0x18039f800, size 0x60, virtual false, abstract: false, final false
inline void _ApplyVolume_b__0() ;

constexpr float_t const& __cordl_internal_get_normalizedVolume() const;

constexpr float_t& __cordl_internal_get_normalizedVolume() ;

constexpr void __cordl_internal_set_normalizedVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsWardrobe___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsWardrobe___c__DisplayClass26_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsWardrobe___c__DisplayClass26_0(SettingsWardrobe___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsWardrobe___c__DisplayClass26_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsWardrobe___c__DisplayClass26_0(SettingsWardrobe___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5612};

/// @brief Field normalizedVolume, offset: 0x10, size: 0x4, def value: None
 float_t  ___normalizedVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0, ___normalizedVolume) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SettingsWardrobe
class CORDL_TYPE SettingsWardrobe : public ::System::Object {
public:
// Declarations
using __c__DisplayClass26_0 = ::GlobalNamespace::SettingsWardrobe___c__DisplayClass26_0;

/// @brief Field crosshairHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_crosshairHanger, put=setStaticF_crosshairHanger)) ::GlobalNamespace::SettingsHanger*  crosshairHanger;

/// @brief Field crossplayHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_crossplayHanger, put=setStaticF_crossplayHanger)) ::GlobalNamespace::SettingsHanger*  crossplayHanger;

/// @brief Field dummyPlayerCountHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dummyPlayerCountHanger, put=setStaticF_dummyPlayerCountHanger)) ::GlobalNamespace::SettingsHanger*  dummyPlayerCountHanger;

/// @brief Field dummySkipAidHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dummySkipAidHanger, put=setStaticF_dummySkipAidHanger)) ::GlobalNamespace::SettingsHanger*  dummySkipAidHanger;

/// @brief Field fovHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_fovHanger, put=setStaticF_fovHanger)) ::GlobalNamespace::SettingsHanger*  fovHanger;

/// @brief Field hangers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_hangers, put=__cordl_internal_set_hangers)) ::System::Collections::Generic::List_1<::GlobalNamespace::ISettingsHanger*>*  hangers;

/// @brief Field hudHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_hudHanger, put=setStaticF_hudHanger)) ::GlobalNamespace::SettingsHanger*  hudHanger;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::GlobalNamespace::SettingsWardrobe*  instance;

/// @brief Field invertLookHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_invertLookHanger, put=setStaticF_invertLookHanger)) ::GlobalNamespace::SettingsHanger*  invertLookHanger;

/// @brief Field languageHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_languageHanger, put=setStaticF_languageHanger)) ::GlobalNamespace::SettingsHanger*  languageHanger;

/// @brief Field lookSpeedHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lookSpeedHanger, put=setStaticF_lookSpeedHanger)) ::GlobalNamespace::SettingsHanger*  lookSpeedHanger;

/// @brief Field micSensitivityHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_micSensitivityHanger, put=setStaticF_micSensitivityHanger)) ::GlobalNamespace::SettingsHanger*  micSensitivityHanger;

/// @brief Field microphoneDeviceHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_microphoneDeviceHanger, put=setStaticF_microphoneDeviceHanger)) ::GlobalNamespace::DeviceHanger*  microphoneDeviceHanger;

/// @brief Field motionOverlayHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_motionOverlayHanger, put=setStaticF_motionOverlayHanger)) ::GlobalNamespace::SettingsHanger*  motionOverlayHanger;

/// @brief Field noiseSuppressionHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_noiseSuppressionHanger, put=setStaticF_noiseSuppressionHanger)) ::GlobalNamespace::SettingsHanger*  noiseSuppressionHanger;

/// @brief Field pushToTalkHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pushToTalkHanger, put=setStaticF_pushToTalkHanger)) ::GlobalNamespace::SettingsHanger*  pushToTalkHanger;

/// @brief Field renderScaleHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_renderScaleHanger, put=setStaticF_renderScaleHanger)) ::GlobalNamespace::SettingsHanger*  renderScaleHanger;

/// @brief Field resolutionHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_resolutionHanger, put=setStaticF_resolutionHanger)) ::GlobalNamespace::ResolutionHanger*  resolutionHanger;

/// @brief Field toggleArmsHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_toggleArmsHanger, put=setStaticF_toggleArmsHanger)) ::GlobalNamespace::SettingsHanger*  toggleArmsHanger;

/// @brief Field toggleCrouchHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_toggleCrouchHanger, put=setStaticF_toggleCrouchHanger)) ::GlobalNamespace::SettingsHanger*  toggleCrouchHanger;

/// @brief Field vsyncHanger, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_vsyncHanger, put=setStaticF_vsyncHanger)) ::GlobalNamespace::SettingsHanger*  vsyncHanger;

/// @brief Method ApplyCrossPlay, addr 0x1803999d0, size 0x50, virtual false, abstract: false, final false
inline void ApplyCrossPlay(int32_t  value) ;

/// @brief Method ApplyCrosshair, addr 0x180399a20, size 0x10, virtual false, abstract: false, final false
inline void ApplyCrosshair(int32_t  value) ;

/// @brief Method ApplyDummyPlayerCount, addr 0x180399a30, size 0x80, virtual false, abstract: false, final false
inline void ApplyDummyPlayerCount(int32_t  value) ;

/// @brief Method ApplyDummySkipAid, addr 0x180399ab0, size 0xb0, virtual false, abstract: false, final false
inline void ApplyDummySkipAid(int32_t  value) ;

/// @brief Method ApplyFov, addr 0x180399b60, size 0x20, virtual false, abstract: false, final false
inline void ApplyFov(int32_t  value) ;

/// @brief Method ApplyFullscreen, addr 0x180399b80, size 0x20, virtual false, abstract: false, final false
inline void ApplyFullscreen(int32_t  value) ;

/// @brief Method ApplyHud, addr 0x180399ba0, size 0x10, virtual false, abstract: false, final false
inline void ApplyHud(int32_t  value) ;

/// @brief Method ApplyLanguage, addr 0x180399bb0, size 0x60, virtual false, abstract: false, final false
inline void ApplyLanguage(int32_t  value) ;

/// @brief Method ApplyMicSensitivity, addr 0x180399c10, size 0x30, virtual false, abstract: false, final false
inline void ApplyMicSensitivity(int32_t  value) ;

/// @brief Method ApplyMotionOverlay, addr 0x180399c40, size 0x10, virtual false, abstract: false, final false
inline void ApplyMotionOverlay(int32_t  value) ;

/// @brief Method ApplyNoiseSuppression, addr 0x180399c50, size 0x30, virtual false, abstract: false, final false
inline void ApplyNoiseSuppression(int32_t  value) ;

/// @brief Method ApplyPushToTalk, addr 0x180399c80, size 0x20, virtual false, abstract: false, final false
inline void ApplyPushToTalk(int32_t  value) ;

/// @brief Method ApplyQuality, addr 0x180399ca0, size 0x1c0, virtual false, abstract: false, final false
inline void ApplyQuality(int32_t  value) ;

/// @brief Method ApplyRenderScale, addr 0x180399e60, size 0xb0, virtual false, abstract: false, final false
inline void ApplyRenderScale(int32_t  value) ;

/// @brief Method ApplyVSync, addr 0x180399f10, size 0x10, virtual false, abstract: false, final false
inline void ApplyVSync(int32_t  value) ;

/// @brief Method ApplyVolume, addr 0x180399f20, size 0xf0, virtual false, abstract: false, final false
inline void ApplyVolume(int32_t  value) ;

/// @brief Method GetHangerBySettingsType, addr 0x18039a010, size 0xc0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ISettingsHanger* GetHangerBySettingsType(::GlobalNamespace::SettingsType  settingsType) ;

/// @brief Method Initialize, addr 0x18039a0d0, size 0x29f0, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::SettingsWardrobe* New_ctor() ;

/// @brief Method SaveAll, addr 0x18039cac0, size 0x130, virtual false, abstract: false, final false
static inline void SaveAll() ;

/// @brief Method SetRenderScale, addr 0x18039cbf0, size 0xb0, virtual false, abstract: false, final false
static inline void SetRenderScale(float_t  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ISettingsHanger*>* const& __cordl_internal_get_hangers() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ISettingsHanger*>*& __cordl_internal_get_hangers() ;

constexpr void __cordl_internal_set_hangers(::System::Collections::Generic::List_1<::GlobalNamespace::ISettingsHanger*>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_crosshairHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_crossplayHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_dummyPlayerCountHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_dummySkipAidHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_fovHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_hudHanger() ;

static inline ::GlobalNamespace::SettingsWardrobe* getStaticF_instance() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_invertLookHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_languageHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_lookSpeedHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_micSensitivityHanger() ;

static inline ::GlobalNamespace::DeviceHanger* getStaticF_microphoneDeviceHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_motionOverlayHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_noiseSuppressionHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_pushToTalkHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_renderScaleHanger() ;

static inline ::GlobalNamespace::ResolutionHanger* getStaticF_resolutionHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_toggleArmsHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_toggleCrouchHanger() ;

static inline ::GlobalNamespace::SettingsHanger* getStaticF_vsyncHanger() ;

static inline void setStaticF_crosshairHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_crossplayHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_dummyPlayerCountHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_dummySkipAidHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_fovHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_hudHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_instance(::GlobalNamespace::SettingsWardrobe*  value) ;

static inline void setStaticF_invertLookHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_languageHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_lookSpeedHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_micSensitivityHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_microphoneDeviceHanger(::GlobalNamespace::DeviceHanger*  value) ;

static inline void setStaticF_motionOverlayHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_noiseSuppressionHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_pushToTalkHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_renderScaleHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_resolutionHanger(::GlobalNamespace::ResolutionHanger*  value) ;

static inline void setStaticF_toggleArmsHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_toggleCrouchHanger(::GlobalNamespace::SettingsHanger*  value) ;

static inline void setStaticF_vsyncHanger(::GlobalNamespace::SettingsHanger*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SettingsWardrobe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SettingsWardrobe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SettingsWardrobe(SettingsWardrobe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SettingsWardrobe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SettingsWardrobe(SettingsWardrobe const& ) = delete;

/// @brief Field CROSSPLAY_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  CROSSPLAY_KEY{u"settings_crossplay"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5613};

/// @brief Field hangers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::ISettingsHanger*>*  ___hangers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsWardrobe, ___hangers) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingsWardrobe) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

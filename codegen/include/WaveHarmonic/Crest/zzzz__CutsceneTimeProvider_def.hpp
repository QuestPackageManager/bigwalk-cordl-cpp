#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CutsceneTimeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__TimeProvider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CutsceneTimeProvider)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace WaveHarmonic::Crest {
class DefaultTimeProvider;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class CutsceneTimeProvider;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::CutsceneTimeProvider*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::CutsceneTimeProvider*, "WaveHarmonic.Crest", "CutsceneTimeProvider");
// Dependencies WaveHarmonic.Crest.TimeProvider
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.CutsceneTimeProvider
class CORDL_TYPE CutsceneTimeProvider : public ::WaveHarmonic::Crest::TimeProvider {
public:
// Declarations
 __declspec(property(get=get_AssignToWaterComponentOnEnable, put=set_AssignToWaterComponentOnEnable)) bool  AssignToWaterComponentOnEnable;

 __declspec(property(get=get_Delta)) float_t  Delta;

 __declspec(property(get=get_OnEnableMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnEnableMethod;

 __declspec(property(get=get_PlayableDirector, put=set_PlayableDirector)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  PlayableDirector;

 __declspec(property(get=get_RestorePreviousTimeProviderOnDisable, put=set_RestorePreviousTimeProviderOnDisable)) bool  RestorePreviousTimeProviderOnDisable;

 __declspec(property(get=get_Time)) float_t  Time;

 __declspec(property(get=get_TimeOffset, put=set_TimeOffset)) float_t  TimeOffset;

/// @brief Field _AssignToWaterComponentOnEnable, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__AssignToWaterComponentOnEnable, put=__cordl_internal_set__AssignToWaterComponentOnEnable)) bool  _AssignToWaterComponentOnEnable;

/// @brief Field _Attached, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__Attached, put=__cordl_internal_set__Attached)) bool  _Attached;

/// @brief Field _FallbackTimeProvider, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__FallbackTimeProvider, put=__cordl_internal_set__FallbackTimeProvider)) ::WaveHarmonic::Crest::DefaultTimeProvider*  _FallbackTimeProvider;

/// @brief Field _PlayableDirector, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__PlayableDirector, put=__cordl_internal_set__PlayableDirector)) ::UnityW<::UnityEngine::Playables::PlayableDirector>  _PlayableDirector;

/// @brief Field _RestorePreviousTimeProviderOnDisable, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__RestorePreviousTimeProviderOnDisable, put=__cordl_internal_set__RestorePreviousTimeProviderOnDisable)) bool  _RestorePreviousTimeProviderOnDisable;

/// @brief Field _TimeOffset, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeOffset, put=__cordl_internal_set__TimeOffset)) float_t  _TimeOffset;

/// @brief Method Attach, addr 0x18258ba20, size 0x70, virtual false, abstract: false, final false
inline void Attach(::WaveHarmonic::Crest::WaterRenderer*  water) ;

static inline ::WaveHarmonic::Crest::CutsceneTimeProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0x18258ba90, size 0xd0, virtual true, abstract: false, final false
inline void OnDisable() ;

constexpr bool const& __cordl_internal_get__AssignToWaterComponentOnEnable() const;

constexpr bool& __cordl_internal_get__AssignToWaterComponentOnEnable() ;

constexpr bool const& __cordl_internal_get__Attached() const;

constexpr bool& __cordl_internal_get__Attached() ;

constexpr ::WaveHarmonic::Crest::DefaultTimeProvider* const& __cordl_internal_get__FallbackTimeProvider() const;

constexpr ::WaveHarmonic::Crest::DefaultTimeProvider*& __cordl_internal_get__FallbackTimeProvider() ;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& __cordl_internal_get__PlayableDirector() const;

constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& __cordl_internal_get__PlayableDirector() ;

constexpr bool const& __cordl_internal_get__RestorePreviousTimeProviderOnDisable() const;

constexpr bool& __cordl_internal_get__RestorePreviousTimeProviderOnDisable() ;

constexpr float_t const& __cordl_internal_get__TimeOffset() const;

constexpr float_t& __cordl_internal_get__TimeOffset() ;

constexpr void __cordl_internal_set__AssignToWaterComponentOnEnable(bool  value) ;

constexpr void __cordl_internal_set__Attached(bool  value) ;

constexpr void __cordl_internal_set__FallbackTimeProvider(::WaveHarmonic::Crest::DefaultTimeProvider*  value) ;

constexpr void __cordl_internal_set__PlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector>  value) ;

constexpr void __cordl_internal_set__RestorePreviousTimeProviderOnDisable(bool  value) ;

constexpr void __cordl_internal_set__TimeOffset(float_t  value) ;

/// @brief Method .ctor, addr 0x18258bb60, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AssignToWaterComponentOnEnable, addr 0x1802e09d0, size 0x10, virtual false, abstract: false, final false
inline bool get_AssignToWaterComponentOnEnable() ;

/// @brief Method get_Delta, addr 0x182127910, size 0x10, virtual true, abstract: false, final false
inline float_t get_Delta() ;

/// @brief Method get_OnEnableMethod, addr 0x18258bba0, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnEnableMethod() ;

/// @brief Method get_PlayableDirector, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Playables::PlayableDirector> get_PlayableDirector() ;

/// @brief Method get_RestorePreviousTimeProviderOnDisable, addr 0x1802e09e0, size 0x10, virtual false, abstract: false, final false
inline bool get_RestorePreviousTimeProviderOnDisable() ;

/// @brief Method get_Time, addr 0x18258bbe0, size 0x90, virtual true, abstract: false, final false
inline float_t get_Time() ;

/// @brief Method get_TimeOffset, addr 0x18046faf0, size 0x10, virtual false, abstract: false, final false
inline float_t get_TimeOffset() ;

/// @brief Method set_AssignToWaterComponentOnEnable, addr 0x18051e980, size 0x10, virtual false, abstract: false, final false
inline void set_AssignToWaterComponentOnEnable(bool  value) ;

/// @brief Method set_PlayableDirector, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_PlayableDirector(::UnityEngine::Playables::PlayableDirector*  value) ;

/// @brief Method set_RestorePreviousTimeProviderOnDisable, addr 0x18051e960, size 0x10, virtual false, abstract: false, final false
inline void set_RestorePreviousTimeProviderOnDisable(bool  value) ;

/// @brief Method set_TimeOffset, addr 0x18046fb40, size 0x10, virtual false, abstract: false, final false
inline void set_TimeOffset(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CutsceneTimeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CutsceneTimeProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CutsceneTimeProvider(CutsceneTimeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CutsceneTimeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CutsceneTimeProvider(CutsceneTimeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16642};

/// @brief Field _PlayableDirector, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Playables::PlayableDirector>  ____PlayableDirector;

/// @brief Field _TimeOffset, offset: 0x58, size: 0x4, def value: None
 float_t  ____TimeOffset;

/// @brief Field _AssignToWaterComponentOnEnable, offset: 0x5c, size: 0x1, def value: None
 bool  ____AssignToWaterComponentOnEnable;

/// @brief Field _RestorePreviousTimeProviderOnDisable, offset: 0x5d, size: 0x1, def value: None
 bool  ____RestorePreviousTimeProviderOnDisable;

/// @brief Field _FallbackTimeProvider, offset: 0x60, size: 0x8, def value: None
 ::WaveHarmonic::Crest::DefaultTimeProvider*  ____FallbackTimeProvider;

/// @brief Field _Attached, offset: 0x68, size: 0x1, def value: None
 bool  ____Attached;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::CutsceneTimeProvider, ____PlayableDirector) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CutsceneTimeProvider, ____TimeOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CutsceneTimeProvider, ____AssignToWaterComponentOnEnable) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CutsceneTimeProvider, ____RestorePreviousTimeProviderOnDisable) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CutsceneTimeProvider, ____FallbackTimeProvider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CutsceneTimeProvider, ____Attached) == 0x68, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::CutsceneTimeProvider) == 0x70, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CustomTimeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__TimeProvider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomTimeProvider)
namespace System {
template<typename T>
class Action_1;
}
namespace WaveHarmonic::Crest {
class DefaultTimeProvider;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class CustomTimeProvider;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::CustomTimeProvider*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::CustomTimeProvider*, "WaveHarmonic.Crest", "CustomTimeProvider");
// Dependencies WaveHarmonic.Crest.TimeProvider
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.CustomTimeProvider
class CORDL_TYPE CustomTimeProvider : public ::WaveHarmonic::Crest::TimeProvider {
public:
// Declarations
 __declspec(property(get=get_Delta)) float_t  Delta;

 __declspec(property(get=get_DeltaTime, put=set_DeltaTime)) float_t  DeltaTime;

 __declspec(property(get=get_OnUpdateMethod)) ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*  OnUpdateMethod;

 __declspec(property(get=get_OverrideDeltaTime, put=set_OverrideDeltaTime)) bool  OverrideDeltaTime;

 __declspec(property(get=get_OverrideTime, put=set_OverrideTime)) bool  OverrideTime;

 __declspec(property(get=get_Paused, put=set_Paused)) bool  Paused;

 __declspec(property(get=get_Time)) float_t  Time;

 __declspec(property(get=get_TimeOverride, put=set_TimeOverride)) float_t  TimeOverride;

/// @brief Field _DefaultTimeProvider, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultTimeProvider, put=__cordl_internal_set__DefaultTimeProvider)) ::WaveHarmonic::Crest::DefaultTimeProvider*  _DefaultTimeProvider;

/// @brief Field _DeltaTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__DeltaTime, put=__cordl_internal_set__DeltaTime)) float_t  _DeltaTime;

/// @brief Field _FirstUpdate, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get__FirstUpdate, put=__cordl_internal_set__FirstUpdate)) bool  _FirstUpdate;

/// @brief Field _OverrideDeltaTime, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideDeltaTime, put=__cordl_internal_set__OverrideDeltaTime)) bool  _OverrideDeltaTime;

/// @brief Field _OverrideTime, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideTime, put=__cordl_internal_set__OverrideTime)) bool  _OverrideTime;

/// @brief Field _Paused, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__Paused, put=__cordl_internal_set__Paused)) bool  _Paused;

/// @brief Field _Time, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__Time, put=__cordl_internal_set__Time)) float_t  _Time;

/// @brief Field _TimeInternal, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeInternal, put=__cordl_internal_set__TimeInternal)) float_t  _TimeInternal;

/// @brief Method Initialize, addr 0x18258b860, size 0x10, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::WaveHarmonic::Crest::CustomTimeProvider* New_ctor() ;

/// @brief Method OnUpdate, addr 0x18258b870, size 0x70, virtual false, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

constexpr ::WaveHarmonic::Crest::DefaultTimeProvider* const& __cordl_internal_get__DefaultTimeProvider() const;

constexpr ::WaveHarmonic::Crest::DefaultTimeProvider*& __cordl_internal_get__DefaultTimeProvider() ;

constexpr float_t const& __cordl_internal_get__DeltaTime() const;

constexpr float_t& __cordl_internal_get__DeltaTime() ;

constexpr bool const& __cordl_internal_get__FirstUpdate() const;

constexpr bool& __cordl_internal_get__FirstUpdate() ;

constexpr bool const& __cordl_internal_get__OverrideDeltaTime() const;

constexpr bool& __cordl_internal_get__OverrideDeltaTime() ;

constexpr bool const& __cordl_internal_get__OverrideTime() const;

constexpr bool& __cordl_internal_get__OverrideTime() ;

constexpr bool const& __cordl_internal_get__Paused() const;

constexpr bool& __cordl_internal_get__Paused() ;

constexpr float_t const& __cordl_internal_get__Time() const;

constexpr float_t& __cordl_internal_get__Time() ;

constexpr float_t const& __cordl_internal_get__TimeInternal() const;

constexpr float_t& __cordl_internal_get__TimeInternal() ;

constexpr void __cordl_internal_set__DefaultTimeProvider(::WaveHarmonic::Crest::DefaultTimeProvider*  value) ;

constexpr void __cordl_internal_set__DeltaTime(float_t  value) ;

constexpr void __cordl_internal_set__FirstUpdate(bool  value) ;

constexpr void __cordl_internal_set__OverrideDeltaTime(bool  value) ;

constexpr void __cordl_internal_set__OverrideTime(bool  value) ;

constexpr void __cordl_internal_set__Paused(bool  value) ;

constexpr void __cordl_internal_set__Time(float_t  value) ;

constexpr void __cordl_internal_set__TimeInternal(float_t  value) ;

/// @brief Method .ctor, addr 0x18258b8e0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Delta, addr 0x18258b920, size 0x60, virtual true, abstract: false, final false
inline float_t get_Delta() ;

/// @brief Method get_DeltaTime, addr 0x18046fb00, size 0x10, virtual false, abstract: false, final false
inline float_t get_DeltaTime() ;

/// @brief Method get_OnUpdateMethod, addr 0x18258b980, size 0x40, virtual true, abstract: false, final false
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* get_OnUpdateMethod() ;

/// @brief Method get_OverrideDeltaTime, addr 0x1803151e0, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideDeltaTime() ;

/// @brief Method get_OverrideTime, addr 0x18164bcd0, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideTime() ;

/// @brief Method get_Paused, addr 0x1802f8060, size 0x10, virtual false, abstract: false, final false
inline bool get_Paused() ;

/// @brief Method get_Time, addr 0x18258b9c0, size 0x50, virtual true, abstract: false, final false
inline float_t get_Time() ;

/// @brief Method get_TimeOverride, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_TimeOverride() ;

/// @brief Method set_DeltaTime, addr 0x18046fb50, size 0x10, virtual false, abstract: false, final false
inline void set_DeltaTime(float_t  value) ;

/// @brief Method set_OverrideDeltaTime, addr 0x1803de5b0, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideDeltaTime(bool  value) ;

/// @brief Method set_OverrideTime, addr 0x18258ba10, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideTime(bool  value) ;

/// @brief Method set_Paused, addr 0x1802f8090, size 0x10, virtual false, abstract: false, final false
inline void set_Paused(bool  value) ;

/// @brief Method set_TimeOverride, addr 0x1803dccc0, size 0x10, virtual false, abstract: false, final false
inline void set_TimeOverride(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomTimeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomTimeProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomTimeProvider(CustomTimeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomTimeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomTimeProvider(CustomTimeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16641};

/// @brief Field _Paused, offset: 0x50, size: 0x1, def value: None
 bool  ____Paused;

/// @brief Field _OverrideTime, offset: 0x51, size: 0x1, def value: None
 bool  ____OverrideTime;

/// @brief Field _Time, offset: 0x54, size: 0x4, def value: None
 float_t  ____Time;

/// @brief Field _OverrideDeltaTime, offset: 0x58, size: 0x1, def value: None
 bool  ____OverrideDeltaTime;

/// @brief Field _DeltaTime, offset: 0x5c, size: 0x4, def value: None
 float_t  ____DeltaTime;

/// @brief Field _DefaultTimeProvider, offset: 0x60, size: 0x8, def value: None
 ::WaveHarmonic::Crest::DefaultTimeProvider*  ____DefaultTimeProvider;

/// @brief Field _TimeInternal, offset: 0x68, size: 0x4, def value: None
 float_t  ____TimeInternal;

/// @brief Field _FirstUpdate, offset: 0x6c, size: 0x1, def value: None
 bool  ____FirstUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::CustomTimeProvider, ____Paused) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CustomTimeProvider, ____OverrideTime) == 0x51, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CustomTimeProvider, ____Time) == 0x54, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CustomTimeProvider, ____OverrideDeltaTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CustomTimeProvider, ____DeltaTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CustomTimeProvider, ____DefaultTimeProvider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CustomTimeProvider, ____TimeInternal) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::CustomTimeProvider, ____FirstUpdate) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::CustomTimeProvider) == 0x70, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

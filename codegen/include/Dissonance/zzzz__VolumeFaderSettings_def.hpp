#pragma once
// IWYU pragma private; include "Dissonance/VolumeFaderSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeFaderSettings)
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Dissonance {
class VolumeFaderSettings;
}
// Write type traits
MARK_REF_T(::Dissonance::VolumeFaderSettings*);
DEFINE_IL2CPP_CLASS(::Dissonance::VolumeFaderSettings*, "Dissonance", "VolumeFaderSettings");
// Dependencies System.Object
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.VolumeFaderSettings
class CORDL_TYPE VolumeFaderSettings : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FadeIn, put=set_FadeIn)) ::System::TimeSpan  FadeIn;

 __declspec(property(get=get_FadeOut, put=set_FadeOut)) ::System::TimeSpan  FadeOut;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

/// @brief Field _fadeInTicks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__fadeInTicks, put=__cordl_internal_set__fadeInTicks)) int64_t  _fadeInTicks;

/// @brief Field _fadeOutTicks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__fadeOutTicks, put=__cordl_internal_set__fadeOutTicks)) int64_t  _fadeOutTicks;

/// @brief Field _volume, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__volume, put=__cordl_internal_set__volume)) float_t  _volume;

static inline ::Dissonance::VolumeFaderSettings* New_ctor() ;

constexpr int64_t const& __cordl_internal_get__fadeInTicks() const;

constexpr int64_t& __cordl_internal_get__fadeInTicks() ;

constexpr int64_t const& __cordl_internal_get__fadeOutTicks() const;

constexpr int64_t& __cordl_internal_get__fadeOutTicks() ;

constexpr float_t const& __cordl_internal_get__volume() const;

constexpr float_t& __cordl_internal_get__volume() ;

constexpr void __cordl_internal_set__fadeInTicks(int64_t  value) ;

constexpr void __cordl_internal_set__fadeOutTicks(int64_t  value) ;

constexpr void __cordl_internal_set__volume(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FadeIn, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::TimeSpan get_FadeIn() ;

/// @brief Method get_FadeOut, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::TimeSpan get_FadeOut() ;

/// @brief Method get_Volume, addr 0x180346a80, size 0x10, virtual false, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Method set_FadeIn, addr 0x1803bda70, size 0x10, virtual false, abstract: false, final false
inline void set_FadeIn(::System::TimeSpan  value) ;

/// @brief Method set_FadeOut, addr 0x1804f6740, size 0x10, virtual false, abstract: false, final false
inline void set_FadeOut(::System::TimeSpan  value) ;

/// @brief Method set_Volume, addr 0x180346aa0, size 0x10, virtual false, abstract: false, final false
inline void set_Volume(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VolumeFaderSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VolumeFaderSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VolumeFaderSettings(VolumeFaderSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VolumeFaderSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VolumeFaderSettings(VolumeFaderSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16833};

/// @brief Field _volume, offset: 0x10, size: 0x4, def value: None
 float_t  ____volume;

/// @brief Field _fadeInTicks, offset: 0x18, size: 0x8, def value: None
 int64_t  ____fadeInTicks;

/// @brief Field _fadeOutTicks, offset: 0x20, size: 0x8, def value: None
 int64_t  ____fadeOutTicks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::VolumeFaderSettings, ____volume) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VolumeFaderSettings, ____fadeInTicks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Dissonance::VolumeFaderSettings, ____fadeOutTicks) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::VolumeFaderSettings) == 0x28, "Size mismatch!");

} // namespace end def Dissonance

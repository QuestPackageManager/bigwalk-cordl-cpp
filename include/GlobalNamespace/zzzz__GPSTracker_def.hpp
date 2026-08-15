#pragma once
// IWYU pragma private; include "GlobalNamespace/GPSTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GPSTracker)
namespace GlobalNamespace {
class AudioRandomContainer;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GPSTracker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GPSTracker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GPSTracker*, "", "GPSTracker");
// Dependencies TMPro.TMP_Text, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GPSTracker
class CORDL_TYPE GPSTracker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _lastX, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastX, put=__cordl_internal_set__lastX)) int32_t  _lastX;

/// @brief Field _lastZ, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastZ, put=__cordl_internal_set__lastZ)) int32_t  _lastZ;

/// @brief Field lastPosition, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field logVerbose, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field sound, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sound, put=__cordl_internal_set_sound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  sound;

/// @brief Field textFieldXs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textFieldXs, put=__cordl_internal_set_textFieldXs)) ::ArrayW<::UnityW<::TMPro::TMP_Text>>  textFieldXs;

/// @brief Field textFieldZs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textFieldZs, put=__cordl_internal_set_textFieldZs)) ::ArrayW<::UnityW<::TMPro::TMP_Text>>  textFieldZs;

/// @brief Method GetX, addr 0x1803fdd90, size 0x90, virtual false, abstract: false, final false
static inline int32_t GetX(::UnityEngine::Vector3  position) ;

/// @brief Method GetZ, addr 0x1803fde20, size 0xa0, virtual false, abstract: false, final false
static inline int32_t GetZ(::UnityEngine::Vector3  position) ;

static inline ::GlobalNamespace::GPSTracker* New_ctor() ;

/// @brief Method ToNorth, addr 0x1803fdec0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion ToNorth() ;

/// @brief Method Update, addr 0x1803fdef0, size 0x320, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get__lastX() const;

constexpr int32_t& __cordl_internal_get__lastX() ;

constexpr int32_t const& __cordl_internal_get__lastZ() const;

constexpr int32_t& __cordl_internal_get__lastZ() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get_sound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get_sound() ;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& __cordl_internal_get_textFieldXs() const;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& __cordl_internal_get_textFieldXs() ;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& __cordl_internal_get_textFieldZs() const;

constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& __cordl_internal_get_textFieldZs() ;

constexpr void __cordl_internal_set__lastX(int32_t  value) ;

constexpr void __cordl_internal_set__lastZ(int32_t  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_sound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set_textFieldXs(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value) ;

constexpr void __cordl_internal_set_textFieldZs(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPSTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPSTracker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPSTracker(GPSTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPSTracker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPSTracker(GPSTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5056};

/// @brief Field textFieldXs, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ___textFieldXs;

/// @brief Field textFieldZs, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::TMPro::TMP_Text>>  ___textFieldZs;

/// @brief Field sound, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ___sound;

/// @brief Field lastPosition, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field _lastX, offset: 0x44, size: 0x4, def value: None
 int32_t  ____lastX;

/// @brief Field _lastZ, offset: 0x48, size: 0x4, def value: None
 int32_t  ____lastZ;

/// @brief Field logVerbose, offset: 0x4c, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GPSTracker, ___textFieldXs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPSTracker, ___textFieldZs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPSTracker, ___sound) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPSTracker, ___lastPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPSTracker, ____lastX) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPSTracker, ____lastZ) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GPSTracker, ___logVerbose) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GPSTracker) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

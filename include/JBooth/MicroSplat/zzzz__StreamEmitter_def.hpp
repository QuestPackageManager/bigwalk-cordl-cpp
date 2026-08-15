#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/StreamEmitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamEmitter)
namespace JBooth::MicroSplat {
struct StreamEmitter_EmitterType;
}
namespace JBooth::MicroSplat {
class StreamManager;
}
// Forward declare root types
namespace JBooth::MicroSplat {
struct StreamEmitter_EmitterType;
}
namespace JBooth::MicroSplat {
class StreamEmitter;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroSplat::StreamEmitter_EmitterType);
MARK_REF_T(::JBooth::MicroSplat::StreamEmitter*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::StreamEmitter_EmitterType, "JBooth.MicroSplat", "StreamEmitter/EmitterType");
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::StreamEmitter*, "JBooth.MicroSplat", "StreamEmitter");
// Dependencies 
namespace JBooth::MicroSplat {
// Is value type: true
// CS Name: JBooth.MicroSplat.StreamEmitter/EmitterType
struct CORDL_TYPE StreamEmitter_EmitterType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StreamEmitter_EmitterType_Unwrapped
enum struct __StreamEmitter_EmitterType_Unwrapped : int32_t {
__E_Water = static_cast<int32_t>(0x0),
__E_Lava = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StreamEmitter_EmitterType_Unwrapped () const noexcept {
return static_cast<__StreamEmitter_EmitterType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StreamEmitter_EmitterType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StreamEmitter_EmitterType(int32_t  value__) noexcept;

/// @brief Field Lava value: I32(1)
static ::JBooth::MicroSplat::StreamEmitter_EmitterType const Lava;

/// @brief Field Water value: I32(0)
static ::JBooth::MicroSplat::StreamEmitter_EmitterType const Water;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20834};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::StreamEmitter_EmitterType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::StreamEmitter_EmitterType) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
// Dependencies JBooth.MicroSplat.StreamEmitter::EmitterType, UnityEngine.MonoBehaviour
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.StreamEmitter
class CORDL_TYPE StreamEmitter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EmitterType = ::JBooth::MicroSplat::StreamEmitter_EmitterType;

/// @brief Field emitterType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_emitterType, put=__cordl_internal_set_emitterType)) ::JBooth::MicroSplat::StreamEmitter_EmitterType  emitterType;

/// @brief Field streamMgr, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_streamMgr, put=__cordl_internal_set_streamMgr)) ::UnityW<::JBooth::MicroSplat::StreamManager>  streamMgr;

/// @brief Field strength, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_strength, put=__cordl_internal_set_strength)) float_t  strength;

static inline ::JBooth::MicroSplat::StreamEmitter* New_ctor() ;

/// @brief Method OnDisable, addr 0x1814032a0, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x181403300, size 0xc0, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x1814033c0, size 0x240, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::JBooth::MicroSplat::StreamEmitter_EmitterType const& __cordl_internal_get_emitterType() const;

constexpr ::JBooth::MicroSplat::StreamEmitter_EmitterType& __cordl_internal_get_emitterType() ;

constexpr ::UnityW<::JBooth::MicroSplat::StreamManager> const& __cordl_internal_get_streamMgr() const;

constexpr ::UnityW<::JBooth::MicroSplat::StreamManager>& __cordl_internal_get_streamMgr() ;

constexpr float_t const& __cordl_internal_get_strength() const;

constexpr float_t& __cordl_internal_get_strength() ;

constexpr void __cordl_internal_set_emitterType(::JBooth::MicroSplat::StreamEmitter_EmitterType  value) ;

constexpr void __cordl_internal_set_streamMgr(::UnityW<::JBooth::MicroSplat::StreamManager>  value) ;

constexpr void __cordl_internal_set_strength(float_t  value) ;

/// @brief Method .ctor, addr 0x1802fd040, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamEmitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamEmitter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamEmitter(StreamEmitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamEmitter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamEmitter(StreamEmitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20835};

/// @brief Field emitterType, offset: 0x20, size: 0x4, def value: None
 ::JBooth::MicroSplat::StreamEmitter_EmitterType  ___emitterType;

/// @brief Field strength, offset: 0x24, size: 0x4, def value: None
 float_t  ___strength;

/// @brief Field streamMgr, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroSplat::StreamManager>  ___streamMgr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::StreamEmitter, ___emitterType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamEmitter, ___strength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamEmitter, ___streamMgr) == 0x28, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::StreamEmitter) == 0x30, "Size mismatch!");

} // namespace end def JBooth::MicroSplat

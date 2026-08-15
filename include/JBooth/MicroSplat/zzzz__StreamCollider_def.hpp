#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/StreamCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamCollider)
namespace JBooth::MicroSplat {
struct StreamCollider_ColliderType;
}
namespace JBooth::MicroSplat {
class StreamManager;
}
// Forward declare root types
namespace JBooth::MicroSplat {
struct StreamCollider_ColliderType;
}
namespace JBooth::MicroSplat {
class StreamCollider;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroSplat::StreamCollider_ColliderType);
MARK_REF_T(::JBooth::MicroSplat::StreamCollider*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::StreamCollider_ColliderType, "JBooth.MicroSplat", "StreamCollider/ColliderType");
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::StreamCollider*, "JBooth.MicroSplat", "StreamCollider");
// Dependencies 
namespace JBooth::MicroSplat {
// Is value type: true
// CS Name: JBooth.MicroSplat.StreamCollider/ColliderType
struct CORDL_TYPE StreamCollider_ColliderType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StreamCollider_ColliderType_Unwrapped
enum struct __StreamCollider_ColliderType_Unwrapped : int32_t {
__E_Water = static_cast<int32_t>(0x0),
__E_Lava = static_cast<int32_t>(0x1),
__E_Both = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StreamCollider_ColliderType_Unwrapped () const noexcept {
return static_cast<__StreamCollider_ColliderType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StreamCollider_ColliderType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StreamCollider_ColliderType(int32_t  value__) noexcept;

/// @brief Field Both value: I32(2)
static ::JBooth::MicroSplat::StreamCollider_ColliderType const Both;

/// @brief Field Lava value: I32(1)
static ::JBooth::MicroSplat::StreamCollider_ColliderType const Lava;

/// @brief Field Water value: I32(0)
static ::JBooth::MicroSplat::StreamCollider_ColliderType const Water;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20832};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::StreamCollider_ColliderType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::StreamCollider_ColliderType) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
// Dependencies JBooth.MicroSplat.StreamCollider::ColliderType, UnityEngine.MonoBehaviour
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.StreamCollider
class CORDL_TYPE StreamCollider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ColliderType = ::JBooth::MicroSplat::StreamCollider_ColliderType;

/// @brief Field colliderType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_colliderType, put=__cordl_internal_set_colliderType)) ::JBooth::MicroSplat::StreamCollider_ColliderType  colliderType;

/// @brief Field streamMgr, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_streamMgr, put=__cordl_internal_set_streamMgr)) ::UnityW<::JBooth::MicroSplat::StreamManager>  streamMgr;

static inline ::JBooth::MicroSplat::StreamCollider* New_ctor() ;

/// @brief Method OnDisable, addr 0x181402f40, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x181402fa0, size 0xb0, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnEnable, addr 0x181403050, size 0x240, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::JBooth::MicroSplat::StreamCollider_ColliderType const& __cordl_internal_get_colliderType() const;

constexpr ::JBooth::MicroSplat::StreamCollider_ColliderType& __cordl_internal_get_colliderType() ;

constexpr ::UnityW<::JBooth::MicroSplat::StreamManager> const& __cordl_internal_get_streamMgr() const;

constexpr ::UnityW<::JBooth::MicroSplat::StreamManager>& __cordl_internal_get_streamMgr() ;

constexpr void __cordl_internal_set_colliderType(::JBooth::MicroSplat::StreamCollider_ColliderType  value) ;

constexpr void __cordl_internal_set_streamMgr(::UnityW<::JBooth::MicroSplat::StreamManager>  value) ;

/// @brief Method .ctor, addr 0x181403290, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamCollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamCollider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamCollider(StreamCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamCollider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamCollider(StreamCollider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20833};

/// @brief Field streamMgr, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroSplat::StreamManager>  ___streamMgr;

/// @brief Field colliderType, offset: 0x28, size: 0x4, def value: None
 ::JBooth::MicroSplat::StreamCollider_ColliderType  ___colliderType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::StreamCollider, ___streamMgr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamCollider, ___colliderType) == 0x28, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::StreamCollider) == 0x30, "Size mismatch!");

} // namespace end def JBooth::MicroSplat

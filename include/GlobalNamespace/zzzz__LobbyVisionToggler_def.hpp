#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyVisionToggler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyVisionToggler)
namespace GlobalNamespace {
struct LobbyVisionToggler_LobbyVisionType;
}
namespace GlobalNamespace {
class PegTileRenderer;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct LobbyVisionToggler_LobbyVisionType;
}
namespace GlobalNamespace {
class LobbyVisionToggler;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LobbyVisionToggler_LobbyVisionType);
MARK_REF_T(::GlobalNamespace::LobbyVisionToggler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LobbyVisionToggler_LobbyVisionType, "", "LobbyVisionToggler/LobbyVisionType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LobbyVisionToggler*, "", "LobbyVisionToggler");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LobbyVisionToggler/LobbyVisionType
struct CORDL_TYPE LobbyVisionToggler_LobbyVisionType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LobbyVisionToggler_LobbyVisionType_Unwrapped
enum struct __LobbyVisionToggler_LobbyVisionType_Unwrapped : int32_t {
__E_ShowWithLobbyVision = static_cast<int32_t>(0x0),
__E_HideWithLobbyVision = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LobbyVisionToggler_LobbyVisionType_Unwrapped () const noexcept {
return static_cast<__LobbyVisionToggler_LobbyVisionType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LobbyVisionToggler_LobbyVisionType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LobbyVisionToggler_LobbyVisionType(int32_t  value__) noexcept;

/// @brief Field HideWithLobbyVision value: I32(1)
static ::GlobalNamespace::LobbyVisionToggler_LobbyVisionType const HideWithLobbyVision;

/// @brief Field ShowWithLobbyVision value: I32(0)
static ::GlobalNamespace::LobbyVisionToggler_LobbyVisionType const ShowWithLobbyVision;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4948};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LobbyVisionToggler_LobbyVisionType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LobbyVisionToggler_LobbyVisionType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies LobbyVisionToggler::LobbyVisionType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LobbyVisionToggler
class CORDL_TYPE LobbyVisionToggler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LobbyVisionType = ::GlobalNamespace::LobbyVisionToggler_LobbyVisionType;

/// @brief Field lobbyVisionMesh, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyVisionMesh, put=__cordl_internal_set_lobbyVisionMesh)) ::UnityW<::UnityEngine::Mesh>  lobbyVisionMesh;

/// @brief Field meshFilter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshFilter, put=__cordl_internal_set_meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  meshFilter;

/// @brief Field normalMesh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_normalMesh, put=__cordl_internal_set_normalMesh)) ::UnityW<::UnityEngine::Mesh>  normalMesh;

/// @brief Field onChange, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onChange, put=setStaticF_onChange)) ::System::Action_1<bool>*  onChange;

/// @brief Field pegTileRenderer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_pegTileRenderer, put=__cordl_internal_set_pegTileRenderer)) ::UnityW<::GlobalNamespace::PegTileRenderer>  pegTileRenderer;

/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field type, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::LobbyVisionToggler_LobbyVisionType  type;

static inline ::GlobalNamespace::LobbyVisionToggler* New_ctor() ;

/// @brief Method OnChange, addr 0x1803ed1c0, size 0xe0, virtual false, abstract: false, final false
inline void OnChange(bool  lobbyVisionActive) ;

/// @brief Method OnDisable, addr 0x1803ed2a0, size 0xf0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803ed390, size 0xf0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetLobbyVisionActive, addr 0x1803ed480, size 0x70, virtual false, abstract: false, final false
static inline void SetLobbyVisionActive(bool  active) ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_lobbyVisionMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_lobbyVisionMesh() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_meshFilter() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_normalMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_normalMesh() ;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer> const& __cordl_internal_get_pegTileRenderer() const;

constexpr ::UnityW<::GlobalNamespace::PegTileRenderer>& __cordl_internal_get_pegTileRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::GlobalNamespace::LobbyVisionToggler_LobbyVisionType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::LobbyVisionToggler_LobbyVisionType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_lobbyVisionMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_normalMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_pegTileRenderer(::UnityW<::GlobalNamespace::PegTileRenderer>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::LobbyVisionToggler_LobbyVisionType  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<bool>* getStaticF_onChange() ;

static inline void setStaticF_onChange(::System::Action_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyVisionToggler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyVisionToggler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyVisionToggler(LobbyVisionToggler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyVisionToggler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyVisionToggler(LobbyVisionToggler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4949};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field type, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::LobbyVisionToggler_LobbyVisionType  ___type;

/// @brief Field meshFilter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___meshFilter;

/// @brief Field normalMesh, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___normalMesh;

/// @brief Field lobbyVisionMesh, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___lobbyVisionMesh;

/// @brief Field pegTileRenderer, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PegTileRenderer>  ___pegTileRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LobbyVisionToggler, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyVisionToggler, ___type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyVisionToggler, ___meshFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyVisionToggler, ___normalMesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyVisionToggler, ___lobbyVisionMesh) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyVisionToggler, ___pegTileRenderer) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LobbyVisionToggler) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

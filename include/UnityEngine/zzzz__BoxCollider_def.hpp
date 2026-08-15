#pragma once
// IWYU pragma private; include "UnityEngine/BoxCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
CORDL_MODULE_EXPORT(BoxCollider)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class BoxCollider;
}
// Write type traits
MARK_REF_T(::UnityEngine::BoxCollider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::BoxCollider*, "UnityEngine", "BoxCollider");
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.BoxCollider
class CORDL_TYPE BoxCollider : public ::UnityEngine::Collider {
public:
// Declarations
 __declspec(property(get=get_center, put=set_center)) ::UnityEngine::Vector3  center;

 __declspec(property(get=get_size, put=set_size)) ::UnityEngine::Vector3  size;

static inline ::UnityEngine::BoxCollider* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_center, addr 0x1822fb750, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_center() ;

/// @brief Method get_center_Injected, addr 0x1822fb740, size 0x10, virtual false, abstract: false, final false
static inline void get_center_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_size, addr 0x1822fb7a0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_size() ;

/// @brief Method get_size_Injected, addr 0x1822fb790, size 0x10, virtual false, abstract: false, final false
static inline void get_size_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret) ;

/// @brief Method set_center, addr 0x1822fb7f0, size 0x30, virtual false, abstract: false, final false
inline void set_center(::UnityEngine::Vector3  value) ;

/// @brief Method set_center_Injected, addr 0x1822fb7e0, size 0x10, virtual false, abstract: false, final false
static inline void set_center_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

/// @brief Method set_size, addr 0x1822fb830, size 0x30, virtual false, abstract: false, final false
inline void set_size(::UnityEngine::Vector3  value) ;

/// @brief Method set_size_Injected, addr 0x1822fb820, size 0x10, virtual false, abstract: false, final false
static inline void set_size_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoxCollider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoxCollider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoxCollider(BoxCollider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoxCollider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoxCollider(BoxCollider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20181};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::BoxCollider) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
